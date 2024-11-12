/*
Si scriva un programma C che richieda all'utente N valori interi
e che li salvi in un array monodimensionale. Il programma deve poi
invocare la funzione decodifica() che trasforma in char i valori
compresi tra 26 e 126 di array e li salva in parola. Il programma
deve poi stampare la parola a video.
*/

#include <stdio.h>
#define MAX_VALUES 100

// DICHIARAZIONE FUNZIONI
int decodifica(int array[], int size, char parola[]);
void stampa_parola(char parola[], int size);


// MAIN PROGRAM
int main(void) {
    int n, array[MAX_VALUES];
    char parola[MAX_VALUES];

        // Richiede all'utente il numero di valori da decodificare
        do {
            printf("Quanti valori vuoi decodificare?\nATTENZIONE: il numero di valori deve essere in (0, %i]: \n", MAX_VALUES);
            scanf("%i", &n);
        } while (n <= 0 || n >= MAX_VALUES);

        // Richiede all'utente i valori da decodificare e li salva in array
        for (int i = 0; i < n; i++) {
            printf("Inserisci il valore %i:\n", i+1);
            scanf("%i", &array[i]);
        }
    
    // Invoca la funzione per decodificare l'array
    int length = decodifica(array, n, parola);

    // Stampa la parola/frase decodificata
    printf("La parola/frase decodificata è:\n");
    stampa_parola(parola, length);

    return 0;
}


// DEFINIZIONE FUNZIONI
// di decodifica
int decodifica(int array[], int size, char parola[]) {
    int length_parola = 0;
    
    for (int i = 0; i < size; i++) {
        /* NOTA: se valore non in [26, 126], ignorare la decodifica */
        if (array[i] >= 26 && array[i] <= 126) {
            parola[length_parola++] = (char) array[i];
        }
    }
    
    return length_parola;
}

// di stampa
void stampa_parola(char parola[], int size){
    for (int i = 0; i < size; i++) {
        printf("%c", parola[i]);
    }
    printf("\n");
}
