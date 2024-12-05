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
#include <math.h>       // gcc numeri2.c -lm        ( -lm = - library math)


//lista concatenata --> creazione
struct blocco{
    float valore;           //valore inserito dall'utente
    struct blocco *next;      //Puntatore al prossimo blocco completo
};


int main (){

    float n = 0;            //valore inserito dall'utente
    float totale = 0;       //conteggio dei numeri inseriti
    float somma = 0;        //somma dei numeri per calcolare la media
    float media = 0;        //la media dei numeri inseriti
    float varianza = 0;     //la marianza
    
    
    struct blocco *prima_cella;               //puntatore alla prima cella della lista
    prima_cella = ( struct blocco * ) malloc (1 * sizeof (struct blocco));      //allocato lo spazio della 1 cella
    prima_cella -> valore = 0;
    prima_cella -> next = NULL;


    /*
    struct blocco prima_cella;               //1 cella allocata in maniera STATICA  -->     a mano
    prima_cella.valore = 0;
    prima_cella.next = NULL;
    */

    //struct blocco *coda;
    struct blocco *ultima_cella = prima_cella;        //puntatore all'ultimo blocchetto creato  -->      quando ho 1 solo blocchetto la 1 e l'ultima cella coincidono

    struct blocco *nuovo_blocco;     //puntatore ad un nuovo blocco completo

    //ciclo per leggere i numeri inseriti
    do{

        scanf("%f", &n);    //per inserire 1 numero n alla volta

        if( n != 0 ){

        //creazione spazio per il singolo valore --> uno alla volta gli alloco spazio in memoria
            nuovo_blocco = ( struct blocco * ) malloc (1 * sizeof (struct blocco));
            //assegno il valore al nodo e lo aggiungo alla lista
            nuovo_blocco -> valore = n;
            nuovo_blocco -> next = NULL;        //di default    -->     non sappiamo se ci sarà un altro valore

            ultima_cella-> next = nuovo_blocco;       //aggiungo il nodo in testa alla lista
            ultima_cella = nuovo_blocco;        //siccome ho aggiunto un blocco, ora l'ultima cella è il nuovo blocco aggiunto
            //prima_cella = nuovo_blocco    --->    se faccio questa cosa qui io PERDO il riferimento alla prima cella    -->     NO BUONO


            //conteggio
            //totale++;
            //somma = somma + n;

        }

    } while ( n != 0 );     //con n = 0 l'utente ha finito di inserire i valori


    ultima_cella = prima_cella->next;             //siamo tornati in testa alla lista, saltando la cella di default -->     così possiamo di nuovo scorrerla
    while (ultima_cella != NULL) {
        float val = ultima_cella->valore;
        totale++;
        somma = somma + val;
        printf("num: %.2f \n", val);
        ultima_cella = ultima_cella->next;
        /* code */
    }
    
    media = somma / totale;


    varianza = 0;
    ultima_cella = prima_cella->next;             //siamo tornati in testa alla lista, saltando la cella di default -->     così possiamo di nuovo scorrerla
    while (ultima_cella != NULL) {
        float val = ultima_cella->valore;
        float scarto = val - media;
        float scarto2 = scarto*scarto;

        varianza = varianza + scarto2;
        printf("scarto: %.2f \n", scarto2);
        ultima_cella = ultima_cella->next;
        /* code */
    }
    
    varianza = sqrt( varianza / totale );


    printf("totale: %f\n", totale);
    printf("media: %f\n", media);
    printf("varianza: %f\n", varianza);

    
    
    ultima_cella = prima_cella->next;             //siamo tornati in testa alla lista, saltando la cella di default -->     così possiamo di nuovo scorrerla
    while (ultima_cella != NULL) {
        struct blocco *next = ultima_cella->next;
        free(ultima_cella);
        ultima_cella = next;
        /* code */
    }

    free(prima_cella);
    
 
    return 0;
}





