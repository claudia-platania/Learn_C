/*
 Completare la funzione.

 Per esempio, se la matrice matrix è:

 1    1    2
 1    3    1
 2    2    1

 e il vettore v è:

 {10, 25}

 l'output è:

 0



*/

#define SIZE 3

/*
 * Calcola il prodotto degli elementi della matrice matrix.
 * Quindi, in base al vettore v, che ha dimensione 2:
 * ritorna -1 se: prodotto < v[0],
 * ritorna 0 se: v[0] <= prodotto <= v[1]
 * ritorna 1 se: prodotto > v[1]
 */
int characterize(int matrix[][SIZE], int v[]) {
    int product = 1;

    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            product *= matrix[row][col];
        }
    }
    // printf("Product: %i", product);
    if (product < v[0]) {
        return -1;
    } else if (product <= v[1]) {
        return 0;
    } else {
        return 1;
    }
}










#include <stdio.h>


int matrix[SIZE][SIZE];
int v[] = {10, 25};

for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
        scanf("%i", &matrix[i][j]);
    }
}
printf("Characterize: %i\n", characterize(matrix, v));
