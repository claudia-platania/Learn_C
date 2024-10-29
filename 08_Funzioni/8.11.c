//Programma per disporre un array di interi in ordine crescente

#include <stdio.h>

void sort (int a[], int n){

    int i, j, temp;

    for( i = 0; i < n - 1; ++i ){

        for( j = i + 1; j < n; ++j ){
            
            if( a[i] > a[j] ){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}


int main (void){

    int i;
    int array[16] = { 34, -5, 6, 9, 12, 100, 56, 22, 
                        44, -3, -9, 12, 17, 22, 6, 11 };
    
    void sort (int a[], int n);     //PROTOTIPO     -->     sarebbe quello che metto fuori dal main per scrivere la funzione sotto al main

    printf("L'array prima dell'ordinamento: \n");

    for( i = 0; i < 16; ++i ){
        printf("%i  ", array[i]);
    }

    sort(array, 16);

    printf("\n\nL'array dopo l'ordinamento: \n");

    for( i = 0; i < 16; ++i ){
        printf("%i  ", array[i]);
    }

    printf("\n");

    return 0;
}




