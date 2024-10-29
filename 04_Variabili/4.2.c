//Descrive l'uso di vari operatori aritmetici

#include <stdio.h>

int main (void) {

    int a = 100;
    int b = 2;
    int c = 25;
    int d = 4;
    int result;

    result = a - b;     //sottrazione
    printf ("a - b = %i\n", result);

    result = b * c;     //moltiplicazione
    printf ("b * c = %i\n", result);

    result = a / c;     //divisione
    printf("a / c = %i\n", result);

    result = a + b * c;     //precedenza
    printf ("a + b * c = %i\n", result);

    printf("a * b + c * d = %i\n", a * b + c * d);

    return 0;

}


/* 

1.
Dopo aver dichiarato le variabili intere, il programma assegna il risultato
della sottrazione a - b alla variabile resul e poi visualizza il suo valore
con un'appropriata chiamata di pritf( )

2.
La successiva istruzione:
    result = b * c
ha l'effetto di molteplicare il valore di b per quello di c
e di mettere il prodotto nella variabile result

3.
La successiva istruzione:
    result = a / c
il risultato della divisione viene visualizzato dallìistruzione
printf( ) immediatamente dopo la divisione di a per c


NOTA: ongi risultato passa alla routine printf( )

NOTA: le operazioni di di moltiplicazione * e divisione / hanno
precedenza su quelle di addizione + e sottrazione -


 */









