#include <iostream>
using namespace std;
void trie(int *T, int debut, int fin){
	int gauche = debut, droite = fin, pivot = T[(debut+fin)/2];
	do{
		while(T[gauche] < pivot) gauche++;
		while(T[droite] > pivot) droite--;
		if(gauche<= droite){
			int temp = T[gauche];
			T[gauche++] = T[droite];
			T[droite--] = temp;
		}
	}while(gauche<=droite);

	if(debut<droite) trie(T, debut, droite);
	if(gauche<fin) trie(T, gauche, fin);

}
void print(int *T, int n){
	for(int i =0; i<n; i++){
		cout << T[i] << " ";
	}
	cout << endl;
}
int main(void){

int Tableau[9] = {-29,13,-36,14,20,102,8,-11,45};
trie(Tableau, 0,8);
print(Tableau, 9);
return 1;
}

