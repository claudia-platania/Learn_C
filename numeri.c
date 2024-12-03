/* 
Devo chiedere all'utente di inserire numeri con la virgola (,) (float) e di continuare a chiederli sino a quando
l'utente non inserisce il numero ZERO (0).
Dire:

    - quanti numeri ha inserito l'utente
    - calcolare la media
    - calcolare la varianza   (lo scarto quadratico medio)
    (prendo la media e la sottraggo ad ongni numero e poi facico il quadrato di questa differenza)

radice quadrata della media aritmetica dei quadrati degli scarti dei numeri dalla loro media aritmetica.

La varianza ci aiuta a capire quanto i numeri sono lontani o vicini alla media (cioè il voto medio che hai preso).

    Per ogni voto, facciamo la differenza tra il voto e la media. Poi alziamo al quadrato (moltiplichiamo per sé stesso) ogni risultato.
    Questo ci aiuta a capire quanto ogni numero "si allontana" dalla media.
    Sommiamo i quadrati e dividiamo per quanti sono (troviamo la media dei quadrati)    -->     la varianza

 */



#include <stdio.h>
#include <stdlib.h>     //per includere la Malloc e la Calloc

int main (){

    float n;
    float *numeri = NULL;       //puntatore ai numeri
    float totale = 0;           //QUANTI Numeri ci sono
    float somma = 0;        //per calcolare la somma die numeri
    float media = 0;
    float varianza = 0;

    //malloc e totale

    do{

        scanf("%f", &n);

        //??
        numeri = (float *) malloc (1 * sizeof(float));

        
        //NON RIESCO AD ALLOCARE IL NUMERO NELLA MEMORIA ALLOCATA PER LUI       -->      NON RIESCO A SALVARLO

 
        somma = somma + n;      //aggiungo il numero (n) alla somma --> nuova somma
        totale++;           //contatore

    } while ( n != 0);

    totale = totale - 1;      //totale - 1    -->     così non conta lo 0

    if( totale > 0 ){      //se ha inserito almeno 1 valore

        //media

        media = somma / totale;


        //varianza

        for( int i = 0; i < totale; i++ ){      //uso i per scorrere        -->     i = numero corrente

            varianza = varianza + ( (numeri[i] - media) * (numeri[i] - media) );


        }

    
        varianza = varianza / totale;

        printf("totale = %f\n", totale);
        printf("media = %f\n", media);
        printf("varianza = %f\n", varianza);


    }
 

    //????

    free (numeri);

    return 0;

}










