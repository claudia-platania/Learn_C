#include <stdbool.h>
#include <stdio.h>

#define SIZE 5

void print_dividers(int n, int white_list[], int size_white, int black_list[], int size_black);
bool in(int n, int values[], int size);
bool prime_r(int n, int i);
bool prime_i(int n);

/*
 * Program entry point
 */
int main() {
    int n;
    int white_list[SIZE];
    int black_list[SIZE];

    scanf("%d", &n);

    // Popola white_list, acquisendo dallo standard input SIZE valori per
    // TODO

    // Popola black_list, acquisendo dallo standard input SIZE valori per
    // TODO

    printf("I divisori primi di %d presenti nella white list e non nella black list sono:\n", n);
    print_dividers(n, white_list, SIZE, black_list, SIZE);
    printf("\n");
    return 0;
}

/*
 * Stampa i divisori primi di n, seguiti da uno spazio,
 * che sono presenti in white_list e non sono presenti in black_list.
 * Usa la funzione in() per verificare la presenza in una lista
 * e la funzione ricorsiva prime_r() per verificare se un numero è primo.
 * L'eventuale uso della fuzione iterativa prime_i() avrà una valutazione inferiore.
 */
void print_dividers(int n, int white_list[], int size_white, int black_list[], int size_black) {
    // TODO
}

/*
 * Restituisce true se n è presente in values, false altrimenti,
 * utilizzando la ricorsione.
 * L'eventuale soluzione iterativa avrà una valutazione inferiore.
 */
bool in(int n, int values[], int size) {
    // TODO
}

/*
 * Dato n >= 0 restituisce true se è primo, false altrimenti,
 * utilizzando la ricorsione.
 */
bool prime_r(int n, int i) {
    // TODO
}

/*
 * Dato n >= 0 restituisce 1 se è primo, 0 altrimenti,
 * utilizzando l'iterazione.
 * ATTENZIONE: la funzione va implementata soltanto se non si è implementata prime_r()
 */
bool prime_i(int n) {
    // TODO
}
