#include <stdio.h>

int main(void){
	int i, j, k, end =8, start =1;
for (i=1; i<=5; i++){
	for(k=1; k<=end; k++){
		printf(" ");
	}
	end--;
	for (j=1; j<=start; j++){
		printf("*");
	}
	start +=2;
	printf("\n");
}

start =1;
for (i=1; i<=4; i++){
	for(k=1; k<=end; k++){
		printf(" ");
	}
	end--;
	
	for (j=1; j<=5; j++){
		printf("*");
	}
	for(k=1; k<=start; k++){
		printf(" ");
		
	}
	start+=2;
	for (j=1; j<=5; j++){
		printf("*");
	}
	printf("\n");
}

//3PART
end+=2;
start = 5;
for(i=1; i<=3;i++){
	for (k=1; k<=end; k++){
		printf(" ");
	}
	for (j=1; j<=5; j++){
		printf("*");
	}

		for(k=1; k<=start; k++){
		printf(" ");
		
	}
	start -=2;
		for (j=1; j<=5; j++){
		printf("*");
	}
	printf("\n");
	end++;
}
///END
end = 4;
start = 9;
for (i=1; i<=5; i++){
	for(k=1; k<=end; k++){
		printf(" ");
	}
	end++;
	for (j=1; j<=start; j++){
		printf("*");
	}
	start -=2;
	printf("\n");
}



return 0;
}
