//lista concatenata --> esercitazione
// stampa numeri comlessi (parte reale + parte immaginaria)

//SENZA STRUCT e MEMORIA DINAMICA


#include <stdio.h>
#include <stdlib.h>     //devo includere questa libreria per usare la CALLOC

//#define dimensione_lista 10


int main (void){

    int i = 0;      //questa variabile verrà usata nel ciclo per riempire la lista di numeri complessi

    int *next;      //segna la cella successiva

    int dimensione_lista;
    

    printf("Quanti numeri?: ");
    scanf("%i", &dimensione_lista);

    //per allocare memoria dinamicamente con MALLOC

    float *reale = (float *) malloc (dimensione_lista * sizeof(float));
    float *immaginaria = (float *) malloc (dimensione_lista * sizeof(float));

    //questo ciclo crea "dimensione_lista" (10) elementi della lista
    for( i = 0; i < dimensione_lista ; i++ ){

        reale[i] = i + 1;
        immaginaria[i] = - (i + 1);

        printf("%.2f + %.2fi\n", reale[i], immaginaria[i]);
    }


    free (reale);           //free disalloca la memoria allocata alla parte reale
    free (immaginaria);         //free disalloca la memoria allocata alla parte immaginaria

    return 0;

}








