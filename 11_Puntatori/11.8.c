//Programma per illustrare l'uso dei puntatori e delle funzioni

#include <stdio.h>


void test (int *int_pointer){       //questa funzione prende cone argomento un puntatore ad un intero

    *int_pointer = 100;             //il puntatore nel Main (p) mi passa l'indirizzo di i   -->     modifico il valore dentro i tramite il puntatore

}


int main (void){

    void test (int *int_pointer);       //Prototipo

    int i = 50;
    int *p = &i;        //Puntatore     -->     punta all'indirizzo di i    -->     dentro p ora c'è l'indirizzo di i

    /* 
        int *p;

        p = &i;
    */

    printf("Prima della chiamata per verificare che i = %i\n", i);

    test (p);       //chiamata ala funzione void test (int *int_pointer) prendendo come argomento un puntatore (p) ad un intero (i)

    // p contiene l'indirizzo di i  -->     quando uso p nella funzione void io sto passando l'indirizzo di i   -->     modifico la i

    printf("Dopo la chiamata per verificare che i = %i\n", i);

    return 0;
}









