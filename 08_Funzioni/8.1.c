//Scrivere una funzionei in C

#include <stdio.h>

void printMessage (void){

    printf("Programmare è divertente. \n");
}

int main (void){

    printMessage ( );    //indica che deve essere svolta la funzione printMessage( )

    return 0;
}


/* 

Le funzioni sono:

    - printfMessage ( )

    - main ( )



Quando usiamo printMessage dentro il main:

    - int main (void){

        printMessage ();    //indica che deve essere svolta la funzione printMessage( )

        return 0;
    }

            - Le parentesi ( ) sono utilizzate per dire al compilatore
            che printMessage( ) È una funzione e che NESSUN argomento
            o valore viene passato a questa funzione


Quando viene eseguita una chiamata di funzione, l'esecuzione
del programma passa direttamente alla funzione indicata


 */





