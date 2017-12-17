#include <stdio.h>
void deplacer(int n, char A, char B, char C){
	if (n == 1){
		printf("%c >>> %c\n", A, B);
	
	}else{
		deplacer(n-1, A, C, B);
		printf("%c >>> %c\n", A, B);
		deplacer(n-1, C, B, A);
	}
}
int main(void){

deplacer(3, 'A', 'B', 'C');






return 0;
}

