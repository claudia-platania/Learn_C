//Programma per copiare un file in un altro

#include <stdio.h>

int main (void){

    char inName[64];    //array che memorizzerà il nome del file in input (da leggere)
    char outName[64];   //array che memorizzerà il nome del file in output (da scrivere)

    FILE *in, *out;     //puntatori a file
    //FILE --> è un tipo di dato

    int c;      //variabile utilizzata per memorizzare temporaneamente letto dal file di input durante la copia


    //Aquisisce i nomi dei file dall'utente

    printf("Digita il nome del file da copiare: ");
    scanf("%63s", inName);

    printf("Digita il nome del file di output: ");
    scanf("%63s", outName);
    


    //Aprire i file di Input e Output

    if( ( in = fopen(inName, "r") ) == NULL ){  //"r" = aprire come file di lettura (read)

        printf("Non posso aprire %s in lettura. \n", inName);   //se il file non può essere aperto restituisce NULL

        return 1;       //restituiamo 1 perchè si è verificato un errore (il file non può essere aperto)
    }


    if( ( out = fopen(outName, "w") ) == NULL ){    //"w" = aprire il file in scrittura (write)

        printf("Non poso aprire %s in scrittura.\n", outName);

        return 2;       //restituiamo 2 indicando un errore specifico nell'apertura del file di output
    }



    //Copia il file

    /*  getc(in) legge 1 singolo carattere alla volta dal file in e lo assegna alla
    variabile c

        il ciclo finisce quando getc restituisce EOF (un valore specifico che indica la FINE del file)
     */

    while( ( c = getc(in) ) != EOF ){   //questo ciclo legge il contenuto del file di input 1 carattere alla volta
        putc(c, out);       //scrive ogni carattere letto dal file di input (in) nel file di output (out)
    }   /* la funzione putc prende 2 argomenti:
                            - c     -->     il carattere c da scrivere
                            - out   -->     il puntatore out che indica il file di destinazione
 */

    //Chiude i file aperti

    fclose(in);         //chiudiamo il file in
    fclose(out);        //chiudiamo il file out

    printf("Il file è stato copiato.\n");

    return 0;
}






