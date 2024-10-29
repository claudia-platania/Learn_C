//Funzione pe rusare le liste concatenate

#include <stdio.h>

int main (void){

    struct entry{       //definisco un insieme di componenti ( possono essere di diversa natura )

        int value;              //un valore
        struct entry *next;     //puntatore prossima cella / valore     ( un attributo ( una caratteristica / un'informazione interna ))
                                //questa struttura / puntatore mi permette di collegare le varie strutture ( n1, n2, n3 )

    };

    struct entry n1, n2, n3;        //n1, n2, n3 ogniuna di loro accede alla struttura "struct entry"
    int i;

    n1.value = 100;
    n2.value = 200;
    n3.value = 300;

    n1.next = &n2;
    n2.next = &n3;

    i = n1.next -> value;   // la -> si usa solo con gli indirizzi  --->    sto dicendo a n1.next di accedere ai campi della struct (nello specifico di vlue)
    printf("%i ", i);       // i = 200

    printf("%i\n", n2.next -> value);       // 300

    return 0;
}





