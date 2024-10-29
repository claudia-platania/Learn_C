//Funzione per trovare il Massimo Comun Divisore di 2 valori
//  rivisitazione   -->     funzione int

#include <stdio.h>

int gcd ( int u, int v){

    int temp;

    while( v != 0 ){

        temp = u % v;
        u = v;
        v = temp;
    }

    return u;       //la funzione restituisce un valore di ritorno

}


int main (void){

    int result;
    int u = 0;


    //GIUSTO
    result = gcd (150, 35);     //gcd (150, 35) = u della funzione gcd      d'ora in poi se voglio usare il valore di u nel main uso la variabile result
    printf("Il massimo comun divisore di 150 e 35 è: %i\n", result);    //result richiama al valore di u della funzione gcd

    //ERRORE
    result = gcd (1026, 405);        
    printf("Il massimo comun divisore di 1026 e 405 è: %i\n", u);   //se non uguaglio la u nel main alla funzione gcd questa u ha valore 0 --> ERRORE

    //GIUSTO
    printf("Il massimo comun divisore di 83 e 240 è: %i\n", gcd (83, 240));     //posso usare gcd (int u, int v) direttamente all'intenro del printf del main

    return 0;
}



/* 

return u;   -->     il valore di u è strettamente legato alla funzione gcd



Se voglio utilizzare questo valore di ritorno nella funzione main
devo dichiarare un intero ( result ) all'interno del main ed
impostarci il valore che mi butta fuori la funzione

    result = gcd (150, 35); 

 */

