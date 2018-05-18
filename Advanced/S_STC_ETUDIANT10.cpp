#include <iostream>

using namespace std;
typedef struct naiss{
	int j;
	int m;
	int a;
};
typedef struct Etudiant{
	string nom;
	string prenom;
	string addresse;
	float moyenne;
	naiss date;
};

void write(Etudiant *elvos, int n){
	for (int i = 0; i<n; i++){
		cout << "\t\tETUDIANT " << i+1<<endl;
		cout << "Nom\t:\t"; cin >> elvos[i].nom;
		cout << "Prenom\t:\t"; cin >> elvos[i].prenom;
		fflush(stdin);
		//getchar();
		cout << "Addresse:\t"; getline(cin,elvos[i].addresse);
		cout << "Moyenne\t:\t"; cin >> elvos[i].moyenne;
		cout << "Date\t:\t"; cin >> elvos[i].date.j; cin >> elvos[i].date.m; cin >> elvos[i].date.a;
		system("cls");
		
	}
}
void read(Etudiant *elvos, int n){
	for (int i = 0; i<n; i++){
		cout << "\t\t=== ETUDIANT " << i+1<< " ==="<<endl<<endl;
		cout << "Nom\t:\t"; cout << elvos[i].nom<<endl;
		cout << "Prenom\t:\t"; cout << elvos[i].prenom<<endl;
		cout << "Addresse:\t"; cout << elvos[i].addresse<<endl;
		cout << "Moyenne\t:\t"; cout << elvos[i].moyenne<<endl;
		cout << "Date\t:\t"; cout << elvos[i].date.j << '-' << elvos[i].date.m << '-' << elvos[i].date.a<<endl;
		cout <<endl;
		
	}
	
}
int main(void){
Etudiant elv[10];
write(elv, 2);
read(elv, 2);
return 1;
}


