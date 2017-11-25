#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "inputing.h"

void sm(int *gr1, int *gr2);
void sb(int *gr1, int *gr2);
void dc(int i, int *gr);
int c2(int *R);
int bin(char *bin);

int main(void){
	
inputf("ENTER AN INPUT >> ");
inputf("ENTER AN INPUT >> ");
END_INPUTS;

// CHECKING if INPUTS ARE NEGATIVE OR NOT, if YES, C2 the input
	for(i=strlen((stringf[0]))-1; i>=0;i--){
		gr1[g] = (stringf[0][i] == '-'? 0 : stringf[0][i]-48); g--;	
	}
			(stringf[0][0] == '-') && (c2(gr1));
	 
g= size-1;
	for(i=strlen((stringf[1]))-1; i>=0;i--){
		gr2[g] = (stringf[1][i] == '-'? 0 : stringf[1][i]-48);g--;	
	}
		(stringf[1][0] == '-') &&(c2(gr2));	
	
// START BOOTH ALGORITHM (SM, SB, SHIFT)
int repeat = size, *Q=gr2, L = 0, S;
while(repeat){
if ((Q[size-1] == 1) && (L == 0)) (sb(A, gr1));
if ((Q[size-1] == 0) && (L == 1)) (sm(gr1, A));

S = A[size-1];
L = Q[size-1];

dc(A[0], A);
dc(S, Q);

repeat--;
}
//  FEW MORE LINES TO PRINT THE RESULT
 S = size-1;
 sizef *= 2;
for (i=sizef;i>=0;i--){
AQ[i] = Q[S]+'0';
S--;
}
AQ[sizef+1] = '\0';

printf("\n[%s] * [%s] = [%s] ", stringf[0], stringf[1], AQ); nform && c2_AQ && show_AQ; nline;
printf("\n[%d] * [%d] = [%d]\n", bin(stringf[0]), bin(stringf[1]), bin(stringf[1])*bin(stringf[0]));

return 0;
}

void dc(int i, int *R){

int k = size;
	while(k--){
	R[k] = R[k-1];
	}
	R[0] = i;
}
int c2(int *R){
	int i = size-1;
	while(R[i]!=1){
		i--;	
	}
	
	int j;
	for (j=0; j<i; j++) R[j] = !R[j];
}
void sm (int *gr1, int * gr2){
int r = 0, i = size;
while(i--){
	(gr1[i]^gr2[i]) ? (A[i]= !r ): ((A[i]= r), (r = gr1[i]));
}
}
void sb (int* gr1, int* gr2){
int i=size, r = 0;
	while (i--){
		gr1[i] == gr2[i] ? (A[i] = r) : ((A[i] = !r), (r = gr2[i]));
	}
}
int bin( char * bin){
	int S = 0, k=0;
(bin[0] == '-') && (k =1);
int i;
for (i=0+k; i<strlen(bin); i++){
S = S*2 + (bin[i] - 48);	

}
return S* (k==1? -1 : 1);
}
