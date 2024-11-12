//ordinare in ordine CRESCENTE l'array "numeri[]"

//BOOBLE SORT


#include <stdio.h>

int main(void) {

    int numeri[] = {2, 5, 3, 8, 4, 6, 9, 1, 0, 7};

    int n = 10;      ///memoriza le dimensioni dell'array

    int i;              //per scorrere l'array
    int max, scambio;

    // Bubble Sort per ordinare l'array in ordine crescente

		/*
    int ordinato;
    i=0;
    do{
        ordinato=1;

        for (max = 0; max < n - 1; max++) {         //controllo l'ordinamento dell'array        -->     devo avere tutto l'array ordinato
            if (numeri[max] > numeri[max + 1]) {                //se il precedente è maggiore del successivo allora bisogna scambiare
                // Scambia numeri[max] e numeri[max + 1]
                scambio = numeri[max];
                numeri[max] = numeri[max + 1];
                numeri[max + 1] = scambio;

                ordinato=0;
            } 
        }
        i++;

    }while(ordinato == 0);
	*/

    for (i = 0; i < n; i++) {                   //scorro l'array esterno per intero
        for (max = 0; max < n - 1; max++) {         //controllo l'ordinamento dell'array        -->     devo avere tutto l'array ordinato
            if (numeri[max] > numeri[max + 1]) {                //se il precedente è maggiore del successivo allora bisogna scambiare
                // Scambia numeri[max] e numeri[max + 1]
                scambio = numeri[max];
                numeri[max] = numeri[max + 1];
                numeri[max + 1] = scambio;
            }
        }
    }
    // Stampa l'array ordinato
    printf("Array ordinato in ordine crescente: ");
    for (i = 0; i < n; i++) {
        printf("%d ", numeri[i]);
    }

    
    printf("\n");

    return 0;
}







