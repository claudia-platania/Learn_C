//Restituire un puntatore da una funzione

#include <stdio.h>


struct entry{

    int value;
    struct entry *next;

};


/* La funzione specifica che la funzione findEntry( ) restituisce un puntatore a una struttura
e che riceve un puntatore dello stesso tipo come 1 argomento ed un intero come 2 argomento */


/* io uso "struct entry" perchè così posso usare ( -> value ) e/o ( -> next )      -->     perche sto usando degli oggetti contenuti nella struct entry */

struct entry *findEntry (struct entry *listPtr, int match){     //funzione che accetta una entry e ritorna una entry (tipo di dato)
                                                                //ritorna un puntatore


    //il ciclo scorre gli elementi della lista
    while( listPtr != ( struct entry *) 0 ){        //viene eseguito fino a quando non raggiungiamo il puntatore Nullo --> il ciclo termina  

        if( listPtr -> value == match ){    //viene eseguito fino a quando match è ugaule ad 1 degli elementi della lista
            
            return listPtr;        //in quel caso restituisce il puntatore a listPtr
        
        } else{
            listPtr = listPtr -> next;      //questo comando serve appunto per far scorrere gli elementi della list --> next --> next position
        }
    }

    return (struct entry *) 0;       //se il ciclo termina per viaa del raggiungimento del puntatore Nullo --> stampiamo il puntatore Nullo
}




int main (void){

    struct entry *findEntry(struct entry *listPtr, int match);      //Prototipo

    struct entry n1, n2, n3;        //i 3 valori che ho

    struct entry *listPrt, *listStart = &n1;

    /* 
    listStart = &n1     -->     sto associando gli indirizzi    -->     ora listStart contiene al suo interno l'indirizzo di n1
     */



    int search;     //il valore che l'utente inserisce manualmente


    n1.value = 100;
    n1.next = &n2;

    n2.value = 200;
    n2.next = &n3;

    n3.value = 300;
    n3.next = 0;


    printf("Digita il valore da cercare: ");
    scanf("%i", &search);

    listPrt = findEntry(listStart, search);     //chiamo la funzione dandogli listStart (come puntatore) e search (come intero)
//il PUNTATORE restituito da findEntry viene associato a listPrt    -->     dovrebbe essere lo stesso valore immesso dall'utente

    if( listPrt != (struct entry *) 0 ){                //se ho un valore DIVERSO dal puntatore nullo = (struct entry *) 0
        printf("HO trovato %i.\n", listPrt -> value);

    } else{
        printf("Non l'ho trovato.\n");      //se listPrt è nullo (ha ricevuto il Puntatore nullo)
    }

    return 0;
}





