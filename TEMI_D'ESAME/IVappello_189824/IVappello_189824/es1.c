/*
 
 Completare il programma in modo che la lista di elementi generata venga:

     salvata su un file txt
     stampata a video leggendola dal file salvato
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXL 50

/* ----- DEFINIZIONE STRUTTURE ---- */
struct articolo {
    int id; // è un numero progressivo
    char nome[MAXL];
    float costo;
    struct articolo *next;
};



/* ------ PROTOTIPI FUNZIONI ------ */
/* Non modificare i prototipi dati! */
struct articolo *aggiungi_articolo(struct articolo *head, int progressivo);
void scrivi_su_file(struct articolo *head, char *filename);
void stampa_file(char *filename);


/* MAIN PROGRAM */
int main() {
    int n;
    char* filename = "entries.txt";
    // Inizializziamo la lista a NULL (lista vuota)
    struct articolo *head = NULL;
    
    printf("Quanti articoli vuoi aggiungere?\n");
    scanf("%i", &n);
    
    for (int i = 0; i < n; i++) {
        head = aggiungi_articolo(head, i);
    }
    
    // Scriviamo la lista su un file
    scrivi_su_file(head, filename);
    printf("-------------------------\n\n");
    
    // Leggo e stampo il file
    printf("Stampo contenuto del file %s:\n", filename);
    stampa_file(filename);
    
    printf("Programma eseguito correttamente!\nChiudo il programma.\n");

    return 0;
}



/* ----- DEFINIZIONE FUNZIONI ----- */
/* Non modificare i prototipi dati! */
// Funzione per aggiungere un nuovo articolo in testa alla lista
struct articolo *aggiungi_articolo(struct articolo *head, int progressivo){
    float costo;
    char nome[MAXL];
    
    struct articolo *nuovo = (struct articolo *)malloc(sizeof(struct articolo));
    // verifico allocazione
    if (nuovo == NULL) {
        printf("Errore di allocazione memoria!\n");
        exit(1);
    }

    // Chiedo informazioni a utente
    printf("Inserire nome articolo (no spazi, no tab - premi invio per conferma): \n");
    scanf("%s", nome);
    
    printf("Inserire costo articolo (non specificare la valuta): \n");
    scanf("%f", &costo);
        
    // Popoliamo i campi della nuova entry
    nuovo->id = progressivo;
    strcpy(nuovo->nome, nome); //funzionamento di strcpy: char *strcpy(char *dest, const char *src);
    
    nuovo->costo = costo;
    nuovo->next = head; // Il nuovo articolo punta all'ultimo elemento già inserito

    return nuovo; // Il nuovo articolo diventa la testa della lista
}

// Funzione per scrivere la lista su file
void scrivi_su_file(struct articolo *head, char *filename) {
    FILE *file = fopen(filename, "w");
    // Verifico che il file si sia aperto, altrimenti interrompo
    if (file == NULL) {
        printf("Errore nell'aprire il file!\n");
        return;
    }

    // Cicla attraverso la lista e scrive ogni entry nel file
    struct articolo *nodo_corrente = head;
    while (nodo_corrente != NULL) {
        fprintf(file, "id: %d, name: %s, value: %.2f\n", nodo_corrente->id, nodo_corrente->nome, nodo_corrente->costo);
        nodo_corrente = nodo_corrente->next;
    }

    fclose(file);
    printf("Dati scritti su %s con successo!\n", filename);
}

// Funzione che legge e stampa il contenuto di un file
void stampa_file(char *filename){
    FILE *file = fopen(filename, "r"); // Apri il file in modalità lettura
    if (file == NULL) {
        printf("Errore nell'apertura del file %s.\n", filename);
        return;
    }

    char c;
    // Leggi carattere per carattere fino alla fine del file
    while ((c = fgetc(file)) != EOF) {
        putc(c, stdout); // Stampa ogni carattere usando putc
    }
    
    fclose(file); // Chiudi il file
}
