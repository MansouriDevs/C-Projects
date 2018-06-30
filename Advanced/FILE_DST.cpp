#include <iostream>
using namespace std;
struct File{
	string name;
	File * next;
};
File * start = NULL;
void affich();
void enfile(string);
void enfile_rec(string, File *&);
string defiler();

int main(void){
enfile("Hi");
enfile("Salam");
enfile("Bonjour");
enfile("Nihaw");

affich();
system("pause");

defiler();
affich();

return 1;
}

void enfile(string data){
	if(start == NULL){
		start = new File();
		start->name = data;
		start->next = NULL;
	}else{
		enfile_rec(data, start->next);
	}
	
}
void enfile_rec(string data, File *&ptr){
	if(ptr == NULL){
		ptr = new File();
		ptr->name = data;
		ptr->next = NULL;
	}else{
		enfile_rec(data, ptr->next);
	}
	
}
string defiler(){
	File * temp = start;
	string data = start->name;
	start=start->next;
	delete temp;
	return data;
}

void affich(){
	cout << "\t\t========= FILE VALUES =========\n\n";
	File * temp = start;
	while(temp != NULL){
		cout << "\t\t\t\t" << temp->name << endl;
		temp = temp->next;
	}
}
