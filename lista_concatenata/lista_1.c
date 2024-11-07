//lista concatenata --> esercitazione

//


#include <stdio.h>
#include <stdlib.h>     //devo includere questa libreria per usare la CALLOC

//#define dimensione_lista 10


struct complex{             //Creo un TIPO      -->     un contenitore      -->     mi permette di costruire un singolo numero complesso (parte reale + parte immaginari)

    float reali;
    float immaginari;

};



int main (void){

    int i = 0;      //questa variabile verrà usata nel ciclo per riempire la lista di numeri complessi

    int dimensione_lista;

    printf("Quanti numeri?: ");
    scanf("%i", &dimensione_lista);


    struct complex *lista_numeri;       //lista_numeri = variabile  --> questo sarà il primo elemento della lista
    
//per allocare memoria dinamica tramite MALLOC
    int dimensione_complex = sizeof (struct complex);       //sto dicendo che tipo di spazio bisogna allocare usando sizeof -->     allochiamo spazio di tipo struct complex

    int dimensione_memoria = dimensione_lista * dimensione_complex;     // * = per (moltiplicazione)    -->     dimensione completa

    lista_numeri = (struct complex *) malloc ( dimensione_memoria );        //allocando spazio dinamicamente con MALLOC


    struct complex *current = lista_numeri;     //così ci salviamo la 1 posizione

    //questo ciclo crea "dimensione_lista" (10) elementi della lista
    for( i = 0; i < dimensione_lista ; i++ ){


        //assegniamo alla parte reale e immaginaria del numero complesso il valore di i e -i

        lista_numeri[i].reali = i+1;      //usiamo lista_numeri dandogli in impasto i
                        // i + 1    -->     per stampare a partire dall'1
                        // usiamo i per vedere che numeri sono (per visualizzare qualcosa)

        lista_numeri[i].immaginari = -(i+1);      //mettiamo -i solo per vedere una differenza quando stampiamo, non per altri motivi
                        // - ( i + 1 )      -->     per stampare a partire da 1 ma in negativo

        //current++;    
    
    }


    current = lista_numeri;       //per resettare current    -->     current ora punta al 1 indirizzo      --> così possiamo scorrere nuovamente current (usando next)
    // current è il 1 blocchetto ora   (puntatore)


   for( i = 0; i < dimensione_lista ; i++ ){

        printf("%.2f + %.2fi\n", lista_numeri[i].reali, lista_numeri[i].immaginari);        


   }


    return 0;

}








