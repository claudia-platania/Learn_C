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
    do {
        printf("Inserisci la lunghezza dell'array da creare:\n");
        scanf("%d", &M);
    } while (M <= 0);
    int* arr = createArray(M);
    
    int *newArray = NULL;
    int newsize = M;
    
    do {
        printmenu();
        scanf(" %c", &choice);
    } while (choice != 'a' && choice != 'r' && choice != 's' && choice != 'e');
    
    switch (choice) {
        case 'a':
            printf("Quanti elementi vuoi aggiungere all'array di base?\n");
            scanf("%d", &n);
            newArray = addelements(arr, M, n);
            newsize = M+n;
            printf("L'array risultante e':\n");
            break;
        case 'r':
            printf("Quante volte vuoi replicare l'array di base?\n");
            scanf("%d", &n);
            newArray = replicaArray(arr, M, n);
            newsize = M*n;
            printf("L'array risultante e':\n");
            break;
        case 's':
            newArray = arr;
            printf("L'array base e':\n");
            break;
        case 'e':
            printf("Il prgramma verrà terminato.\n");
            return 0;
        default:
            return 1;
    }
    
    printArray(newArray, newsize);
    
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
    // Allocazione dinamica array di dim size
    int *arr = (int*)malloc(size * sizeof(int));
    // Verifica corretta allocazione
    if (arr == NULL) {
        printf("Errore nell'allocazione della memoria.\n");
        exit(-1);
    }
    
    // Lettura elementi array da terminale
    printf("Inserisci gli elementi dell'array:\n");
    
    for (int i = 0; i < size; i++) {
        scanf("%d", arr + i);
    }
    
    return arr;
}

// Funzione per replicare array creando nuovo array (size*times) x 1
int* replicaArray(int *arr, int size, int times) {
    int *res = (int*)malloc(size * times * sizeof(int));
    if (res == NULL) {
        printf("Errore nell'allocazione della memoria.\n");
        exit(-1);
    }
    
    for (int j = 0; j < times; j++){
        for (int i = 0; i < size; i++) {
            *(res + ((size * j) + i)) = *(arr + i);
        }
    }
    
    return res;
}

// Funzione per replicare arr1 in una matrice Mxn
int* addelements(int *arr, int size, int n_elements) {
    int i;
    
    int *res = (int*)malloc((size + n_elements) * sizeof(int));
    if (res == NULL) {
        printf("Errore nell'allocazione della memoria.\n");
        exit(-1);
    }
    
    // copio arr in res
    for (i = 0; i < size; i++) {
        *(res + i) = *(arr + i);
    }
    
    // aggiungo gli n elementi
    printf("Inserisci gli %i elementi da aggiungere in coda all'array:\n", n_elements);
    for (int el = 0; el < n_elements; el++) {
        printf(" elemento %i:\n", el + 1);
        scanf("%d", res + size + el);
    }
    
    return res;
}