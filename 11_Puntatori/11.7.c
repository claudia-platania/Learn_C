//Programma per attraversare una lista concatenata

#include <stdio.h>

int main (void){

    struct entry{

        int value;
        struct entry *next;
    };

    struct entry n1,n2,n3;

    struct entry *list_pointer = &n1;

    n1.value = 100;
    n1.next = &n2;

    n2.value = 200;
    n2.next = &n3;

    n3.value = 300;
    n3.next = ( struct entry * ) 0;     //segna la fine di una lista    -->     con un puntatore nullo


}









