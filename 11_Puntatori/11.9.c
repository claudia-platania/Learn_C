//Altro su puntatori e funzioni

#include <stdio.h>


void exchange (int * const pint1, int * const pint2){       //la funzione riceve come argomenti due puntatori a interi
                                                            //l'utilizzo di CONST indica che i puntatori non saranno modificati nella funzione
                                                            // --> punteranno sempre al medesimo all'indirizzo a cui puntavano prima di entrare nella funzione

    int temp;

    temp = *pint1;          //assegno alla variabile temp il valore contenuto nell'indirizzo a cui puntava pint1     -->     il valore contenuto in i1
    *pint1 = *pint2;        //assegno a pint1 il valore contenuto nell'indirizzo a cui puntava pint2        -->     il valore contneuto in i2
    *pint2 = temp;          //assegno a pint2 il valore contenuto nella variabile temp      -->     il valore che precedentemente temp aveva acquisito da pint1
    
}



int main (void){

    void exchange (int * const pint1, int * const pint2);   //Prototipo

    int i1 = -5;
    int i2 = 66;

    int *p1 = &i1;      //Puntatore
    int *p2 = &i2;


    printf("i1 = %i,    i2 = %i\n", i1, i2);


    exchange (p1, p2);      //chiamata alla funzione iserendo come argomenti i puntatori p1 e p2    -->     puntano ad interi
    printf("i1 = %i,    i2 = %i\n", i1, i2);

    exchange (&i1, &i2);    //chiamata alla funzione inserendo gli indirizzi di i1 e di i2      -->     è la stessa cosa del passaggio precedente
    printf("i1 = %i,    i2 = %i\n", i1, i2);


    return 0;
}








