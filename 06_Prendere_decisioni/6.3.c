//Programma per determinare se un numero è Pari o Dispari

#include <stdio.h>

int main (void){

    int number_to_test, remainder;

    printf("Digita il numero: ");
    scanf("%i", &number_to_test);

    remainder = number_to_test % 2;

    if ( remainder == 0 ){

        printf("Numero Pari.\n");

    } else {
        printf ("NUmero Dispari.\n");
    }

    return 0;

}



/* 

=       -->     di assegnamento

==      -->     di confronto


remainder = 0       -->     assegno il valore 0 alla variabile remainder

remainder == 0      -->     controllo se remainder è uguale a 0
                            è un operatore Booleano ( risposte sono o V o F )


All'intenro dell'IF utilizzo sempre == o <= o >= o < o >

 */



/* 

IF ( espressione ){

    istruzione_1

} ELSE{

    istrizione_2
    
    }

 */


