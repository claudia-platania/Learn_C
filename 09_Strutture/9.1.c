//Uso delle strutture

#include <stdio.h>

int main (void){

    struct date{        //definisco un tipo --> date --> date funzionerà come ( int, char ... )
                        // date --> diventa un contenitore

        //3 membri / componenti di tipo int

        int day;        //definisco SOLO come è fatta date
        int month;
        int year;
    };

    struct date today;      //variabile "today" dichiarata di tipo struct date --> alloca lo spazio in memoria
                                                                                // 3 celle perchè 3 membri della struttura

    today.day = 25;
    today.month = 1;
    today.year = 2019;

    printf("La data di oggi è %i / %i / %.2i\n", today.day, today.month, today.year %100);
                                                                        /* il resto di questa divisione viene calcolato prima di essere 
                                                                        passato alla funzione printf( )
                                                                        --> per questo l'anno viene stampato come / 19
                                                                        %.2i = vogliamo visualizzare solo 2 cifre intere */
                                                                        
    return 0;

}


/* 

    struct date{

        int day;
        int month;
        int year;
    };
                        //definisce come deve apparire la struttura al compilatore --> non riserva spazio nella memoria


    struct date today; 

                        //dichiara una variabile "today" di tipo struct date
                        richiede che sia riservato dello spazio in cui memorizzare
                        i 3 valori interi della variabile today



    today.day = 25;         //assegno un valore a ciascuso dei 3 membri di questa variabile

    variabile.membro

 */



