/* Programma per illustrare l'uso della direttiva #include

Nota: questo programma suppone che le definizioni siano
        salvate nel file "metric.h" */


#include <stdio.h>

#include "metric.h"     //includiamo un file che si chiama "metric-h" (file header) che contiene le #define

int main (void){

    // float = numeri con la virgola    -->     %f

    float liters;       //Litri 
    float gallons;      //Galloni (unità di misura)

    printf("**** Litri in Galloni ****\n");
    printf("Digita il numero di Litri: ");
    scanf("%f", &liters);

    gallons = liters * QUARTS_PER_LITER / 4.0;

    printf("%g litri = %g   galloni\n", liters, gallons);       // %g   -->     sceglie se usare %e (versione scientifica) o %f (float)

    return 0;
}





