#include <iostream>
using namespace std;

struct livre{
	string titre;
	string auteur;
	int code;
	int quantite;
	livre *next;
};
void insert(livre *&);
void push_start(livre*&);
void push_end(livre*&);
void tirer(int);
void affich(livre * const);
bool remove(livre*&, int);
livre *tete = NULL;

int main(void){
	
push_end(tete);
push_end(tete);
push_end(tete);

tirer(1); // 1 c'est le code de livre à tirer, si quantité == 1 alors remove it.
affich(tete);

cout << endl << system("pause");

tirer(2);
affich(tete);



return 1;
}

void push_end(livre *&tete){
	livre * tmp = tete;
	if(tete==NULL){
		tete = new livre;
		tete->next = NULL;
		insert(tete);
	}else{
		while(tmp->next != NULL) tmp= tmp->next;
		tmp->next = new livre;
		tmp->next->next = NULL;
		insert(tmp->next);
	}
}

void push_start(livre*&tete){
	livre * tmp = tete;
	tete = new livre;
	tete->next = tmp;
	insert(tete);
}


bool remove(livre*&tete, int  i=0){
	
	if (i==0){
		tete = tete->next;
	}else{
		int n =0;
		livre * temp = tete;
		while(n++<i-1) temp = temp->next;
		temp->next = temp->next->next;
	}
return true;	
}
void tirer(int code){
	livre *temp = tete;
	int i =0;
	
	while(temp != NULL && (temp->code != code) && ++i) temp = temp->next;
	temp->quantite > 1 && temp->code == code ? (temp->quantite)-- : remove(tete, i);
		
}

void insert(livre *&node){
	cout << "\t\t============= INSERTION =============\n\n";
	cout << "\t\tTitre\t:\t"; getline(cin, node->titre);
	cout << "\t\tAuteur\t:\t";getline(cin, node->auteur);
	cout << "\t\tCode\t:\t"; cin>> node->code;
	cout << "\t\tQuantite:\t"; cin >> node->quantite;
	cin.ignore();
	
}

void affich(livre * const tete){
	system("cls");
	livre * temp = tete;
	while(temp != NULL){
	cout << "\t\t============= Affichage =============\n\n";
	cout << "\t\tTitre\t:\t" << temp->titre <<endl;
	cout << "\t\tAuteur\t:\t" << temp->auteur <<endl;
	cout << "\t\tCode\t:\t" << temp->code <<endl;
	cout << "\t\tQuantite:\t" << temp->quantite <<endl;	
	cout << endl;
	temp = temp->next;
	
	}
}


