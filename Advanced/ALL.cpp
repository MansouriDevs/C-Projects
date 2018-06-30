#include <iostream>
using namespace std;
class List{
	public:
		int data;
		List * next;
};
class File : public List{

	public:
	void push(int n){
		static int i = 0;
		if (i++<1){
		this->data = n;
		this->next = NULL;
		}else{
			List * temp = this;
			while(temp->next != NULL) temp = temp->next;
			temp->next = new File();
			cout << &temp->next << endl;
			temp->next->data = n;
			temp->next->next = NULL;
		}
	}
	void affich(){
		List * temp = this;
		while(temp != NULL){
			cout << " | " << temp->data;
			temp = temp->next;
		}
		cout <<" |" << endl;
		return;
	}
	void pop(){
	//* = *(this->next);
	int d = this->data;
	List * temp = this;
	List * temp1;
	while(temp->next != NULL){
	temp->data = temp->next->data;
	temp1 = temp;
	temp = temp->next;}
	cout << temp1 << endl;
	temp = NULL;
	}

};
int main(void){
File F;

F.push(5);
F.push(25);
F.push(26);
F.push(27);
F.push(28);
cout << "File : "; F.affich();
F.pop();
cout << "File : "; F.affich();
return 1;
}

