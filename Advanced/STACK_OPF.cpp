#include <iostream>
//EX: 1
using namespace std;
struct stack{
	int data;
	stack * next;
};
stack * start = NULL;
stack * end = NULL;
void push(int);
int pop(void);
void affich(void);

int main(void){
push(13);
push(14);
push(16);
push(32);
affich();
pop();
affich();
}

void push(int data){
	stack * temp = start;
	start = new stack;
	start->data = data;
	start->next = temp;	
}

int pop(void){
	
	stack * temp = start;
	int data = start->data;
	start = start->next;
	
	delete [] temp; temp = NULL;
	
	return data;
}

void affich(void){
	cout << "\t\t========= STACK VALUES =========\n\n";
	stack *temp = start;
	while(temp != NULL){
		cout << "\t\t\t\t" << temp->data << endl;
		temp = temp->next;
	}	
}


