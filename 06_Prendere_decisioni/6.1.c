/* Programma per calcolare il valore assoluto
di un numero intero */

#include <stdio.h>

int main (void){

    int number;

    printf("Digita un numero: ");
    scanf("%i", &number);

    if( number < 0){
        number = - number;
    }

    printf("Valore assoluto: %i\n", number);
  
    return 0;
}


/* 

IF ( espressione ){
    istruzione_1
}

IF ( count > count_limit ){
    printf(" Limite di count superato\n")
}


L'istruzione PRINTF( ) viene eseguita soltanto se il valore
di coount è maggiore del valore di count_limit, altrimenti
viene ignorata.



 */



