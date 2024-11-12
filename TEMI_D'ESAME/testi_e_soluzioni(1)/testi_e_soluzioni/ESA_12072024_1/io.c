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
    scanf("%s", &M);
    
    
    int *newArray = NULL;
    int newsize;
    
    int *array = createArray(M);

    do {
        printmenu();
        scanf("%c", &choice);       //salvo la scelta dentro choice
        
    } while ( choice != 'a' && choice != 'r' && choice != 's' && choice != 'e' );   // &&   -->     1 falso = tutto Falso
                                                                                    // ||   -->     1 vero = tutto Vero
    

    switch (choice) {
        case 'a':
            printf("Quanti elementi vuoi aggiungere all'array di base? ");
            scanf("%i", n ),

            newArray = addelements(array, M, n);
            newsize


            printf("L'array risultante e':\n");
            
            
        case 'r':
            printf("Quante volte vuoi replicare l'array di base? ");
            scanf("%i", n);

            newArray = replicaArray(array, M, n);

            newsize

            printf("L'array risultante e':\n");
            
            
        case 's':
            newArray
            newsize


            printf("L'array base e':\n");
            
            
        case 'e':
            
            printf("Programma chiuso\n");
            return 0;
            
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
    
    int *array = NULL;
    int mem_size = size * sizeof ( int );

    array = ( int * ) malloc (mem_size);

    if( array == NULL ){
        printf("malloc failed!.\n");
        exit(-1);
    }

    int *corrente = array;
    
    // Lettura elementi array da terminale
    printf("Inserisci gli elementi dell'array:\n");
    
    for( corrente = array; corrente <= array + mem_size ; corrente++ ){
        scanf("%i",  corrente);
        //corrente già punta alla cella che voglio riempire

    }
    
    return array;
}


// Funzione per replicare array creando nuovo array (size*times) x 1
int* replicaArray(int *arr, int size, int times) {
    
    
    
    
    
}


// Funzione per replicare arr1 in una matrice Mxn
int* addelements(int *arr, int size, int n_elements) {
 
    //alloco dinamicamente la memoria per gli n_elementi
    int *new = NULL;
    int mem_size = (size + n_elements) * sizeof ( int );        //perchè aggiungo elementi

    new = ( int * ) malloc (mem_size);

    if( new == NULL ){
        printf("malloc failed!.\n");
        exit(-1);
    }
    
    //ora devo unire "arr" e "new"      ??
    //metto da arr a new i vecchi valori
    int *vecchio = arr;
    int *nuovo = new;





    //metto i valori new
    int *corrente = nuovo;      //nuovo è alla fine --> dopo arr copiati in new

    for( corrente = new; corrente <= new + mem_size ; corrente++ ){
        scanf("%i",  corrente);
        //corrente già punta alla cella che voglio riempire

    }
  




    
}
