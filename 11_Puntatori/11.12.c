//Funzione per sommare gli elementi di un array di interi - Versione 2

#include <stdio.h>


/* 
In pratica : se vogliamo utilizzare gli indici per fare riferimento agli elementi di un array
            che viene passato a una funzione --> dichiariamo il farametro formale corrispondente come array
Analogamente : se vogliamo utilizzare l'argomento come un puntatore all'array
            dichiariamolo di tipo Puntatore
 */

//dichiariamo l'array come puntatore ad int

int arraySum (int *array, const int n){     //la funzione ha in ingresso un Puntatore ad un array ed un intero
                                            // int *array   -->     ha come ingresso un array   -->     un array viene passato ad un puntatore

    int sum = 0;
    
    int * const arrayEnd = array + n;       //così il puntatore punta DOPO l'ultimo elemento dell'array     -->     così possiamo leggere tutto l'array

    for( ; array < arrayEnd; ++array ){     //la 1 espressione del ciclo è stata OMESSA -->     nessun valore deve essere inizializzato

        sum += *array;
    }

    return sum;
}


int main (void){

    int arraySum (int *array, const int n);

    int values[10] = { 3, 7, -9, 3, 6, -1, 7, 9, 1, -5 };
    

    printf("La somma è %i\n", arraySum(values, 10));        //passiamo dentro la funzione un puntatore all'array "values" con il nome di array
                                    //values contine l'indirizzo della 1 cella

    return 0;
}


