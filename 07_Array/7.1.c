//Utilizzare un Array di contatori

#include <stdio.h>

int main (void){

    int ratingCounters[11], i, response;

    for( i = 1; i <= 10; ++i ){

        ratingCounters[i] = 0;
    }

    printf("Digita la risposta\n");

    for( i = 1; i<= 20; ++i ){      //ripeti 20 volte   -->    ( inserisci 20 numeri )

        scanf("%i", &response);     //prendi una risposta

        if( response < 1 || response > 10 ){        //controlla se valida       || = o

            printf("Risposta sbagliata: %i\n", response);       //stampa la risposta sbaglliata
        } else {
                ++ratingCounters[response];     //incrementa il conteggio delle risposte sbagliate
            }
    }

    printf("\n\n Voto   Numero di risposte\n");     //finito di inserire 20 voti ( contando anche quelli sbagliati )
    printf("----    ------------\n");       //stampa la tabella

    for( i = 1; i <= 10; ++i ){         //incrementa +1 al conteggio di quante volte ho scritto quel numeroł

        printf("%4i%14i\n", i, ratingCounters[i]);      //stampa la ricorrenza dei numeri da 1 a 10
    }

    return 0;

}




/* 

Il programma memorizza le risposte per ciascun voto semplicemente
incrementando il corrispondente elemento dell'array
( dopo aver verificato che il voto sia valido )

Per esempio:
    se l'utente digita 5, il valore di ratingCounters[5] viene
    incrementato di 1.
        adottando questa tecnica, il numero totale di intervistati che
        hanno dato il voto 5 sarà contenuto nell'elementoi ratingCounters[5]

 */





