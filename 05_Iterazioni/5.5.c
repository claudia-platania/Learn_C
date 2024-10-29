//Uso di ciclo FOR annidati
//Se l'utente ha una lista di 5 numeri triangolari da calcolare

#include <stdio.h>

int main (void){

    int n, number, triangularNumber, counter;

    for ( counter = 1; counter <= 5; ++counter){

        printf("Quale numero triangolare vuoi calcolare ? ");
        scanf("%i", &number);
    
        triangularNumber = 0;

        for( n = 1; n <= number; ++n){

            triangularNumber += n;
            //triangularNumber = TriangularNumber + n;
        }

        printf("Il numero triangolare di ordine %i è %i\n\n", number, triangularNumber);
    
    }

    return 0;

}


/* 

TRIANGULAR NUMBER   =   se iniziate da 1, il 4 numero triangolare
                    è la somma dei numeri consegutivi DA 1 A 4
                    
                    1 + 2 + 3 + 4 = 10


1.
    for ( counter = 1; counter <= 5; ++counter){

        Specifica che il ciclo deve essere eseguito esattamente
        5 volte

        _counter_ è infatti inizialmente posto a 1 e viene
        incrementato di +1 SE è minore o uguale a 5

        NOTA: quando counter sarà uguale a 6 il ciclo NON verrà
        eseguito


            Per 5 volte

            {
                aquisisce il numero dall'utente
                calcolare il numero triangolare
                visualizza il risultato
            }


 */


