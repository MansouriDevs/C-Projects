#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
int mat[4][5] = {{0,0,0,0,2},
				 {1,0,0,2,0},
				 {0,0,0,0,0},
				 {0,0,0,0,0}};
				 
    int size = 0;
    for (int i = 0; i < 4; i++) for (int j = 0; j < 5; j++) if (mat[i][j] != 0) size++;
    
    int L3[size][3];
    int k = 0;
    for (int i = 0; i<4; i++){
    	for (int j =0; j<5; j++){
    		if(mat[i][j] != 0){
    			L3[k][0] = i;
				L3[k][1] = j;
				L3[k][2] = mat[i][j];
				k++;	
			}
		}
	}
	
	for (int i= 0; i<size; i++){
		for (k = 0; k<3; k++){
			cout << setw(3) << L3[i][k];
		}
		cout << endl;
	}


return 1;
}
