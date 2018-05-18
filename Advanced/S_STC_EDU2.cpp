#include <iostream>
#include <string>

using namespace std;
typedef struct {
	int day;
	int month;
	int year;
}date;
typedef struct{
	string nom;
	string prenom;
	string addresse;
	date naissance;
	int age = 2018 -naissance.year;
	float moyenne;
} Etudiant;

void lecture(Etudiant *, int);
void affiche(Etudiant *, int);
void trie(Etudiant*, int, int);
int main(void){

Etudiant eleves[10];
lecture (eleves, 2);
//affiche(eleves, 2);
trie(eleves, 2, 1);

return 1;
}

void lecture(Etudiant *ID_PTR, int n){
	
	for (int i=0; i<n; i++){
		cout << "\t\t====================== Remplissage ID: " << i+1 << " ======================"<< endl<< endl;
			cout << "\t\t\t Prenom\t\t:\t"; cin >> ID_PTR[i].prenom;
			cout << "\t\t\t Nom\t\t:\t"; cin >> ID_PTR[i].nom;
			fflush(stdin);
			cout << "\t\t\t Addresse\t:\t";
			getline(cin, (ID_PTR[i].addresse));
		
			cout << "\t\t\t DateNai(J M A)\t:\t"; 
			cin >> ID_PTR[i].naissance.day;
			cin >> ID_PTR[i].naissance.month;
			cin >> ID_PTR[i].naissance.year;

			cout << "\t\t\t Moyenne\t:\t"; cin >> ID_PTR[i].moyenne;
			system("cls");		
	}

}

void affiche(Etudiant *ID_PTR, int n){
	
	for (int i=0; i<n; i++){
		cout << "\t\t====================== Affichage ID: " << i+1 << " ======================"<< endl<< endl;
			cout << "\t\t\t Prenom\t\t:\t"; cout << ID_PTR[i].prenom << endl;
			cout << "\t\t\t Nom\t\t:\t"; cout << ID_PTR[i].nom<< endl;
			cout << "\t\t\t Adresse\t:\t"; cout << ID_PTR[i].addresse<< endl;
			cout << "\t\t\t DateNai\t:\t"; cout << ID_PTR[i].naissance.day << "/"<< ID_PTR[i].naissance.month << "/"<< ID_PTR[i].naissance.year<<endl;
			cout << "\t\t\t Moyenne\t:\t"; cout << ID_PTR[i].moyenne<< endl;
			cout << "\n\t\t"; system("pause");
			system("cls");		
	}

}

void trie(Etudiant*eleve, int n, int type){
	int typo[n];
	int indice[n];
	int i;
	for (i = 0; i<n; i++) typo[i] = (type == 1 ? eleve[i].moyenne : (2018-eleve[i].naissance.year));
	for (i=0; i<n; i++) indice[i] = i;
//type[] = {16,5}

	for (i = 0; i<n; i++) for (int j = i+1; j<n; j++){
		if(typo[i]  > typo[j]){
			int temp = typo[i];
			typo[i] = typo[j];
			typo[j] = temp;
			int indi = indice[i];
			indice[i] = j;
			indice[j] = indi;
		}
	}

for (int i =0; i<n; i++){
	
		cout << "\t\t====================== Affichage ID: " << i+1 << " ======================"<< endl<< endl;
			cout << "\t\t\t Prenom\t\t:\t"; cout << eleve[indice[i]].prenom << endl;
			cout << "\t\t\t Nom\t\t:\t"; cout << eleve[indice[i]].nom<< endl;
			cout << "\t\t\t Adresse\t:\t"; cout << eleve[indice[i]].addresse<< endl;
			cout << "\t\t\t DateNai\t:\t"; cout << eleve[indice[i]].naissance.day << "/"<< eleve[i].naissance.month << "/"<< eleve[i].naissance.year<<endl;
			cout << "\t\t\t Moyenne\t:\t"; cout << eleve[indice[i]].moyenne<< endl;
			cout << "\n\t\t"; system("pause");
			system("cls");		
	
}
}

