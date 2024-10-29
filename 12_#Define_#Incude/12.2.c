/* Funzione per calcolare l'area e la circonferenza di un cerchio
e oò volume di una sfera, noto il raggio */

#include <stdio.h>

#define PI 3.141592654      //pigreco       -->         ogni volta che scrivo PI il compilatore lo sostituisce automaticamente con 3.141592654 ( a prescindere da dove lo scrivo )


double area( double r ){        //funzione double       -->     float sono i numeri con la virgola      -->     double sono float ma più precisi / più grandi

    return PI * r * r;
}


double circumference( double r ){

    return 2.0 * PI * r;
}


double volume( double r ){

    return 4.0 / 3.0 * PI * r * r * r; 
}



int main (void){

    double area( double r );
    double circumference( double r );
    double volume( double r );


    printf("raggio = 1  : %.4f      %.4f        %.4f\n", area(1.0), circumference(1.0), volume(1.0));
    

    printf("raggio = 4.98  : %.4f      %.4f        %.4f\n", area(4.98), circumference(4.98), volume(4.98));

    return 0;
}



