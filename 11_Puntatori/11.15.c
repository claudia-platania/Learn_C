/* Funzion per contare i caratteri in una stringa
versione con i puntatori */

#include <stdio.h>


int stringLength (const char * string){         // siccome il CONST sta prima del "char * string" significa che NON Posso cambiare il CONTENUTO

    const char *cptr = string;                  // siccome "string" è Const allora metto a Const anche *cptr    -->     devono contenere lo stesso tipo se li eguaglio
// sto dando *cptr l'indirizzo a cui punta string

/* 
Siccome FOR( ) e WHILE( ) necessitano valori Booleani ( che restituiscano T o F )
se non specifichiamo, i cicli considereranno:
    - 0 --> False
    - != 0 --> True
    - '\0' --> False
 */


    while( *cptr ){         //il ciclo continua ad eseguire sino a quando non incontra il carattere '\0' che c'è SEMPRE a Fine Stringhe

        ++cptr;             //incrementa cptr per leggere tutta la stringa
    
    }   //quando esco dal ciclo cptr punta al '\0'  (indirizzo finale)

    return cptr - string;   //li sottraggo perchè voglio contare il numero di CARATTERI contenuti nella stringa (escludendo il '\0')
}



int main (void){

    int stringLength (const char *string);

    printf("%i  ", stringLength ("stringLength test"));     //consta anche gli spazi
    printf("%i  ", stringLength (""));
    printf("%i\n", stringLength ("complete"));

    return 0;
}





