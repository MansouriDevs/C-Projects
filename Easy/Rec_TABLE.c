#include <stdio.h>

int main(void){


float nc, nl, RT =0, DN = 1;
int i;

printf("Taper Le Nombre de lignes   >> "); scanf("%f", &nl);
printf("Taper Le Nombre de colonnes >> "); scanf("%f", &nc);

	for (i=1; i<= nc*nl; i++ ){
		printf("%.1f\t", (float) i);
			RT = (float) RT +i;
			((float)i<nl) && (DN += i*nc+ 1);

				!(0^i%(int)nc) && printf("|%.1f", RT) && printf("\n") && (i^(int)DN ? RT=0: RT);
	}

						printf("=====================================\n");

	RT =0;
	while(nc--){
		printf("%.1f\t", DN);
			RT += DN;
				DN += nl;
	}

printf("|%.1f", RT);
}

//YOUNES
