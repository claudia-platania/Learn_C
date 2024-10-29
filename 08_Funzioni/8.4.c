//Funzione per trovare il Massimo Comun Divisore di 2 valori

#include <stdio.h>

void gcd ( int u, int v ){

    int temp;

    printf("Il massimo comun divisore di %i i %i è: ", u, v);

    while( v != 0 ){

        temp = u % v;
        u = v;
        v = temp;
    }

    printf("%i\n", u);
}


int main (void){

    gcd (150, 35);      // 150 = u      35 = v
    gcd (1026, 405);
    gcd (83, 240);

    return 0;
}





