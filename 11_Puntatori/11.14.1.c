//Funzione per copiare una stringa in un'altra - Versione 2

#include <stdio.h>


void copyString (char *to, char *from){         /* passo alla funzione 2 puntatori a 2 stringhe come argomenti
                                                     */

/* 
il ciclo prende il singolo valore     -->     esegue il ciclo sino a quando ha un carattere DIVERSO da '\0'   ( implicitamente )
    - questo perchè il ciclo WHILE( ) esegue se la condizione dentro è Vera (in questo caso se un carattere) 

quando il ciclo WHILE( ) riceve il carattere '\0' è come se stesse ricevendo False e quindi il ciclo Finsice

    - vedere 11.14.2.c
*/


    while (*from){              // *from prende il singolo carattere all'interno della stringa puntata da from
        *to++ = *from++;

        /* altro modo per striverla

        *to = *from;
        from += 1;          from punta alla successiva posizione all'intenro dell'array puntato
        to += 1;            to punta alla successiva posizione in cui mettere i valori copiati

        */
    }

    *to = '\0';         //quando finisco inserisco il carattere '\0' alla fine della stringa copiata    -->     simbolo fine stringa
}



int main (void){

    void copyString (char *to, char *from);     //Prototipo

    char string1[] = "A string to be copied";
    char string2[50];

    copyString (string2, string1);              //Chiamata
    printf("%s\n", string2);


    copyString(string2, "So is this");
    printf("%s\n", string2);


    return 0;
}






