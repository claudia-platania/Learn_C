/*
 Si completi il programma C in modo che:

 1) inizializzi con valori interi random nel range 0-99 un array di dimensione 10;

 2) stampi il contenuto dell'array inizializzato come da punto 1;

 3) ordini l'array in modo crescente;

 4) stampi l'array ordinato.

 NON si deve modificare il codice esistente. Si posso aggiungere funzioni di supporto.
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

//dichiarazione funzioni:
void print_array(int array[], int length);
void sort_array(int array[], int length);
int swap_pairs(int array[], int length);
void swap(int array[], int i, int j);
void init_random(int array[], int length);

int main(void) {
    int array[SIZE]; // = {5, 7, 13, 4, 12};
    
    init_random(array, SIZE);
    print_array(array, SIZE);
    sort_array(array, SIZE);
    print_array(array, SIZE);
    
  return 0;
};


//definizione funzioni:
void init_random(int array[], int length){
    for(int pos=0; pos < length; pos++)
        array[pos] = rand()%100; //assegneremo un numero tra 0 e 99
};



void print_array(int array[], int length){
    printf("[");
    for(int i=0; i<length; i++)
        printf(" %i", array[i]);
    printf("]\n");
};

void sort_array(int array[], int length){
    while(swap_pairs(array, length));
};

int swap_pairs(int array[], int length){
    int swapped=0; //false
    for(int pos=0; pos<length-1  ; pos++){
        if (array[pos] > array[pos+1]){
            swap(array, pos, pos+1);
            swapped = 1; //true
        }; //end if
    }; //end for
    return swapped;
};


void swap(int array[], int i, int j){
    int temp=array[i];
    array[i] = array[j];
    array[j] = temp;
};
