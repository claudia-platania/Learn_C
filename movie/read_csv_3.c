//Programma per leggere tutto il file 1 RIGA alla volta
//Butta fuori un film per volta

//FUNZIONE

#include <stdio.h>

enum tipo_colonna {Titolo = 0 , Genere , Lead_Studio , Audience_score , Profitability , Rotten_Tomatoes ,	Worldwide_Gross	, Year };

void nome_colonna ( int colonna );      //Prototipo

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


    while( ( c = getc(in) ) != EOF ){

        if( c == ',' ){

            colonna++;

            nome_colonna ( colonna );

        } else if ( c == '\n' ){
        
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




void nome_colonna ( int num_colonna ){

    printf("\n");


    switch( num_colonna ){
        case Titolo : printf("Titolo: "); break;
        case Genere : printf("Genere: "); break;
        case Lead_Studio: printf("Lead Studio: "); break;
        case Audience_score: printf("Audience score %%: "); break;
        case Profitability: printf("Profitability: "); break;
        case Rotten_Tomatoes: printf("Rotten Tomatoes %%: "); break;
        case Worldwide_Gross: printf("Worldwide Gross: "); break;
        case Year: printf("Year: "); break;
    }    

}

