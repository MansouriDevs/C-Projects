#include <iostream>
#include <cstdlib>
using namespace std;

void allocate(int *** pointer, int n, int m){
	
	int i;
	*pointer = (int**)calloc(n, sizeof(int*));
	
for (int i = 0; i<6; i++) *(*pointer+i) = (int*) calloc(m, sizeof(int));

}
int main(void){

int **P;

int i;
allocate(&P, 6, 4);
for(i = 0; i<6; i++){
	
	for(int j = 0; j<4; j++){
		cin >> *(*(P+i) +j);
	}
}

for(i = 0; i<6; i++){
	cout << endl;
	for(int j = 0; j<4; j++){
		cout << " " << *(*(P+i) +j);
	}
}
free(P);

return 0;
}

