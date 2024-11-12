//ordinare in ordine CRESCENTE l'array "numeri[]"

//INSERTION SORT


#include <stdio.h>

int main (void){


    int numeri[] = { 2, 5, 3, 8, 4, 6, 9, 1, 0, 7 };

    int n = 10;      ///memoriza le dimensioni dell'array

    int i = 0;              //per scorrere l'array per trovare il Max
    int max = 0;
    int max_posizione;
    int scambio;
    int num_elementi_ordinati;        //indice che mi dice a che punto sono arrivata ad ordinare

    int *cella;     //array puntatore alla cella dove collocare il valore
    

    cella = &numeri[i];     //punta all'indirizzo delle celle i dell'array

    for( num_elementi_ordinati = 0; num_elementi_ordinati < n ; num_elementi_ordinati++ ){

        for( i = 0; i < n - num_elementi_ordinati; i++ ){       //ricerca del MAX e della sua Posizione
            
            if( i == 0 || numeri[i] > max ){

                max = numeri[i];        //indica il valore del max
                max_posizione = i;      //indica la cella dove si trova il max
            }

        
        }
        int ultima_posizione = (n-1) - num_elementi_ordinati;         //num_elementi_ordinati limita la ricerca del Max

        scambio = numeri[max_posizione];
        numeri[max_posizione] = numeri[ultima_posizione];
        numeri[ultima_posizione] = scambio;
        

    }

    printf("Array ordinato: ");

    return 0;

}







