#include <stdio.h>
#include <stdlib.h>

int N, i, j; // GLOBAL VARS
void show(int*matrice);
void write(int *matrix);

 
int main(void){
printf("Taper l'ordre de la matrice >> ");
		scanf("%d", &N);
			int matrice[N][N];
			
	// OVERWRITE CURRENT VALUES
   	 write((int *)matrice);
    
	//SHOW THE MATRIX
	show((int *)matrice); 

return 0;
}

void write(int *matrix){
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
      	*((matrix+i*N) + j) = rand()%21 - 222%N;
	    }
	}
    
}

void show(int*matrice){
	printf("\n");
	int j, i;
    for (i=0; i<N; i++){
		for (j=0; j<N; j++){
       		 printf("[%d] \t", *((matrice+i*N) + j));
		}
		printf("\n");
	}
}
