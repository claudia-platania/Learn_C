//Programma per leggere tutto il file 1 RIGA alla volta
//Butta fuori un film per volta

#include <stdio.h>

int main (void){

    FILE *in;   //Dichiarazione     -->     puntatore di tipo FILE  -->     punterà al file in input (in)
    int c;      //varibaile per memorizzare ciascun carattere (1 alla volta)

    char movies_db[] = "movies.csv";        //..._db    = DataBase  -->     lo sriviamo per chiarezza

    int colonna = 0;    //numero della colonna nel file csv
    int riga = 0;      //numero di righe nel file csv


    //Aprire file di lettura "r"

    if( (in = fopen(movies_db, "r") ) == NULL ){

        printf("Non posso aprire il file in lettura \n");

        return 1;
    }



    //Legge il file dall'inizio alla fine e lo stampa nel terminale

// Film	    Genre	Lead Studio	    Audience    score %	    Profitability	Rotten Tomatoes %	Worldwide Gross	     Year



    while( ( c = getc(in) ) != EOF ){

        if( c == ',' ){

            colonna++;

            printf("\n");
/* 
            if( colonna == 1 ){
                printf("Genere: ");
            } else if( colonna == 2 ){
                printf("Lead Studio: ");
            } else if( colonna == 3 ){
                printf("Audience score %%: ");
            } else if( colonna == 4 ){
                printf("Profitability: ");
            } else if( colonna == 5 ){
                printf("Rotten Tomatoes %%: ");
            } else if( colonna == 6 ){
                printf("Worldwide Gross: ");
            } else if( colonna == 7 ){
                printf("Year: ");
            }
 */

            switch( colonna ){

                case 1: printf("Genere: "); break;
                case 2: printf("Lead Studio: "); break;
                case 3: printf("Audience score %%: "); break;
                case 4: printf("Profitability: "); break;
                case 5: printf("Rotten Tomatoes %%: "); break;
                case 6: printf("Worldwide Gross: "); break;
                case 7: printf("Year: "); break;
            }


            

        } else if ( c == '\n' ){
            exit(0);
            riga++;
            colonna = 0;
            printf("\n\nFilm %i: \nTitolo: ", riga);
        } else {
            printf("%c", c);
            }


    }

    printf("\n");

    fclose(in);

    return 0;
}









