//Programma per invertire le cifre di un numero - DO WHILE

#include <stdio.h>

int main (void){

    int number, right_digit;

    printf("Digita il numero.\n");
    scanf("%i", &number);

    do{

        right_digit = number % 10;
       
        printf("%i", right_digit);
        
        number = number / 10;

    } while ( number != 0 );


    printf("\n");

    return 0;


}




/* 

DO {
    
    istruzione ( o istruzioni ) del proramma

} WHILE ( espressione_del_ciclo )


A differenza dei cicli FOR e WHILE, l'istruzione DO
assicura che il corpo del ciclo sia eseguito almeno
una volta


 */



/* 

BREAK

A volte durante l'esecuzione di un ciclo, potrebbe
essere necessario uscire IMMEDIATAMENTE dal ciclo non
appena si verifica una certa condizione.

L'esecuzione dell'istruzione BREAK provoca l'uscita
immedicata dal ciclo ( for, while, do-while ) che si
sta eseguendo.

L'esecuzione riprende dall'istruzione che si trova
dopo il ciclo

Se viene eseguita un'istruzione Break all'intenro di
un gruppo di cicli annidati, termina SOLTANTO il ciclo
più interno che contiene Break

 */





