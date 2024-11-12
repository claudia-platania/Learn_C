/*
 Completare la funzione.

 Per esempio, se la matrice matrix è:

 1    2    0
 0   -5    1
 3    1    0

 e il vettore v è:

 {0, 4}

 l'output è:

 'B'
*/

#define SIZE 3

/*
 * Calcola la somma degli elementi della matrice matrix.
 * Quindi, in base al vettore v, che ha dimensione 2:
 * ritorna 'A' se: somma < v[0],
 * ritorna 'B' se: v[0] <= somma <= v[1]
 * ritorna 'C' se: somma > v[1]
 */
char characterize(int matrix[][SIZE], int v[]) {
    int sum = 0;

    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            sum += matrix[row][col];
        }
    }

    if (sum < v[0]) {
        return 'A';
    } else if (sum <= v[1]) {
        return 'B';
    } else {
        return 'C';
    }
}


#include <stdio.h>


int matrix[SIZE][SIZE];
int v[] = {0, 4};

for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
        scanf("%i", &matrix[i][j]);
    }
}
printf("Characterize: %c\n", characterize(matrix, v));




