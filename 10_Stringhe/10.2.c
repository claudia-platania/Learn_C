//Funzione per contare il numero di caratteri di una stringa

#include <stdio.h>


int stringLength( const char string[] ){

    int count = 0;

    while( string[count] != '\0'){
        ++count;
    }

    return count;
}



int main (void){

    int stringLength( const char string[] );

    const char word1[] = { 'c', 'u', 'l', 'e', 't', 'o', '\0' };
    const char word2[] = { 'b', 'a', 't', 't', 'u', 't', 'o', '\0' };
    const char word3[] = { 'c', 'a', 'p', 'o', 'c', 'c', 'e', 't', 't', 'a', '\0' };


    printf("%i  %i  %i\n", stringLength(word1), stringLength(word2), stringLength(word3));

    return 0;
}


