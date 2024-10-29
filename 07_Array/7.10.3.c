/* Scrivere un programma che calcla la media di un array
di 10 valori in virgola mobile */

#include <stdio.h>


int main (void){

    int num[10];

    int i;
    float media;
    int somma = 0;

    printf("Dimmi 10 numeri: \n");

     for( i = 0; i < 10; ++i ){

        scanf("%i", &num[i]);        
    }
 

    for( i = 0; i < 10; ++i ){

        somma = somma + num[i];
    }

    media = ( float )somma / i;

    printf("La media dei 10 numeri inseriti è: %f\n", media);

    return 0;
}







