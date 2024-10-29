//Utilizzare gli array multidimensionali e le funzioni

#include <stdio.h>

int main (void){

    void scalarMultiply (int matrix[3][5],  int scalar);    //matrix --> passo per riferimento ( l'indirizzo ) --> modifico quello originale ( ali array TUTTI così )
                                                            //scalar --> passo per valore ( una copia ) ( un singolo valore )
    void displayMatrix (int matrix[3][5]);


    int sampleMatrix[3][5] = {

        { 7, 16, 55, 13, 12 },
        { 12, 10, 52, 0, 7 },
        { -2, 1, 2, 4, 9 }
    };

    printf("Matrice origine:\n");
    displayMatrix (sampleMatrix);

    scalarMultiply (sampleMatrix, 2);

    printf("\nMoltiplicata per 2: \n");
    displayMatrix (sampleMatrix);

    scalarMultiply (sampleMatrix, -1);

    printf("\nPoi moltiplicata per per -1: \n");
    displayMatrix (sampleMatrix);


    return 0;
}


//Funzione per moltiplicare un array 3 x 5 per uno scalare

//Modifico la matrice originale ( passo l'indirizzo della matrice e NON una sua copia )

void scalarMultiply (int matrix[3][5],  int scalar){

    int row, column;        //row = riga ( i )     column = colonna ( j )

    for( row = 0; row < 3; ++row ){

        for( column = 0; column < 5; ++column ){

            matrix[row][column] *= scalar;      //moltiplica ogni parte della matrice per uno scalare
        }
    }

}


//Funzione per stampare alla fine la matrice modificata

void displayMatrix (int matrix[3][5]){

    int row, column;        //le devo richiamare perchè sono in un'altra funzione

    for( row = 0; row < 3; ++row ){

        for( column = 0; column < 5; ++column ){

            printf("%5i", matrix[row][column]);     //uso il 5 per far capire che dopo averr stampato una cifra lascia 5 spazi dalla successiva
        }
        printf("\n");
    }

}

