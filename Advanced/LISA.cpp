#include <iostream>
using namespace std;
class List{
	protected:
	int data;
	List * next=0;
	
friend class File;
friend class Pile;
friend class DList;
friend class Tree;
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

class Pile : public List{
	List *start=0, *current=0;
	public:
	void push(const int &n){
		
	}
	int pop(){
		if(!(current = start)) return -1;	
		int data = start->data;
		start = start->next;
		delete current; current = 0;
	}
	void show(void){
		current = start;
		while(current){cout << " | " << current->data; current = current->next;}
		cout << endl;
	}
};

class DList : public List{
	friend class Tree;
	protected:
	DList * prev=0, *current=this, *end=0;
	public:
		virtual void push(const int &n){
			if(end){
				end->next = new DList;
				end->next->data = n;
				end = (DList*) end->next;
				end->prev = prev;
				prev = end;
			}else{
				//start = current;
				this->data = n;
				this->next = NULL;
				end = this;
			}
		}
		virtual void show(void){
			//current = (DList*) end;
			current = this;
			while(current){cout << " | " << current->data; current = (DList*) current->next;}
			//while(current){cout << " | " << current->data; current = (DList*) current->prev;}		
			cout << endl;
}
};
class Tree : public DList{
	private:
	DList *start = 0;
	void insert(auto *ptr, int k){
	//insert(n <= ptr->data ? ptr->prev : (DList*&)ptr->next, n);
	while(ptr){
		if(k<ptr->data){
			ptr = ptr->prev;
		}else{
			ptr = (DList*)ptr->next;
		}
	}
	ptr = (DList*)new List();
	ptr->data = k;
}
	public:
		void pushs(const int &n){
			insert(start, n);
		}
		void shozw(){
			cout << start->data;cout <<endl;
			cout << start->prev->data;
			//cout << start->prev->prev->data;
		}
};

int main(void){
	Tree T;
	T.pushs(5); 
	T.pushs(7);
	//T.pushs(3);
	T.shozw();
/*

DList DL;
DL.push(25);
DL.push(24);
DL.push(23);
DL.push(22);
cout << "DL : "; DL.show();
cout << "DL : "; DL.show();
*/

/*
File F; //FIFO
Pile P; //LIFO

F.push(1);
F.push(2);
F.push(3);

P.push(6);
P.push(7);
P.push(8);

cout << "File : "; F.show();
cout << "Pile : "; P.show();

P.pop();
F.pop();

cout << "Pile : "; P.show();
cout << "File : "; F.show();

*/
return 1;
}

