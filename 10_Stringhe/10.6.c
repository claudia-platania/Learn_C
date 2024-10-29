//Leggere delle linee di testo

#include <stdio.h>

int main (void){

    int i;
    char  line[81];
    void readLine(char buffer[]);           // buffer = contenitore


    for( i = 0; i < 3; ++i ){

        readLine(line);
        printf("%s\n\n", line);

    }

    return 0;
}



//Funzione per leggere una riga di testo digitata dall'utente

void readLine(char buffer[]){

    char character;     // 1 singolo carattere
    int i = 0;


    do{
        character = getchar( );         // getchar( ) = leregge 1 singolo caratte e lo acquisisce e lo salva
                                        // getchar( ) acquisisce 1 carattere dall'utente e lo ritorna a character
        
        buffer[i] = character;          //mette il valore nella posizione i nel buffer[]
        
        ++i;
    
    } while( character != '\n' );


    buffer[i - 1] = '\0';       //la stringa ha bisogna di '\0' alla fine --> [ i - 1 ] perchè va dopo l'ultimo carattere inserito ( al posto del \n )

}










