#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

void Create(double ***Matrice, int L, int C){
 *Matrice = (double**) calloc(L, sizeof(double*)); // Create L lines.

	int i;
	for (i=0; i<L; i++) *((*Matrice)+i) = (double*) calloc(C,sizeof(double)); // Create C columns.

	for (i = 0; i<L; i++) for (int j = 0; j<C; j++) cin >> *(*(*Matrice+i)+j); // Fill the matrix manually.

/*
INPUT SAMPLE:
1 2 3 4
5 6 7 8
9 8 0 1
*/
}

void print(double ***Matrice, int L, int C){
	int i;
	for (i = 0; i<L; i++){
		for (int j = 0; j<C; j++) cout << setw(2) << *(*(*Matrice+i)+j);
		cout << endl;
	}
}

int main(void){

double **matrice; //matrice[L][C]

Create(&matrice, 3,4);

//*(*(matrice +i) +j) = matrice[i][j];

print(&matrice, 3,4);

	cout << endl << system("pause");
return 0;
}
