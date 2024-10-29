//Calcolare la radice quadrata du un numero
//Funzione che richiama una Funzione

#include <stdio.h>


//Funzione per calcolare il valore assoluto di un numero    - 3 -

float absoluteValue (float x){

    if( x < 0 ){

        x = - x;
    }

    return x;
}


//Funzione per calcolare la radice quadrata di un numero    - 2 -ù
//Noi stiamo calcolando il quadrato di un numero e vediamo se si avvicina al valore dentro radice

float squareRoot (float x){

    const float epsilon = .00001;       //errore --> precisione
    float guess = 1.0;

    while( absoluteValue (guess * guess - x) >= epsilon ){

        guess = ( x / guess + guess ) / 2.0;
        printf(".");        //Per vedere i giri ( lo abbiamo messo noi )
    }
    printf("\n");
    return guess;
}


int main (void){

    printf("squareRoot (2.0) = %f\n", squareRoot(2.0));
    printf("squareRoot (144.0) = %f\n", squareRoot(144.0));
    printf("squareRoot (17.5) = %f\n", squareRoot(17.5));

    return 0;
}







