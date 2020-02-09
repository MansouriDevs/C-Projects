#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <conio.h>
using namespace std;
string ID;
struct Client{
	   int IDC;
	   string nom;
	   string prenom;
	   string profession;
	   string numerotel;
};
struct Compte{
	   int IDCte;
	   string  IDC;
	   float solde;
	   string date;
	 
};

void gestionClients();
void ajouterClient();
int rechercherClient();
void supprimerClient();
void modifier();


void gestionComptes();
void creerCompte();
void consulter();
int rechercher();
void supprimer();

void gestionOperations();
void vertir(int);
int main(){
	system("cls");
cout << "\t\t === MENU BANCAIRE === "<< endl;
	 cout << "\t\t1. === GESTION CLIENTS ===" << endl;
	 cout << "\t\t2. === GESTION COMPTES ==="<<endl;
	 cout << "\t\t3. === GESTION OPERATIONS === "<<endl;
	 cout << "\t\t4. === QUITTER === "<<endl;
	 int choix;
	 cout << endl << "TAPEZ VOTRE CHOIX: ";
	 cin >> choix;

  	 switch(choix){
  	 	case 1: gestionClients(); break;
  	 	case 2: gestionComptes(); break;
  	 	case 3: gestionOperations(); break;
		default: exit(0); break;
	   }
return 0;
}

void gestionComptes(){
	system("cls");
	cout << "\t\t === MENU GESTION COMPTES === "<< endl;
	 cout << "\t\t1. === CREER COMPTE ===" << endl;
	 cout << "\t\t2. === CONSULTER SOLDE ==="<<endl;
	 cout << "\t\t3. === FERMER COMPTE === "<<endl;
	 cout << "\t\t4. === REVENIR ===";
	 
	 int choix;
	 cout << endl << "TAPER VOTRE CHOIX: ";
	 cin >> choix;
  	 
  	 switch(choix){
  	 	case 1: creerCompte(); break;
  	 	case 2: consulter(); break;
  	 	case 3: supprimer(); break;
		default: main(); break;
	   }
}

void creerCompte()
{
		system("cls");
	ofstream fichier("C:/User/Nada/Desktop/TPS/", ios::app);
	Compte C;
 
 	 cout << "\t\t === SAISIE DE COMPTE === "<< endl;
 	 

 	 	if(rechercherClient() == 0) {
 	 		cout << "CE CLIENT N EXISTE PAS!" << endl;
 	 		exit(1);
		  }
		  
		  C.IDC = ID;
	 
	 cout << "\t\t NUM COMPTE: "; cin>> C.IDCte;
	 	 cout << "\t\t DATE: "; cin>> C.date;
	 cout << "\t\t SODLE: "; cin>> C.solde;
	
	fichier << C.IDCte<<" "<< C.IDC<<" "<<C.date<< " "<<C.solde<<endl;
	fichier.close();
	gestionComptes();
}

void consulter(){
	int L = rechercherClient();
	if(L == 0){
			 exit(2);
	}
	
		ifstream fichier("C:/User/Nada/Desktop/TPS/");
			int nb = 0;
			string line, idcm, idc, date;
			float solde;
			while ( L != (nb+1)){
				getline(fichier, line);
				nb++;
			}
			fichier >> idcm;
			fichier >> idc;
			fichier >> date;
			fichier >>solde;
				cout << "\t\t === SON SOLDE EST === "<< solde <<endl;

				fichier.close();


	
	
}

