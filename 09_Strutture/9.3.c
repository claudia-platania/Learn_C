//Programma per determinare la data di domani
//Funzioni e strutture

#include <stdio.h>
#include <stdbool.h>        //per utilizzare variabili Booleane ( restituiscono o True o False )

struct date{

    int day;
    int month;
    int year;
};


int main (void){

    struct date today, tomorrow;

    int numberOfDays ( struct date d );         //la funzione riceve un unico argomento di tipo struct e restituisce un valore intero

    printf("Digita la data odierna ( gg mm aaaa ) : ");
    scanf("%i%i%i", &today.day, &today.month, &today.year);


    if( today.day != numberOfDays (today) ){
        
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    
    } else if( today.month == 12 ){     //ultimo dell'anno
        
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    
    } else {                            //ultimo del mese

        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }

    printf("La data di domani è %i / %i / %.2i\n", tomorrow.day, tomorrow.month, tomorrow.year);

}



//Funzione per trovare ul numero di giorni in un mese

int numberOfDates( struct date d ){         //la funzione stabilisce SE l'anno è bisestile e SE il emse inserito è Febbraio ( 02 ) --> posiizone array 1

    int days;
    bool isLeapYear( struct date d );       //per determinare se l'anno è bisestile o no

    const int daysPerMonth[12] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };


    if( isLeapYear(d) == true && d.month == 2 ){       // se la funzione da come risultato True ( bisestile ) && il mese è il secondo ( febbraio )
        days = 29;                                     // il valore di days è posto a 29

    } else {
        days = daysPerMonth[d.month - 1];               // se non è vera la condizione sopra --> allora viene calcolato associando un indice all'array con il mese appropriato
    }

    return days;        // la funzione restituisce il valore di days al main
}




//Funzione per determinare se l'anno è Bisestile

bool isLeapYear( struct date d ){

    bool leapYearFlag;

    if( ( d.year % 4 == 0 && d.year % 100 != 0 ) || d.year % 400 == 0 ){

        leapYearFlag = true;        //L'anno è bisestile
    
    } else {
        leapYearFlag = false;         //L'anno NON è bisesitle
    }

    return leapYearFlag;
}




