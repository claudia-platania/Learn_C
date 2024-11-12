/*
 Completare la funzione.

 Per esempio, se la matrice matrix è:

 1    3    2
 6    5    4

 l'output è:

 1

*/

#define COLS 3

/**
 * Ritorna 1 se la matrice contiene tutti gli interi
 * a partire da 1 fino al numero di celle della matrice,
 * 0 in caso contrario
 */
int is_complete(int matrix[][COLS], int rows) {
    unsigned int i, row, col;

    for (i = 1; i <= rows * COLS; i++) {
        int present = 0;

        for (row = 0; row < rows; row++) {
            for (col = 0; col < COLS; col++) {
                if (matrix[row][col] == i) {
                    present = 1;
                }
            }
        }

        if (!present) {
            return 0;
        }
    }
    return 1;
}






#include <stdio.h>
#define ROWS 2

int matrix[ROWS][COLS];

for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
        scanf("%i", &matrix[i][j]);
    }
}

printf("Is complete: %i", is_complete(matrix, ROWS))
