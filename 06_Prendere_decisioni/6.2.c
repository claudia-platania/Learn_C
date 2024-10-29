/* Programma per calcolare la media di una
serie di voti e contare il numero di insufficienze */

#include <stdio.h>

int main (void){

    int numberOfGrades;     //numberOfGrades = numero voti totali
    int i;
    int grade;      //grade = 1 singolo voto
    int gradeTotaol = 0;    //gradeTotal = SOMMA totale dei voti
    int failureCount = 0;   //failureCount = numero errori
    float average;  //media


    printf("Quanti sono i voti della lista? ");
    scanf("%i", &numberOfGrades);

    for( i = 1; i <= numberOfGrades; ++i ){
        printf("Digita il voto #%i: ", i);
        scanf("%i", &grade);

        gradeTotaol = gradeTotaol + grade;
        
        if( grade < 65 ){
            ++failureCount;
        }

    }

    average = (( float ) gradeTotaol )/ numberOfGrades;
    /* Trasformo gradeTotale in una FLOAT --> numero con la virgola
    Adesso l'operazione è fra un numero con la virgola ed un numero
    intero --> risultato con la virgola 
    
    intero / intero --> intero
    float / intero = intero / float = float / float --> float
    
    */

    printf("\nMedia dei voti = %.2f\n", average);
    printf("Numero di insufficienze = %i\n", failureCount);

    return 0;
}


/* 

%f  = stampo numeri con la virgola ( float )

%.2f    =   ti dice quanti decimali stampare
        --> stampa 2 decimali dopo la virgola

 */



