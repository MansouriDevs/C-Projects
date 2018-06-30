#include <iostream>

using namespace std;

struct livre{
	string titre;
	string auteur;
	int code;
	int quantite;
	livre *next;
};

livre *start;
void add_new(void);
void affich(int);
void insert(int);
void extrai(int);
int main(void){
start = NULL;

insert(0);
insert(0);
insert(0);

extrai(11);

affich(0);

return 1;
}
void add_new(void){
	livre *temp = start;
	start = new livre;
	
	cout << "\t\t============= INSERTION =============\n\n";
	cout << "\t\tTitre\t:\t"; getline(cin, start->titre);
	cout << "\t\tAuteur\t:\t"; cin.ignore(); getline(cin, start->auteur);
	cout << "\t\tCode\t:\t"; cin>> start->code;
	cout << "\t\tQuantite:\t"; cin >> start->quantite;
	start->next = temp;
	cin.ignore();
}
void insert(int code = 0){
	livre *temp = start;
	while(temp != NULL){
		if (temp->code == code){
			(temp->quantite)++;
			break;
		}
		temp = temp->next;
	}
	
	if(!code) add_new();
	
}

void affich(int code = 0){
livre *temp = start;
	system("cls");
if(code != 0){
		while(temp != NULL){
		if (temp->code == code){
			(temp->quantite)++;
			cout << "\t\t============= Affichage Livre =============\n\n";
			cout << "\t\tTitre\t:\t"; cout << temp->titre<<endl;
			cout << "\t\tAuteur\t:\t"; cout << temp->auteur<<endl;
			cout << "\t\tCode\t:\t"; cout << temp->code<<endl;
			cout << "\t\tQuantite:\t"; cout << temp->quantite<<endl;
			break;
		}
		temp = temp->next;
		}
		
		}else{
			while(temp != NULL){
			cout << "\t\t============= Affichage Livre =============\n\n";
			cout << "\t\tTitre\t:\t"; cout << temp->titre<<endl;
			cout << "\t\tAuteur\t:\t"; cout << temp->auteur<<endl;
			cout << "\t\tCode\t:\t"; cout << temp->code<<endl;
			cout << "\t\tQuantite:\t"; cout << temp->quantite<<endl;
			temp = temp->next;
		}
	
	}
}
void extrai(int code){
	livre *temp = start;
	int i = 1;
	
	while(temp != NULL){
		if (temp->code == code) break;
		temp = temp->next;
		i++;
	}
	
	temp = start;
	int j=0;
	while((j<i-2 && ++j)) temp = temp->next;
	temp->next = temp->next->next;
	
	
}




