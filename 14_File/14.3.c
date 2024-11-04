/* Programma per visualizzare i caratteri
fino alla fine del file */

/*
ALfabeto Farfallese (mette una f)
https://it.wikipedia.org/wiki/Alfabeto_farfallino

    a → afa
    e → efe
    i → ifi
    o → ofo
    u → ufu
    
*/

#include <stdio.h>

int main (void){
    
    int c;

    while( ( c = getchar() ) != EOF ){      //getchar()     -->     legge un carattere alla volta da std_input
        if ( 
            c == 'A' || c == 'I' || c == 'O' || c == 'U' ||  c == 'E' ||
            c == 'a' || c == 'i' || c == 'o' || c == 'u' ||  c == 'e' 
        ){
            putchar(c);
            putchar('f');
            putchar(c);
        }else{
            putchar(c);                       //putchar()     -->     stampa un carattere alla volta std_output
        }
    }

    return 0;
}



/* 
gcc 14.3.c
./a.out < "nome file"

    -->     mi stampa tutto il file un carattere alla volta
 */




