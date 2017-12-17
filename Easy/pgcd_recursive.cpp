#include <stdio.h>
int pgcd(int A, int B){
	
	if ((A % B) == 0) return B;
	else return pgcd(B, A%B);
}
int main(void){



printf("%d", pgcd(20, 36));



return 0;
}

