#include <stdio.h>

int main (void){


    int integerVar = 100;       //variabile INTER
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11;
    char charVar = 'W';
    _Bool boolVar = 0;


    printf ("IntegerVar = %i\n", integerVar);
    printf ("floatingVar = %f\n", floatingVar);
    printf ("doublVar = %e\n", doubleVar);
    printf ("doubleVar = %g\n", doubleVar);
    printf ("charVar = %c\n", charVar);
    printf ("boolVar = %i\n", boolVar);

    return 0;

}


/* 

% f --> è utilizzato per visualizzare i valori nel modo standard

% e --> è utilizzato per visualizzare il valore di una variabile
        float o double nella notazione scientifica
        ( il sistema visualizza automaticamente 6 cifre decimali )

% g --> l'istruzione printf( ) sceglie tra %f e %e ed esclude automaticamente
        la visualizzazione degli zeri finali
        ( se nessuna cifra si trova dopo il punto decimale, NON viene visualizzato neanche questo )

% c --> è utilizzato per visualizzare il carattere 'W', che è stato
        assegnato a charVar quando questa variabile è stata dichiarata

% i --> è utilizzato per visualizzare il valore di una variabile _Bool


 */

















