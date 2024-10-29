//Calcolare l'n-esimo numero triangolare
// il 5 numero triangolare = 5 + 4 + 3 + 2 + 1

#include <stdio.h>

void calculateTriangularNumber (int n){     //n è un valore passato dal main
    int i, triangularNumber = 0;

    for( i = 1; i <= n; ++i){

        triangularNumber += i;      //triangulaNumber = triangularNumber + i
    }

    printf("Il numero triangolare di ordine %i è %i\n", n, triangularNumber);

}


int main (void){

    calculateTriangularNumber (10);     // 10 = n   do il valore 10 alla variabile n della funzione
    calculateTriangularNumber (20);
    calculateTriangularNumber (50);

    return 0;
}



/* 

    void calculateTriangularNumber (int n){

        ...
    }


        - void  -->     è una funzione che NON restituisce valori
                        uso void perchè la funzione non ha un return ( NON uso tipico )


        - int n -->     riceve un solo argomento ( n ) che è un intero
                        _parametro formale_
                        viene scelto per argomento
                        
                        Dopo che viene definito questo parametro,
                        esso può essere utilizzato per far riferimento
                        all'argomento all'interno del corpo della funzione.

 */




