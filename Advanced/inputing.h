
int i;
int sizef;
int gr1[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int gr2[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int A[]=	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int size = sizeof(gr1)/sizeof(int);
int g=size-1;
#define END_INPUTS char AQ[2*(sizef = (strlen(stringf[0])>strlen(stringf[1]) ? strlen(stringf[0]) : strlen(stringf[1])))]
int called = -1;
char stringf[2][500];
  char* inputf(char *message){
 		 called++;
		printf("%s", message);
		int i=0;
	while ( (stringf[called][i] = getchar()) != '\n'){
	i++;			
	}
	
	stringf[called][i] = '\0';
return stringf[called];
}


int cc2(char *R){
	int i = strlen(R)-1;
	while(R[i]!='1'){
		i--;	
	}
	int j;
	for (j=0; j<i; j++) R[j] = (R[j]== '1' ? '0' : '1');
	return 1;
}
#define show_AQ printf(" ---> - [%s]", AQ)
#define c2_AQ cc2(AQ)
#define nline printf("\n")
#define nform (AQ[0] == '1')
