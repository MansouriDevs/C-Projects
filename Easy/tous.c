#include <stdio.h>
#include "functions.h"

int main(void){

int TABLE[100], N;
printf("1) Taper la dimension de Tableau  (<100) >>>");
scanf("%d", &N);
/*
while((N>100) &&(N=1)){
printf("%d) Merci, Ressayer avec un entier(<= 100)>>>", ++N);
    scanf("%d", &N);
}
*/
saisir(TABLE, N);
//affich(TABLE, N);
//printf("\n\t\tLe min de Tableau est : %d", min(TABLE, N));
//int x; printf("\n2) Taper le nombre a cherche >> "); scanf("%d", &x);
//rechseq(TABLE, x, N);
//tse(TABLE, N);
//affich(TABLE, N);

return 0;
}


