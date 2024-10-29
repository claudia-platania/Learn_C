//Funzione per contare le parole

#include <stdio.h>
#include <stdbool.h>


int main(void){


    const char text1[] = "Bene, si parte.";
    const char text2[] = "E adessi si parte.... ancora.";

    int countWords(const char string[]);    //Prototipo della funzione


    printf("%s  -   parole = %i\n", text1, countWords(text1));      //utilizza il valore di ritorno della funzione countWourd usando text1
    printf("%s  -   parole = %i\n", text2, countWords(text2));

    return 0;

}




//Funzione per contare il numero di parole in una stringa

int countWords(const char string[]){        //const char string[]   -->     nel main è Text1 / Text2

    int i;
    int wordCount = 0;

    bool lookingForWord = true;
    bool alphabetic(const char c);      //dichiaro un prototipo della funzione  -->     la dichiara / anticipa


    for( i = 0; string[i] != '\0'; ++i ){

        if( alphabetic(string[i]) == true ){            // if( alphabetic(string[i]) )      -->     posso scriverla anche così

                if( lookingForWord ){

                    ++wordCount;
                    lookingForWord = false;
                }

        } else {
            lookingForWord = true;
        }
    }

    return wordCount;
}





bool alphabetic(const  char c){     //const char c  -->     nel countWords è String[i]      ( c è un singolo carattere dell'array )

    if( ( c >= 'a' && c <= 'z' ) || ( c >= 'A' && c <= 'Z' ) ){

        return true;

    } else {
        return false;
    }

}


