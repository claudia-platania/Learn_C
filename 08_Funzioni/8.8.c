//Trovare il valore minimo di un Array
//Funzione per trovare il valore minimo in un array

#include <stdio.h>

int minimum (int values[10]){

    int minValue, i;

    minValue = values[0];
    
    for( i = 1; i < 10; ++i ){

        if( values[i] < minValue ){
            minValue = values[i];
        }
    }
    
    return minValue;
}


int main (void){

    int scores[10], i, minScore;
    int minimum ( int values[10]);      //Una Dichiarazione --> dichiaro l'utilizzo di una funzione esterna al main

    printf("Digita 10 valori \n");

    for( i = 0; i < 10; ++i ){
        scanf("%i", &scores[i]);
    }

    minScore = minimum (scores);        //minimum è la funzione sopra con assegnato il valore di scores

    printf("\nIl valore minimo è %i\n", minScore);

    return 0;
}



