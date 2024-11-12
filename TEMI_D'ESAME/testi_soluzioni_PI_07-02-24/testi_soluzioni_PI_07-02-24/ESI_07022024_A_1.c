/*
Si scriva un programma C che richieda all'utente N valori interi e che li
salvi in un array monodimensionale A. Il programma deve poi invocare la
funzione array_norep che riempie la prima colonna di un array B bidimensionale
con i valori inseriti in A senza ripetizioni. Si invochi poi una funzione
count_occurrence che riempie la seconda colonna di B con il numero di
occorrenze in A del valore corrispondente nella prima colonna.
Il programma stampi poi a video l'array B.

Es.
A = [1  3  5  1  8  0  5  1  3  4]

    | 1  3 |
    | 3  2 |
B = | 5  2 |
    | 8  1 |
    | 0  1 |
    | 4  1 |
*/

#include <stdio.h>

#define MAX_ROWS 100

// Dichiarazione funzione
int array_norep(int A[], int B[][2], int n);
void count_occurrence(int A[], int size_A, int B[][2], int Brows);


// MAIN
int main(void) {
    int n, A[MAX_ROWS], B[MAX_ROWS][2];

    // Richiede all'utente il numero di valori da inserire
    do {
        printf("Inserisci il numero N di valori da inserire nel primo array, con n in (0, %i]: \n", MAX_ROWS);
        scanf("%i", &n);
    } while (n <= 0 || n > MAX_ROWS);

    // Richiede all'utente i valori e li salva in A
    for (int i = 0; i < n; i++) {
        printf("Inserisci il valore %i:\n", i+1);
        scanf("%i", &A[i]);
    }

    // Invoca la funzione array_norep per eliminare le ripetizioni
    int Brows = array_norep(A, B, n);
    
    // Invoca la funzione array_norep per eliminare le ripetizioni
    count_occurrence(A, n, B, Brows);

    // Stampa l'array B
    printf("\nArray Risultato:\n");
    for (int i = 0; i < Brows; i++) {
        printf("%2i\t%2i\n", B[i][0], B[i][1]);
    }

    return 0;
}


// DEFINIZIONE FUNZIONI
// per riempire B senza ripetizioni
int array_norep(int A[], int B[][2], int n) {
    int exists, Brows = 0;

    for (int i = 0; i < n; i++) {
        exists = 0;

        // Verifica se il valore è già presente in B
        for (int j = 0; j < Brows; j++) {
            if (B[j][0] == A[i]) {
                exists = 1;
                break;
            }
        }

        // Se il valore non è presente, lo inserisce in B
        if (!exists) {
            B[Brows++][0] = A[i];
        }
    }
    
    return Brows;
}


// per riempire la seconda colonna di B con occorrenze valori di prima colonna di B nella matrice A
void count_occurrence(int A[], int size_A, int B[][2], int Brows){
        
    for (int i = 0; i < Brows; i++) {
        B[i][1] = 0;
        for (int j = 0; j < size_A; j++) {
            if (B[i][0] == A[j])
                (B[i][1])++;
        }
    }
    
}
