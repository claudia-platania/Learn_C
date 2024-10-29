//L'operatore modulo

#include <stdio.h>

int main ( ){

    int a = 25;
    int b = 5;
    int c = 10;
    int d = 7;


    printf(" a = %i, b = %i, c = %i e d = %i\n", a, b, c, d);

    printf("%%\n");
    printf (" a %% b = %i\n", a % b);
    printf (" a %% c = %i\n", a % c);
    printf (" a %% d = %i\n", a % d);
    printf (" a / d * d + a %% d = %i\n", a / d * d + a % d);

    return 0;

}

/* 

% --> operatore modulo

%% --> all'intenro della printf( )


DENTRO PRINTF
    STRINGA ""      %... viene utilizzato come play-solder
                    %%  sto scrivendo il carattere % --> per leggerlo nell'output a % b =...
    VARIABILI       a % b --> il resto della divisione a / b

FUORI PRINTF




NOTA:   se uso % fuori da una stringa ( fuori dalle "" ) mi dice il resto di quell'operazione
    es:
    25 / 5 = 3 con resto 0


 */







