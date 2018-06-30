#include <iostream>
using namespace std;
class List{
public:
		int data;
		List * next;

};

class File : public List{
	int sizee;
	public:
		File(){sizee = 0;}
		int size(const int &n=0){ sizee+=n; return sizee;}
	List *temp1, *temp = this;
	int push(const int &n){
		if(size() == 0){
		this->data = n;
		this->next = NULL;
		}else{
			temp = this;
			while(temp->next  != NULL) temp = temp->next;
			temp->next = new List();
			temp->next->data = n;
		}
		size(1);
		return size();
	}
	
	int pop(){
		int d = this->data;
		temp = this;
		if(size() == 1){this->data = 0; size(-1); return d;}
		for(int i=0; i<size()-1; i++){
			temp1 = temp;
			temp->data = temp->next->data;
			temp = temp->next;
		}
		size(-1);
		delete temp1->next;
		temp1->next =NULL;
		return d;
	}
	void affich(){
		temp = this;
		while(temp!=NULL){
			cout <<  " | " << temp->data;
			temp = temp->next;
		}
	}
};

int main(void){
File F;
F.push(1);
F.push(2);
F.push(3);
F.push(4);
F.push(5);


File F1;
F1.push(88);
F1.push(52);
cout << endl<< "Size : " << F.size() << endl;
cout << "File : "; F.affich();

cout << endl<< "Size : " << F1.size() << endl;
cout << "File : "; F1.affich();
return 1;
}

