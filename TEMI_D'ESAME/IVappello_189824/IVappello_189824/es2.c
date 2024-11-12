/*
 
 Completare il programma C nelle parti indicate con TODO (lasciando inalterate le altre parti) in modo che:

     legga da standard input una sequenza di valori interi fino ad incontrare il numero 0, che viene utilizzato come terminatore e non viene considerato nella sequenza (l'input può essere rediretto da un file in modo da non dover inserire manualmente i valori a ogni esecuzione);
     stampi il risultato.



 */

/**
 * Completare tutte le funzioni del programma in modo da fornire l'output atteso.
 * Non è richiesto il codice per liberare la meoria allocata.
 */
#include <stdio.h>
#include <stdlib.h>  // malloc(), free(), exit()

#define END 0

// Struttura giocatore
struct player_t {
    int points;
    struct player_t *next;
};

// Struttura lista classifica dei giocatori
struct ranking_t {
    struct player_t *head;
};

struct ranking_t *create_ranking();
void insert_player(struct ranking_t *list, int points);
void print_ranking(struct player_t *head);

int main() {
    struct ranking_t *list = create_ranking();
    int points;

    do {
        scanf("%d", &points);

        if (points != END) {
            insert_player(list, points);
        }
    } while (points != END);

    print_ranking(list->head);

    return 0;
}

/**
 * Crea una lista per una classifica di giocatori.
 * Non è necessario effettuare controlli sulla corretta allocazione della memoria.
 */
struct ranking_t *create_ranking() { return malloc(sizeof(struct ranking_t)); }

/**
 * Inserisce in ordine crescente di points un elemento nella lista concatenata di nodi di tipo player_t.
 * NOTA: in alternativa all'inserimento ordinato in ordine crescente di points,
 * è possibile effettuare un inserimento in coda che però avrà un punteggio inferiore nella valutazione dell'esercizio.
 */
void insert_player(struct ranking_t *list, int points) {
    struct player_t *new = malloc(sizeof(struct player_t));
    new->points = points;
    new->next = NULL;

    if (list->head == NULL) {
        list->head = new;
    } else {
        struct player_t *current = list->head;

        if (current->points > points) {
            new->next = current;
            list->head = new;
        } else {
            struct player_t *prev;

            while (current && current->points < points) {
                prev = current;
                current = current->next;
            }
            prev->next = new;
            new->next = current;
        }
    }
}

/**
 * Stampa in modalità ricorsiva uno per riga i punteggi dei giocatori della lista
 * a partire dal giocatore puntato da head.
 * NOTA: in alternativa alla modalità ricorsiva, è possibile utilizzare la modalità iterativa
 * che però avrà un punteggio inferiore nella valutazione dell'esercizio.
 */
void print_ranking(struct player_t *head) {
    if (head) {
        printf("%d\n", head->points);
        print_ranking(head->next);
    }
}
