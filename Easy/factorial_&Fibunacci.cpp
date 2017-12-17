#include <stdio.h>
int k = 0;
int factr(int a){
	k++;
	if (a == 0 ) return 1;
	else return a*factr(a-1);
	

}

int facti(int a){
k++;
int F = 1;	

while(a) F = F*a, --a;
	
return F;
}

int fibr(int n){
	k++;
	if (n == 0 || n == 1 ) return 1;
	else return fibr(n-1) + fibr(n-2);
}

int fibi(int n){
	k++;
int i , fn , fn1, fn2;
fn1 = 1;
fn2 = 1;
for (i= 2; i<=n; i++){
	fn  = fn1 + fn2;
	fn2 = fn1;
	fn1 = fn;

}
return  fn;
}

int main(void){
int a, b;
scanf("%d", &a);

//printf("%d\n", factr(a)); 
printf("%d\n", facti(a));
//printf("%d\n", fibr(a));
//printf("%d\n", fibi(a));

printf("Nombre d appels : %d", k);

return 0;
}