int recher(){
	ifstream fichier("C:/User/Nada/Desktop/TPS/");
	string IDC;
	string line;
	cout << endl << "TAPER ID DU COMPTE: ";
	cin >> IDC;
	ID = IDC; 
	int nb = 1;
	while (getline(fichier, line)){
		  if(line.find(IDC) == 0){
		  	cout <<"\t\t === LE COMPTE EST TROUVE ==="<<endl;
		  	cout << "\t\t"  << line <<endl;
		  	fichier.close();
		  	return nb;
		  }
		  nb++;
	
	}
	cout <<"\t\t === LE COMPTE EST NON TROUVE ==="<<endl;
	fichier.close();
	return 0;
		
}
void gestionClients(){
	system("cls");
	cout << "\t\t === MENU GESTION CLIENTS === "<< endl;
	 cout << "\t\t1. === AJOUTER CLIENT ===" << endl;
	 cout << "\t\t2. === MODIFIER CLIENT ==="<<endl;
	 cout << "\t\t3. === CHERCHER CLIENT === "<<endl;
	 cout << "\t\t4. === SUPPRIMER CLIENT === "<<endl;
	 cout << "\t\t5. === REVENIR ===";
	 
	 int choix;
	 cout << endl << "TAPEZ VOTRE CHOIX: ";
	 cin >> choix;
  	 
  	 switch(choix){
  	 	case 1: ajouterClient(); break;
  	 	case 2: modifier(); break;
  	 	case 3: rechercherClient(); break;
		case 4: supprimerClient(); break;
		default: main(); break;
	   }
}
void ajouterc()
{
		system("cls");
	ofstream fichier("C:/User/Nada/Desktop/TPS/", ios::app);
	Client C;
		cout << "\t\t === SAISI DE CLIENT === "<< endl;
	 cout << "\t\t ID CLIENT: "; cin >> C.IDC;
	 
	 cout << "\t\t NOM: "; cin>> C.nom;
	 cout << "\t\t PRENOM: "; cin>> C.prenom;
	 	 cout << "\t\t PROFESSION: "; cin>> C.profession;
	 	  cout << "\t\t NUMTEL: "; cin>> C.numerotel;
	
	fichier << C.IDC<<" "<< C.nom<<" "<<C.prenom<< " "<<C.profession<<" "<<C.numerotel<<endl;
	fichier.close();
	gestionClients();
}

