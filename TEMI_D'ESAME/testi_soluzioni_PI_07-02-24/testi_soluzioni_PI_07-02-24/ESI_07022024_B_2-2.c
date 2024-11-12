/*
 Completare la funzione.

 Per esempio, se la matrice matrix è:

 2    1    3
 4    4    2
 5    1    1

 in output la matrice viene modificata nel modo seguente:

 0    0    6
 0    0    10
 0    0    7



*/


#define SIZE 3

/*
 * Modifica la matrice, azzerando gli elementi in tutte le colonne, tranne l'ultima
 * e riportando nell'ultima colonna la somma dei valori di ciascuna riga della matrice di partenza.
 */
void sum_by_row(int matrix[][SIZE]) {
    int total[SIZE] = {0};

    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            total[row] += matrix[row][col];
        }
    }

    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            if (col == SIZE - 1) {
                matrix[row][col] = total[row];
            } else {
                matrix[row][col] = 0;
            }
        }
    }
}









#include <stdio.h>


int matrix[SIZE][SIZE];

for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
        scanf("%i", &matrix[i][j]);
    }
}

sum_by_row(matrix);

for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
        printf("%i  ", matrix[i][j]);
    }
    printf("\n");
}

