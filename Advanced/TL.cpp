#include <iostream>
using namespace std;
class Tableau{
	protected:
	int **T, TL, TC;
	public:
		
		Tableau(int C =1, int L = 1){
			TL = C;
			TC = L;
			T = new int*[L];
			for (int i =0; i<L; i++) *(T+i) = new int[C];
		}
	void saisie(){
		for (int i = 0; i<TL; i++)
			for(int  j= 0; j<TC; j++) 
				cin >> T[i][j];
	}
	
	void affich(){
		for (int i = 0; i<TL; i++){
				for(int j = 0; j <TC; j++)
					cout << T[i][j] << " ";
				cout << endl;
		}
	}
};

class Matrice : public Tableau{
	
	public:
		Matrice(int L = 1, int C =1) : Tableau(L,C){}

			
};
int main(void){

//Tableau T(10);

Matrice M(3,4);
M.saisie();

cout << endl;
M.affich();

return 1;
}

