#include <iostream>
using namespace std;
class List{
	protected:
	int data;
	List * next = 0;
	
	friend class File;
	friend class Pile;
	friend class DList;
	friend class Arbre;
};

class File : public List{ //FIFO
	List* end=0, *start=0, *current=0;
	public:
		void push(const int &n){
			if(end && start){
				end->next = new List;
				end->next->data = n;
				end = end->next;
			}else{
				this->data = n;
				this->next = NULL;
				start = this;
				end = this;
			}
		}
		void show(void){
			current = start;
			while(current){cout << " | " << current->data; current = current->next;}
			cout << endl;
		}
		int pop(void){
			if(!(current = start)) return -1;
			int d = start->data;
			start = start->next;
			delete current; current = 0;
			return d;	
		}
		
};

class Pile : public List{ //LIFO
	List *start=0, *current=0;
	public:
	void push(const int &n){
		current = start;
		start = new List;
		start->data = n;
		start->next = current;
	}
	int pop(){
		if(!(current = start)) return -1;	
		int data = start->data;
		start = start->next;
		delete current; current = 0;
		return data;
	}
	void show(void){
		current = start;
		while(current){cout << " | " << current->data; current = current->next;}
		cout << endl;
	}
};

class DList : public List{
	protected:
	DList * prev = 0;
	friend class Arbre;
};

class Arbre : public DList{
	DList * start = 0;
	void insert(DList *&ptr, const int &n){
		if(ptr == 0){
			ptr = new DList;
			ptr->data = n;
			return;
		}
		insert(n <= ptr->data ? ptr->prev : (DList*&)ptr->next, n);	
	} 
	//Root, Right, Left :as is
	void pre(DList*&ptr){ // Root, Left, Right
		if(ptr){
			cout << " " << ptr->data;
			pre(ptr->prev);
			pre((DList*&)ptr->next);
		}
	}
	
	void pos(DList*&ptr){ // Left, Right, Root
		if(ptr){
			pos(ptr->prev);
			pos((DList*&)ptr->next);
			cout << " " << ptr->data;
		}
	}
	
	void in(DList*&ptr){ // Left, Root, Right
		if(ptr){
			in(ptr->prev);
			cout << " " << ptr->data;
			in((DList*&)ptr->next);

		}
	}
	public:
		void push(const int &n){
			insert(start, n);
		};
	
		void preorder(void){
			pre(start);
		}
		void postorder(void){
			pos(start);
		}
		
		void in(void){
			in(start);
		}		
};
int main(void){
File F;
Pile P;
Arbre A;


/*
F.push(4);
F.push(3);
F.push(2);
F.push(1);


cout << "File : "; F.show();
cout << "  >>POP : " << F.pop(); cout << endl;
cout << "File : "; F.show();
*/

/*
P.push(8);
P.push(7);
P.push(6);
P.push(5);

cout << "Pile : "; P.show();
cout << "  >>POP : " << P.pop(); cout << endl;
cout << "Pile : "; P.show();
*/



/*
A.push(4);
A.push(3);
A.push(7);
A.push(2);
A.push(1);
A.push(4);
A.push(3);
A.push(4);
A.push(6);
A.push(8);

cout << endl << "POSTORDER	: "; A.postorder(); 
cout << endl << "PREORDER	: "; A.preorder();
cout << endl << "INORDER		: "; A.in();
*/

return 1;
}

