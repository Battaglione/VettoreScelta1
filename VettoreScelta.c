#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int main(){
	int v[MAX], scelta, i, inp, risint;
	float ris;
	ris = 0;
	risint = 0;
	for(i = 0; i < MAX; i++){
		printf("inserire il valore numero %d",i+1);
		printf("\n");
		scanf("%d",&v[i]);
	}
	printf("Visualizzare il numero di 0 presenti nel vettore (Digita 1); Calcolare la media aritmetica dei valori del vettore (Digita 2); Letto un valore dall'esterno, vedere quante volte e' presente nel vettore (Digita 3); Letto un valore dall'esterno, visualizzare se il valore e' presente nel vettore e visualizzare dove e' presente in memoria (Digita 4)\n");
	scanf("%d",&scelta);

	switch(scelta){
		case 1:
		    for(i = 0; i < MAX; i++){
			if(v[i] == 0){
			  risint = risint + 1;
			}
		    }
		    printf("Ci sono %d", risint);
		    printf(" zeri\n");
		    break;
		case 2:
		    for(i = 0; i < MAX; i++){
                        ris = ris + v[i];
                        }
		    ris = ris / MAX;
		    printf("La media aritmetica e' %.2f", ris);
		    printf("\n");
		    break;
		case 4:
			printf("Inserire un numero a tua scelta:\n");
			scanf("%d",&inp);
			for(i = 0; i < MAX; i++){
                if(v[i] == inp){
					printf("Il numero digitato e' stato trovato nel vettore: Indice = %d; Indirizzo memoria = %d, i, &v[i]\n");
				}
				
            }
		

	}
}

