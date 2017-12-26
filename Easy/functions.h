
//REMPLIR UN TABLEAU
void saisir(int T[], int n){
		printf("\n\t\t---- REMPLISSAGE ----\n");
	int i;
	for(i=0; i<n; i++){
		printf("\t\t[%d] = ", i+1);
		scanf("%d", T+i);
	}
		printf("\n\t\t---------------------\n");

}
//AFFICHAGE D UN TABLEAU
void affich(int T[], int n){
	int i;
	printf("\n\t\t---- AFFICHAGE ------\n");
	for(i=0; i<n; i++){
		printf("\t\t[%d] = %d\n", i+1, T[i]);
	}
	printf("\n\t\t---------------------\n");

}
//MIN TABLE
int min(int T[], int n){
	printf("\n\t\t-------- MIN --------\n");
int min = T[0];
n--;
	while(n) (T[n] < min) && (min = T[n]), n--;
	return min;
}
// RECHERCEH SEQ

void rechseq(int T[], int x, int n){
 int i =0;
 while(T[i] != x && i<n){
 	i++;
 }
 		printf("\n\t\t---- Rech de '%d' in TL[%d] ----\n", x, n);
 		T[i] == x ? printf("\n\t\t\t'%d'  EXIST", x) : printf("\n\t\t\t'%d' N EXIST PAS", x);
 		printf("\n\t\t------------------------------\n");

	
}
//TRIE
void tse(int T[], int n){
		printf("\n  >> Operation : Trie Par Selection [...]\n");
	int i, j, x, indmin;
	for(i=0; i<n-1; i++){
		indmin = i;
		for(j=i+1; j<n; j++){
			if(T[j] < T[indmin]){
				indmin = j;
			}
		}
		x = T[i];
		T[i] = T[indmin];
		T[indmin] = x;
	}
}



