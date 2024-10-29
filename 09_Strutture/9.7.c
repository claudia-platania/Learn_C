//Programma per illustrare strutture e array

#include <stdio.h>

int main (void){

    int i;

    struct month {

        int numberOfDays;
        char name[3];
    };


    const struct month months[12] = {       //posizionale rispetto a quello sopra       { numberOfDays { name } }

        {31, {'G', 'e', 'n'}}, {28, {'F', 'e', 'b'}}, {31, {'M', 'a', 'r'}},
        {30, {'A', 'p', 'r'}}, {31, {'M', 'a', 'g'}}, {30, {'G', 'i', 'u'}},
        {31, {'L', 'u', 'g'}}, {31, {'A', 'g', 'o'}}, {30, {'S', 'e', 't'}},
        {31, {'O', 't', 't'}}, {30, {'N', 'o', 'v'}}, {31, {'D', 'i', 'c'}}  

    };

    
    printf("Mese    Numero di giorni\n");
    printf("----    ----------------\n");


    for( i = 0; i < 12; ++i ){
        struct month m = months[i];
        printf("%c%c%C          %i\n", m.name[0], m.name[1], m.name[2], m.numberOfDays);
    }

    return 0;
}