int rechercherc()
{
	ifstream fichier("C:/User/Nada/Desktop/TPS/");
	string IDC;
	string line;
	cout << endl << "TAPER L ID CLIENT: ";
	cin >> IDC;
	ID = IDC; 
	int nb = 1;
	while (getline(fichier, line)){
		  if(line.find(IDC) == 0){
		  	cout <<"\t\t === LE CIENT EST TROUVE ==="<<endl;
		  	cout << "\t\t"  << line <<endl;
		  	fichier.close();
		  	return nb;
		  }
		  nb++;
	
	}
	cout <<"\t\t === LE CIENT EST NON TROUVE ==="<<endl;
	fichier.close();
	return 0;
	
}
void supprimer ()
{
	
	int L = recher();
	string line;
	int nb = 1;
	if(L != 0){	
	ifstream fichier("C:/User/Nada/Desktop/TPS/");
	ofstream temp("C:/Users/Nada/Desktop/TPS/temp.txt");
	  while (getline(fichier,line)){
        if (nb != L)
        {
            temp << line << endl;
        }
        nb++;
    }
	fichier.close();
	temp.close();
	remove("C:/User/Nada/Desktop/TPS/");
    rename("C:/Users/Nada/Desktop/TPS/temp.txt","C:/User/Nada/Desktop/TPS/");	
		  	cout <<"\t\t === CE COMPTE EST SUPPRIME ==="<<endl;
	}
}
void supprimerc ()
{
	
	int L = rechercherc();
	string line;
	int nb = 1;
	if(L != 0){	
	ifstream fichier("C:/User/Nada/Desktop/TPS/");
	ofstream temp("C:/Users/Nada/Desktop/TPS/temp.txt");
	  while (getline(fichier,line)){
        if (nb != L)
        {
            temp << line << endl;
        }
        nb++;
    }
	fichier.close();
	temp.close();
	remove("C:/User/Nada/Desktop/TPS/");
    rename("C:/Users/Nada/Desktop/TPS/temp.txt","C:/User/Nada/Desktop/TPS/");	
		  	cout <<"\t\t === CE CIENT EST SUPPRIME ==="<<endl;
	}
}
void modifier()
{
	
	system("cls");
	int L = rechercherc();
	if(L != 0){
			ifstream fichier("C:/User/Nada/Desktop/TPS/");
			ofstream temp("C:/Users/Nada/Desktop/TPS/temp.txt");
			int nb = 0;
			string line, idc, n, p, pr, nt;
			while ( L != (nb+1)){
				getline(fichier, line);
				temp << line << endl;
				nb++;
			}
			fichier >> idc;
			fichier >> n;
			fichier >> p;
			fichier >>pr;
			fichier >> nt;
			
			int choix;
				cout << "\t\t === MODIFICATION CLIENT === "<< endl;
	 cout << "\t\t1. *** NOM ***" << endl;
	 cout << "\t\t2. *** PRENOM ***"<<endl;
	 cout << "\t\t3. *** PROFESSION *** "<<endl;
	 cout << "\t\t4. *** NUM DE TEL ***"<<endl;
	 cout << "\t\t5. *** REVENIR ***" << endl;
 	 cout << endl << "TAPEZ VOTRE CHOIX: ";
	 cin >> choix;
	  	 cout << endl << "TAPEZ LA VALEUR DU CHAMP : ";
	  switch(choix){
  	 	case 1: cin >> p; break;
  	 	case 2: cin >> n; break;
  	 	case 3: cin >> pr; break;
		case 4: cin >> nt; break;
		default: gestionClients(); break;
	   }
	   	temp << idc << " " << n << " " << p << " "<< pr << " "<< nt << endl;
	   
		while (getline(fichier, line)){
					temp << line << endl;
			}
				fichier.close();
	temp.close();
	remove("C:/User/Nada/Desktop/TPS/");
    rename("C:/User/Nada/Desktop/TPS/","C:/User/Nada/Desktop/TPS/");	
		  	cout <<"\t\t === CE CIENT EST MODIFIE ==="<<endl;

		
	}
}
void gestionOperations()
{
	system("cls");
	cout << "\t\t === MENU GESTION OPERATION === "<< endl;
	 cout << "\t\t1. === RETIRER ARGENT ===" << endl;
	 cout << "\t\t2. === VERSER ARGENT ==="<<endl;
	 cout << "\t\t4. === REVENIR ===";
	 
	 int choix;
	 cout << endl << "TAPEZ VOTRE CHOIX: ";
	 cin >> choix;
  	 
  	 switch(choix){
  	 	case 1: vertir(-1); break;
  	 	case 2: vertir(1); break;
  	 	default: main();
	}
}
void vertir(int n){
	
		system("cls");
	int L = recher();
	if(L != 0){
			ifstream fichier("C:/User/Nada/Desktop/TPS/");
			ofstream temp("C:/User/Nada/Desktop/TPS/");
			int nb = 0;
			string line, idcm, idc, date;
			float solde;
			while ( L != (nb+1)){
				getline(fichier, line);
				temp << line << endl;
				nb++;
			}
			fichier >> idcm;
			fichier >> idc;
			fichier >> date;
			fichier >> solde;
			
			int ss;
	  	 cout << endl << "TAPEZ LE MONTANT: ";
	  cin >> ss;
	  
	  solde = solde + n*ss; 
	  
	   	temp << idcm << " " << idc << " " << date << " "<< solde <<endl;
	   
		while (getline(fichier, line)){
					temp << line << endl;
			}
				fichier.close();
	temp.close();
	remove("C:/User/Nada/Desktop/TPS/");
    rename("C:/User/Nada/Desktop/TPS/","C:/User/Nada/Desktop/TPS/");	
		  	cout <<"\t\t === LE MONTANT EST CHANGE ==="<<endl;
	}
}

