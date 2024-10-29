//Modificare gli elementi di un array nelle funzioni

#include <stdio.h>

void multiplyBy2 (float array[], int n){        //float array è un puntatore

    int i;

    for( i = 0; i < n; ++i ){
        array[i] *= 2;      // array[i] = array[i] * 2
    }
}


int main (void){

    float floatVals[4] = { 1.2f, -3.7f, 6.2f, 8.55f };  //Dichiarazione --> riservo 4 celle di memoria con quei quattro valori
    int i;
    void multiplyBy2 (float array[], int n);    //PROTOTIPO

    multiplyBy2 (floatVals, 4);     //CHIAMATA --> qui utilizzo la funzione
                                    // flotVals contiene solo l'indirizzo della cella 0 --> 4 è la dimensione dell'array floatVals
                                    ///flotVals ha 4 spazi all'interno --> qui sto passando l'array alla funzione multiplyby2

    for( i = 0; i < 4; ++i ){
        printf("%.2f    ", floatVals[i]);
    }

    printf("\n");
    
    return 0;
}



