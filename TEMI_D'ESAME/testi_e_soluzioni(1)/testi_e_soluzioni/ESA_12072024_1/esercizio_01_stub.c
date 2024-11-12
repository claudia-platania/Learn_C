/*
 
 Scrivere un programma C che chieda all'utente di inserire da tastiera gli M (scelto da utente) elementi di un array di base allocato dinamicamente. 
 Il programma deve poi presentare all'utente un menu per permettere la scelta tra 4 operazioni:

     Aggiungere N elementi all'array di base;
     Replicare l'array N volte (nuovo array ha M*N righe);
     Stampare l'array base;
     Chiudere il programma.

 Per lavorare sugli array è richiesto l'utilizzo dell'aritmetica dei puntatori.

 Note: Non modificare i prototipi delle funzioni. Non modificare il codice già scritto.



 
 */


#include <stdio.h>
#include <stdlib.h>

// DICHIARAZIONE PROTOTIPI FUNZIONI
/** Non modificare i prototipi!! **/
void printmenu(void);
int* createArray(int size);
void printArray(int *arr, int size);
int* replicaArray(int *arr, int size, int times);
int* addelements(int *arr, int size, int n_elements);

// MAIN PROGRAM
int main(void) {
    int M, n;
    char choice;
    
    // Lettura della dimensione dell'array di base
    printf("Inserisci la lunghezza dell'array da creare: ");
    
    
    
    int *newArray = NULL;
    int newsize;
    
    do {
        printmenu();
        
        
        
    } while (               );
    
    switch (choice) {
        case 'a':
            printf("Quanti elementi vuoi aggiungere all'array di base? ");
            
            newArray
            newsize
            printf("L'array risultante e':\n");
            
            
        case 'r':
            printf("Quante volte vuoi replicare l'array di base? ");
            
            newArray
            newsize
            printf("L'array risultante e':\n");
            
            
        case 's':
            newArray
            newsize
            printf("L'array base e':\n");
            
            
        case 'e':
            
            
            
            
    }
    
    printArray(   ,   );
    
    return 0;
}


// DEFINIZIONE FUNZIONI
// Stampa menu:
void printmenu(void){
    printf("\n-------------------------------\n");
    printf("Che operazione vuoi eseguire?\n");
    printf("\t(a)\tAggiungi elementi all'array;\n");
    printf("\t(r)\tReplica l'array N volte (nuovo array ha M*N righe);\n");
    printf("\t(s)\tStampa l'array base;\n");
    printf("\t(e)\tExit.\n");
    printf("-------------------------------\n\n");
}

// Funzione per stampare l'array
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%4i\t", *(arr + i));
    }
    printf("\n");
}

// Funzione per leggere gli elementi di un array
int* createArray(int size) {
    
    
    
    
    // Lettura elementi array da terminale
    printf("Inserisci gli elementi dell'array:\n");
    
    
    
}

// Funzione per replicare array creando nuovo array (size*times) x 1
int* replicaArray(int *arr, int size, int times) {
    
    
    
    
    
}

// Funzione per replicare arr1 in una matrice Mxn
int* addelements(int *arr, int size, int n_elements) {
    
    
    
}
