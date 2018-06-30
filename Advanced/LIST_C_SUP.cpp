#include <iostream>

using namespace std;

struct myList{
	int value;
	myList *next;
};
bool isvide(myList *);
void affich(myList *);
void insert_f(int);
void insert_s(int);
void insert_r(int, int);
void sup_f();
void sup_s();
void sup_i(int);
void creer(int);
void trs(myList*);

myList *start,*fin;

int main(void){
//creer(3);
//cout << endl << "I). Creation" << endl; affich(start);

//insert_f(4);
//insert_f(5);
//cout << endl<<endl << "II). Insertion Fin" << endl; affich(start);

insert_s(6);
insert_s(7);
cout << endl<<endl << "III). Insertion Debut" << endl; affich(start);

//insert_r(0, 3);
//cout << endl<<endl << "IV). Insertion Positionelle" << endl; affich(start);

//sup_s();
//cout << endl<<endl << "V).Supression Debut" << endl; affich(start);

//sup_f();
//cout << endl<<endl << "VI).Supression Fin" << endl; affich(start);

//sup_i(2);
//cout << endl<<endl << "VII).Supression Positionelle" << endl; affich(start);

//trs(start);
//cout << endl<<endl << "VIII).TRIE" << endl; affich(start);


return 0;
}

void creer(int n){
if (n != 0){
	start = new myList;
	start->value = 1;
	fin = start;
	start->next	= NULL;
	for (int i = 1; i<n; i++){
		fin->next = new myList();
		fin = fin->next;
		fin->value = i+1;
	} 
	fin->next = NULL;
}
}

void affich(myList *start){
myList *ptr = start;
while (ptr != NULL){
	cout << ptr->value << " --> ";
	ptr = ptr->next;
}
cout << "NULL";
	
}

void insert_f(int k){
	fin->next = new myList;
	fin = fin->next;
	fin->value = k;
	fin->next = NULL;
}


bool isvide(myList *str){
	return (str == NULL) ? true: false;
}

/*

*/
void insert_s(int k){
	myList *temp = start;
	
	start = new myList;
	start->value = k;
	start->next = temp;
}

void sup_f(){
	myList *temp = start;
if (temp->next == NULL){
	start = NULL;
}else{
	while (temp->next->next) temp = temp->next;
	temp->next = NULL;
}
	
}
void sup_s(){
	start = start->next;
}

void insert_r(int k, int n){
	myList *temp = start, *temp2;
	int i =0;
	while((i<n-2 && ++i)) temp = temp->next;
	temp2 = temp->next;
	temp->next = new myList;
	temp->next->value = k;
	temp->next->next = temp2;

}

void sup_i(int n){
	myList *temp = start, *temp2;
	int i =0;
	while((i<n-2 && ++i)) temp = temp->next;
	temp->next = temp->next->next;

}

void trs(myList *in){
	myList *str = in;
	myList *temp;
for (; str != NULL; str = str->next){
	for (temp = str->next; temp != NULL; temp = temp->next){
		if (str->value > temp->value){
			int t = str->value;
			 str->value = temp->value;
			 temp->value = t;
		}
	}
};
}
