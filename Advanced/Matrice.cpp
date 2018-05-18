#include <iostream>
using namespace std;
class Tableau{
	protected:
		int *T, size;
	public:
		Tableau(const int &L=1){
			size = L;
			T = new int[size];
		}	
		virtual void write(void){for (int i =0; i<size; i++) cin >> *(T+i);}
		virtual void show(void){for (int i=0; i<size; i++) cout << " | " << *(T+i); cout << endl;}	
};

class Matrice : public Tableau{
	int **TM, L, C;
	public:
		Matrice(const int &L1=1, const int &C1=1) : Tableau(L1){
			L = L1;
			C = C1;
			TM = (int**) T; // Magic starts here :)
			for(int i=0; i<L; i++) *(TM+i) = new int[C];
		}
	void write(void){
		for (int i=0; i<L; i++) 
			for(int j=0; j<C; j++)
				cin >> *(*(TM+i) + j);
	}
	void show(void){
		for (int i=0; i<L; i++) {
			for(int j=0; j<C; j++)
				cout << *(*(TM+i) + j) << " ";
			cout << endl;
		}
	}		
		
};
int main(void){
/*
Tableau T(5);
T.write();
cout << "Tableau T: "; T.show(); 
*/

Matrice M(2,3); // 2 Lines, 3 Columns : 2x3 Matrix.
M.write();
cout << "Matrice M:\n"; M.show();

return 1;
}

