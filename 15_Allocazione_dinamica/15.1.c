//Programma per copiare un file in un altro -- Versione 2
//Utilizzando gli argomenti della riga di comando

#include <stdio.h>

int main (int argc, char *argv[]){  
/* "int argc" indica il bumero di argomenti passati da linea di comando
    se si esegue il programma "./a.out copy.txt here.txt" allora argc = 3 */

/* "char *argv[]"" è un array di stringhe ccge contiene i singoli argomenti
            - argv[0] = è sempre il nome del programma
            - argv[1] = sarà il file 1 (copy.txt)
            - argv[2] = sarà il file 2 (here.txt) */

    FILE *in, *out;     //Dichiarazione     --> puntatori ad oggetti di tipo FILE --> serviranno per aprire i file di input(in) ed output(out)
    int c;      //variabile per memorizzare ciascun carattere letto dal file prima di scriverlo in quello di output


    if( argc != 3 ){    //argc = indica il numero di argomenti passati da linea di comando      -->     /a.out copy.txt here.txt" allora argc = 3

        fprintf(stderr, "Servono due nomi di file\n");

        return 1;       //termina il programma con il codice di errore 1
    }


    //Apertura file di input (in)

    if( ( in = fopen(argv[1], "r") ) == NULL){      //se fopne non riesce ad aprire il file --> resituire NULL
    //in --> Inizializzazione   -->     in punta all'indirizzo del file 1 (argv[1])     -->  in = ...    

            /* fopen(argv[1], "r") :
                - argv[1] = aprire il primo file (copy.txt)
                - "r" = aprire il file in modalità lettura (read) */


        fprintf(stderr, "Impossibile leggere %s.\n", argv[1]);

        return 2;   //se il file NON si apre, stampa un messaggio di errore e temirna il programma con il codice di errore 2
    }


    if( ( out = fopen(argv[2], "w") ) == NULL ){
        //out --> Inizializzazione  -->     out punta all'indirizzo del file 2 (argv[2])
            
            /* fopen(argv[2], "w") :
                - argv[2] = aprire il secondo file (here.txt)
                - "w" = aprire il file in modalità scrittura (write) */


        fprintf(stderr, "IMpossibile scrivere su %s.\n", argv[2]);

        return 3;   //se il file NON si apre, stampa un messaggio di errore e temrina il programma con il codice di errore 3
    }


while( ( c = getc(in) ) != EOF ){       //getc(in) = legge un carattere alla volta dal file "in" e lo assegna a c   (uso il puntatore al file --> guardare ciclo if di in)
        putc(c, out);       //putc(c, out) = scrivo un carattere alla volta nel file "out"       (uso il puntatore al file --> guardare ciclo if di out)
        //scrivo (c, ...) perchè così specifico che cosa scrivere dentro il file out
    }


    printf("Il file è stato copiato.\n");

    fclose(in);
    fclose(out);

    return 0;
}



/* 

gcc 15.1.c

./a.out copytxt here.txt

 */


//copiamo il file copy.txt nel file here.txt che viene creato apposta, se il file esisteva già veniva sovrascritto
