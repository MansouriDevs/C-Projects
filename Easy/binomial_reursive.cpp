#include <stdio.h>
int bino(int p, int n){
	if (p==1) return n;
	if (n == 0) return 0;
	if (p == n) return 1;
	return bino(p, n-1) + bino(p-1, n-1);
	
}
int main(void){

printf("%d", bino(9, 8));

return 0;
}

