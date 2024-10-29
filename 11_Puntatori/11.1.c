//Programma per utilizzare i puntatori

#include <stdio.h>

int main (void){

    int count = 10;     //variabile dichiarata normalmente
    int x;              //variabile dichiarata normalmente

    int *int_pointer;   // variabile = int_pointer  -->     dichiarata di tipo "puntatore a int"    -->     *   (l'asterisco ingica chee è un puntatore)



// & = operatore di indirizzamento  -->     passo l'indirizzo ( fornisco l'accesso )
// * = mi fa leggere il valore puntato dal puntatore


    printf("Prima: %p = %p\n", int_pointer, &count);

    int_pointer = &count;       // int_pointer = indirizzo      &count = indirizzo della variabile      -->     uguaglio gli indirizzi
    //ora int_pointer avrà l'indirizzo di count     -->      al suo interno quindi anche i contenuti / valori di count

    printf("Dopo: %p = %p\n\n", int_pointer, &count);


//passo ad x il valore del puntatore    -->     viene trattato come variabile   -->     passo ad x i valori contenuti dentro int_pointer

    printf("Prima:%i = %p\n", x, int_pointer);

    x = *int_pointer;       //trattiamo la variabile int_pointer come un puntatore rispetto un altro dato
                            //questo puntatore viene utilizzato per accedere al dato desiderato
                                // int_point punta ad un INTERO (dichiarazione)     -->      il valore identificato da *int_pointer è un Intero

    //siccome abbiamo impostato int_pointer a puntare alla variabile count ( riga 13 )      -->     è il valore di count che viene indirettamente "passato"


    printf("Dopo: %i = %p\n\n", x, int_pointer);


    printf("count = %i,     x = %i\n", count, x);

    return 0;

}






