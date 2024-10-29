/* Programma per trovare il amssimo comun divisore
di 2 valori interi NON negativi*/

#include <stdio.h>

int main (void){

    int u, v, resto = 1;

    printf("Digita due valori interi NON negativi.\n");
    scanf("%i%i", &u, &v);

    while( resto != 0 ){

        resto = u % v;
        u = v;
        v = resto;
    }

    printf("Il massimo comun divisore è %i\n", u);

    return 0;

}

