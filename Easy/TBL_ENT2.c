#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void show(int*R, int size);
int main(void){
int * tableau = (int*) malloc(sizeof(int)), i =0;
printf("Taper des entiers successivement ( / pour finir)\n");

while(1){
	
scanf("%d", &tableau[i]);
if (isalpha(tableau[i])) break;
tableau = (int*) realloc(tableau, (++i)*sizeof(int));

}

show(tableau, i);
return 0;
}

//SHOW VALUES OF AN INT LIST
void show(int *R, int size){
	int i;
	for(i=0; i<size;i++){
		printf("Tableau[%d] = %d\n", i, R[i]);
		
	}
	
}
