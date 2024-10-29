/* Programma per classificare un carattere
immesso della tastiera */

#include <stdio.h>

int main (void){

    char c;

    printf("Digita un solo carattere: \n");
    scanf(" %c", &c);

    if( ( c >= 'a' && c <= 'z' ) || ( c >= 'A' && c <= 'Z' )){
        printf("Carattere Alfabetico.\n");
    } else if ( c >= '0' && c<= '9' ){
            printf("Cifra\n");
        } else{
            printf("Carattere Speciale\n");
        }

    return 0;

}


/* 

&&      =   and --> se c >= 'a' E c <= 'z'  --> entrambe devono valere

||      =   or --> ALMENO 1 deve valere


NELLA SCANF( )

%c      =   accetta 1 carattere ( SOLO 1 ) --> se scrivo %10c
                                            significa che può accettare ESATTAMENTE 10 caratteri

 %c     =   lo spazio serve se hai più di 1 aquisizione
        ignora gli white_space che ci sono all'inizio del buffer



%s      =   accetta una Sequenza di caratteri ( non white_space )

 */



/* 
NO SPAZIO

printf("Digita un solo carattere: \n");
    scanf("%c", &c);


INPUT: c

OUTPUT: Carattere speciale  ( legge lo spazio )



SPAZIO

printf("Digita un solo carattere: \n");
    scanf(" %c", &c);


INPUT: c

OUTPUT: Carattere Alfabetico ( NON legge lo spazio )

 */




