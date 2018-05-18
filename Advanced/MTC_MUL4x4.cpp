#include <iostream>

using namespace std;

int aff(int (*MAT)[4], int n){
	int i, j;       
		for(i = 0 ; i < n ; i++) {    
      		cout << endl;
		for(j = 0 ; j < n; j++) cout << " " << MAT[i][j];
}
	

}
int main(void){
	 int MAT1[4][4];
	 int MAT2[4][4];
	 int PROD[4][4];
	 int i, j;
	for (i = 0; i<4; i++) for (j=0; j<4; j++) cin >> MAT1[i][j];	
	cout << endl;
	for (i = 0; i<4; i++) for (j=0; j<4; j++) cin >> MAT2[i][j];	
	cout << endl;	
	
	for (i = 0; i<4; i++){
		for (j = 0; j<4; j++ ){
			PROD[i][j] = 0;
			
			for(int k = 0; k<4; k++){
			PROD[i][j] += MAT1[i][k]*MAT2[k][j];	
			}
		}
	}
	
	aff(PROD, 4);
	return 0;
}


