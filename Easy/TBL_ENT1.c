#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * input();
void show(int*R);
int strin(char*R), fsize;

int main(void){
printf("Taper des entiers(IN+) succesivement : \n");

int * tableau = (int*) malloc(sizeof(int)), i =0;
char *R;

do{
	R = input();
	tableau[i] = strin(R);
	//awella khedem b strtol(R, NULL, 10) instead of strin(R);
	
	tableau = (int*) realloc(tableau, sizeof(int)*(++i));
	
}while(R[0] != '/');
fsize = i;
printf("\n");

//AFFICHAGE DE TABLEAU DES ENTIERS
show(tableau);

return 0;
}

//TAKE A STRING INPUT
char * input(){
	
	char *string = (char *)malloc(sizeof(char));
    int i=0;
    
    while ( (string[i] = getchar()) != '\n'){
        string = (char*) realloc(string, strlen(string)+sizeof(char));
        i++;
    }
    string[i] = NULL;
    return string;
}

//SHOW VALUES OF A LIST
void show(int *R){
	int i;
	for(i=0; i<fsize-1;i++){
		printf("Tableau[%d] = %d\n", i, R[i]);
		
	}
	
}

//CONVERT STRING VALUES TO INT (my alternative to strtol() )
int strin(char*R){
	int i, S=0, k= 1;
	for (i=strlen(R)-1; i>=0; i--){
		S += (R[i]-48)*k;
		k *= 10;
	}
return S;	
}
