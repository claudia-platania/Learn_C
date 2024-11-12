/**
 * Implementare una stringa come lista di elementi di tipo node_t terminata da STRING_END.
 * completare tutte le funzioni dichiarate ma non definite nel programma.
 */
#include <stdio.h>
#include <stdlib.h>  // malloc(), free(), exit()

#define STRING_START 0
#define STRING_END -1

struct node_t {
    char data;
    struct node_t *next;
};

void check_alloc(struct node_t *p);
struct node_t *make_string(char *s);
void print_string(struct node_t *head, int start, int end);
void free_string(struct node_t *head);

int main() {
    struct node_t *s;
    char *buffer = NULL;
    long unsigned int len = 80;
    getline(&buffer, &len, stdin);

    s = make_string(buffer);

    print_string(s, STRING_START, STRING_END);
    print_string(s, 6, STRING_END);

    free_string(s);
    return 0;
}

/**
 * Controlla se un puntatore è valido e se non è così
 * stampa la stringa "Errore nell'allocazione della memoria.\n" ed esce con exit(-1).
 */
void check_alloc(struct node_t *p) {
    if (p == NULL) {
        printf("Errore nell'allocazione della memoria.\n");
        exit(-1);
    }
}

/**
 * Crea una lista concatenata di nodi di tipo node_t
 * a partire dalla stringa s.
 * Se la stringa s è vuota, ritorna NULL.
 */
struct node_t *make_string(char *s) {
    struct node_t *head = NULL;
    struct node_t *current;
    struct node_t *prev;

    while (*s) {
        current = (struct node_t *)malloc(sizeof(struct node_t));
        check_alloc(current);

        current->data = *s;
        current->next = NULL;

        if (head == NULL) {
            head = current;
        } else {
            prev->next = current;
        }
        prev = current;
        s++;
    }
    return head;
}

/**
 * Stampa i caratteri di una lista concatenta di tipo node_t dall'indice start all'indice end inclusi.
 * Se end è STRING_END, stampa i carattteri fino alla fine della lista.
 * Si ipotizza che start sia maggiore di zero e end sia maggiore di zero oppure sia STRING_END.
 */
void print_string(struct node_t *head, int start, int end) {
    int count = 0;

    while (head) {
        if (count >= start && (count <= end || end == STRING_END)) {
            printf("%c", head->data);
        }
        head = head->next;
        count++;
    }
}

/**
 * Libera con free() la memoria della lista concatenata che inizia con head.
 */
void free_string(struct node_t *head) {
    struct node_t *prev = head;

    while (head) {
        prev = head;
        head = head->next;
        free(prev);
    }
}
