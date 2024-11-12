//Ordinamento tramite booble sort 


//BOOBLE SORT


#include <stdio.h>

int main (void){

    int numeri[] = { 2, 4, 6, 3, 9, 7, 1, 0, 8, 5 };

    int n = 10;     //grandezza del mio array

    int i;
    int max;
    int scambio;


    for( i = 0; i < n; i++ ){

        for( max = 0; max < n - 1; max++ ){

            if( numeri[max] > numeri[max + 1] ){

                scambio = numeri[max];
                numeri[max] = numeri[max + 1];
                numeri[max + 1] = scambio;

            }
        }

    }

    printf("Array ordinato: \n");
    for( i = 0; i < n; i++ ){
        printf(" %d", numeri[i]);
    }

    return 0;
}




