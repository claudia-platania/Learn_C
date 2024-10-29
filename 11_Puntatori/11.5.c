//Funzioni per usare strutture che contendono puntatori

#include <stdio.h>

int main (void){

    struct intPtrs{

        int *p1;    //Prototipo
        int *p2;                //Puntatori
    };


    struct intPtrs pointers;

    int i1 = 100;
    int i2;

    pointers.p1 = &i1;      // indico l'indirizzo       -->     pointer.p1 contiene l'indirizzo di i1  -->     quando poi chiamo *pointers.p1 allora posso ottenere il valore dentro i1 (100)
    pointers.p2 = &i2;
    *(pointers.p2) = -97;     // * indica il contenuto dentro p2    -->     dentro p2 io ho l'indirizzo di i2   -->     metto -97 dentro i2

    // *(pointer.p2) = i2       (come significato)

    printf("i1 = %i,    *pointer.p1 = %i\n", i1, *pointers.p1);
    printf("i2 = %i,    *pointers.p2 = %i\n", i2, *pointers.p2);

    return 0;
}











