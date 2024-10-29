//Programma per illustrare i puntatori alle strutture

#include <stdio.h>

int main (void){

    struct date{

        int day;
        int month;
        int year;
    };


    struct date today, *datePtr;        // today ha 3 interi    -->  today comprende: day, month, year

    datePtr = &today;       //ora così datePtr comprende al suo interno i valori contneuti da today

    datePtr -> day = 28;        // ( *datePtr ).day         posso usare la -> solo con i puntatori1
    datePtr -> month = 1;
    datePtr -> year = 2019;     // la -> si usa con l'indirizzo -->     datePtr = indirizzo ( puntaotre )


//altro modo per scriverlo --> non cambia
    (*datePtr).day = 28;        // ( *datePtr ) = today
    (*datePtr).month = 1;
    (*datePtr).year = 2019;     // il . lo usi sulle variabili  -->     *datePtr = variabile ( il contenuto )


//altro modo per scriverlo --> non cambia
    today.day = 28;        // ( *datePtr ).day         posso usare la -> solo con i puntatori1
    today.month = 1;
    today.year = 2019;


    printf("La data di oggi è, %i / %i / %.2i\n", datePtr -> day, datePtr -> month, datePtr -> year % 100);

    return 0;
}








