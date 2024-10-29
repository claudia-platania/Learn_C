//Contare le parole in un blocco di testo

#include <stdio.h>
#include <stdbool.h>

int main (void){

    char text[81];
    int totalWords = 0;
    int countWords(const char string[]);        //Prototipo
    void readLine(char buffer[]);               //Prototipo
    bool endOfText = false;


    printf("Digita il testo.\n");
    printf("Quando hai finito, premi 'Invio' all'inizio di una nuova linea. \n\n");


    while( ! endOfText ){
        
        readLine(text);     //esegui la funzione readLine utilizzando come valore in ingresso Text

        if( text[0] == '\0' ){
            endOfText = true;
        
        } else {
            totalWords += countWords(text);
        }
    }

    printf("\nNumero totale di parole: %i\n", totalWords);

    return 0;

}



void readLine(char buffer[]){       //buffer[]      -->     nel main è il TEXT --> un array di caratteri (una stringa)

    char character;
    int i = 0;


    do{

        character = getchar( );     //chiede ed aquisisce un singolo carattere dall'utente e lo ritorna a character

        buffer[i] = character;      //il buffer è un contenitore --> mettiamo il valore nella posizione i del buffer

        ++i;

    } while ( character != '\n' );       //riempio il buffer[] di valori che il getchar() acquisisce dall'utente sino al carattere '\n'


    buffer[ i - 1 ] = '\0';         //lo scrivo perchè alla fine della mia stringa deve esserci il carattere '\0'
    //quindi siccome la mia i alla fine del do_while è incrementata di 1, alla fine devo sottrarre 1 per poter inserire il valore '\0'
    //così io metto lo '\0' al posto dello '\n'

}




int countWords(const char string[]){

    int i;
    int wordCount = 0;
    bool lookingForWord = true;
    bool alphabetic(const char c);
    
    for( i = 0; string[i] != '\0'; ++i ){

        if( alphabetic(string[i]) == true ){

                if( lookingForWord ){

                    ++wordCount;
                    lookingForWord = false;
                }

        } else{
            lookingForWord = true;
        }

    }

    return wordCount;

}



bool alphabetic(const char c){      //c --> nella funzione counteWords è String[i]      -->     prendo 1 singolo carattere ( quello nella posizione i dell'array )

    if( ( c >= 'a' && c <= 'z' ) || ( c >= 'A' && c <= 'Z' ) ){

        return true;

    } else{

        return false;
    }

}

