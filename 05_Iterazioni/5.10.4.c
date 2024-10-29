//  ESERCIZI

#include <stdio.h>

int main (void){

    int n, fattoriale = 1;

    printf("Tabella fattoriali: \n");
    printf("----    ----\n");


    for ( n = 1; n <= 10; n++  ){

        fattoriale = fattoriale * n;
    

        printf("%2i      %i\n", n, fattoriale);
    }

    return 0;


}









