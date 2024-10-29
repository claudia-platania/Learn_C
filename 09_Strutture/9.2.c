//Programma per determinare la data di domani

#include <stdio.h>

int main (void){

    struct date{

        int day;
        int month;
        int year;
    };

    struct date today, tomorrow;

    const int daysPerMonth[12] = {
        31, 28, 31, 30, 31, 30,     //numero giorni dei mesi --> Gennaio = 31   Febbraio = 28 ...
        31, 31, 30, 31, 30, 31
    };

    printf("Digita la data odierna ( gg mm aaaa ): ");
    scanf("%i%i%i", &today.day, &today.month, &today.year);

    if( today.day != daysPerMonth[today.month - 1] ){   //today.month - 1   =   cercare il mese di riferimento nell'array   --> il numero di giorni

        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;

    } else if( today.month == 12 ){     //ultimo dell'anno
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;

    } else{                             //ultimo del mese
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }


    printf("La data di domani è %i / %i / %.2i\n", tomorrow.day, tomorrow.month, tomorrow.year % 100);

}








