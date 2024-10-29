//Programma per illustrare le variabili Statiche e Automatiche

#include <stdio.h>

void auto_static (void){

    int autoVar = 1;    //variabili automatiche --> vivono e muoiviono ogni volta che uso la funzione
    static int staticVar = 1;   //variabili statiche --> dopo la fine della funzione la variabile mantiene il suo valore finale


    printf("Automatic = %i, Static = %i\n", autoVar, staticVar);

    ++autoVar;
    ++staticVar;
}


int main (void){

    int i;
    void auto_static (void);


//fa eseguire la funzione per 5 volte --> stampa 5 volte

    for( i = 0; i < 5; ++i ){
        auto_static( );
    }

    return 0;
}



/* 

accessibili / visibili SOLO all'intenro della funzione

AUTOMATICHE =   ad ongi esecuzione della funzioneperdono il loro valore
                ogni volta resettate ( vivono nello Stech )


STATICHE    =   mantengono il loro valore durante TUTTA l'esecuzione del programma
                NON resettate ( vivono nella zona Dati Statici )

 */


