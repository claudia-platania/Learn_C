//Chiamate di funzioni

#include <stdio.h>

void printMessage (void){

    printf("Programmare è divertente. \n");
}


int main (void){

    int i;

    for( i = 1; i <= 5; ++i ){

        printMessage ( );
    }

    return 0;
}


/* 

Questo programma esegue 5 volte la funzione
printMessage

Di conseguenza stamca 5 volte il messaggio

 */


