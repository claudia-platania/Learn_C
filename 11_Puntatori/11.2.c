//Altri esempi di puntatori

#include <stdio.h>

int main (void){

    char c = 'Q';       // assegnamo alla variabile c il valore di 'Q'
 

    char *char_pointer = &c;        // * indica che è un puntatore di tipo char
                                    //ogni valore memorizzato in questa variabile deve essere trattato come un riferimento indiretto a un carattere
                                    // &c   -->     c = 'Q'

//char_pointer punta alla variabile c  -->  il valore che viene visualizzato è il contenuto di c

    printf("%c  %c\n", c, *char_pointer);   


    c = '/';            //ora assegnamo alla variabile c il valore di '/'
    printf("%c  %c\n", c, *char_pointer);       //poichè char_pointer punta ancora a c  -->     viene visualizzato il nuovo valore di c attraverso il puntatore
                                                //il puntatore ora visualizza il nuovo contenuto di c   -->     '/'


/* se il valore di char_pointer NON viene modificato, l'esoressione *char_pointer accede SEMPRE al valore di c
    -->     se il valore id c cambia    allora cambia anche il valore di *char_pointer */


//finchè char_pointer NON cambia    -->     l'espressione punta SEMPRE al valore di c   -->

    *char_pointer = '(';        //l'espressione, assegna la parentesi tonda aperta alla variabile c
                                        //il carattere '(' viene assegnato alla variabile che è puntata da char_pointer
    printf("%c  %c\n", c, *char_pointer);

    return 0;
}











