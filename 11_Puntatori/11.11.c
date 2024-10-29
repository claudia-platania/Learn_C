//Funzione per sommare gli elementi di un array di interi

#include <stdio.h>


int arraySum (int array[], const int n){

    int sum = 0;
    int *ptr;       //Puntatore
    int * const arrayEnd = array + n;       //il puntatore è impostato per puntare IMMEDIATAMENTE dopo l'ìultimo elemento dell'array


    for( ptr = array; ptr < arrayEnd; ++ptr ){      //ptr punta al PRIMO elemento dell'array    -->     incrementiamo il valore di ptr così che punti al
                                                                                                            //successivo elemento dell'array

        sum += *ptr;    //ad ogni giro l'elemento dell'array viene aggiunto a "sum"
    // sum = sum + *ptr     -->     uso * per indicare l'elemento puntato ( NON l'indirizzo )
    }

    return sum;
}



int main (void){

    int arraySum (int array[], const int n);        //Prototipo

    int values[10] = { 3, 7, -9, 3, 6, -1, 7, 9, 1, -5 };

    printf("La somma è %i\n", arraySum(values, 10));       /*  dichiaro di voler utilizzare il return della funzione arraySum usando come ingressi 
                                                                values (come array) e 10 (come const in n)*/

    return 0;
}





