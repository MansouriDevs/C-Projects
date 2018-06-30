#include <iostream>
using namespace std;
class List{
	protected:
	int data;
	List * next = 0;
	friend class DList;
	friend class Arbre;
};

class DList : public List{
	protected:
	DList * prev = 0;

	friend class Arbre;
};

class Arbre : public DList{
	DList * start = 0;
	public:
		void push(const int &n){
			insert(start, n);
		};
		void insert(DList *&ptr, const int &n){
			if(ptr == 0){
				ptr = new DList;
				ptr->data = n;
			}else{
				insert(n <= ptr->data ? ptr->prev : (DList*&)ptr->next, n);
			}
		}
		
		void show(){
			cout << start << endl;
			cout << start->data << endl; // 5
			cout << start->next->data << endl; // 6
			cout << start->prev->data << endl; // 4
			cout << start->prev->prev->data; // 2
		}
		
};
int main(void){
Arbre A;
A.push(5);
A.push(6);
A.push(4);
A.push(2);
A.show();
return 1;
}

