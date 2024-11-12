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
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &white_list[i]);
        // printf("%d > %d\n", i, white_list[i]);
    }

    // Popola black_list, acquisendo dallo standard input SIZE valori per
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &black_list[i]);
        // printf("%d > %d\n", i, black_list[i]);
    }

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
    for (int i = 0; i < size_white; i++) {
        int div = white_list[i];

        // Soluzione ricorsiva
        if (n % div == 0 && !in(div, black_list, size_black)) {
            if (div > 1 && prime_r(div, div - 1)) {
                printf("%d ", div);
            }
        }

        // Soluzione iterativa
        // if (n % div == 0 && !in(div, black_list, size_black) && prime_i(div)) {
        //         printf("%d ", div);
        //     }
        // }
    }
}

/*
 * Restituisce true se n è presente in values, false altrimenti,
 * utilizzando la ricorsione.
 * L'eventuale soluzione iterativa avrà una valutazione inferiore.
 */
bool in(int n, int values[], int size) {
    if (size < 0) {
        return false;
    } else {
        if (n == values[size - 1]) {
            return true;
        } else {
            return in(n, values, size - 1);
        }
    }
}

/*
 * Dato n >= 0 restituisce true se è primo, false altrimenti,
 * utilizzando la ricorsione.
 */
bool prime_r(int n, int i) {
    if (i == 1) {
        return true;
    } else {
        if (n % i == 0) {
            return false;
        } else {
            return prime_r(n, i - 1);
        }
    }
}

/*
 * Dato n >= 0 restituisce 1 se è primo, 0 altrimenti,
 * utilizzando l'iterazione.
 * ATTENZIONE: la funzione va implementata soltanto se non si è implementata prime_r()
 */
bool prime_i(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return n > 1;
}
