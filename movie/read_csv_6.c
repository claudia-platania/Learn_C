//Programma per leggere tutto il file 1 RIGA alla volta
//Butta fuori un film per volta

//PUNTATORI

#include <stdio.h>

enum tipo_colonna {Titolo = 0 , Genere , Lead_Studio , Audience_score , Profitability , Rotten_Tomatoes ,	Worldwide_Gross	, Year };

struct film{        //definisco il "progetto"

    char Titolo[64];
    char Genere[64];
    char Lead_Studio[64];
    char Audience_score[4];     // uso "char" perchè noi dobbiamo aquisire Caratteri dal file (in)  -->     il file è costituito da caratteri
    char Profidability[64];
    char Rotten_Tomatoes[4];
    char Worldwide_Gross[64];
    char Year[5];                // 2004     +   \0  (carattere fine stringa)

};


void print_movie ( struct film movie );     //Prototipo


void riempimento_film ( struct film *current_movie, int carattere, int colonna, int posizione ) ;     //Prototipo




int main (void){

    FILE *in;   //Dichiarazione     -->     puntatore di tipo FILE  -->     punterà al file in input (in)
    int c;      //varibaile per memorizzare ciascun carattere (1 alla volta)

    char movies_db[] = "movies.csv";        //..._db    = DataBase  -->     lo sriviamo per chiarezza

    int colonna = 0;    //numero della colonna nel file csv
    int riga = 0;      //numero di righe nel file csv
    

    struct film current_movie;     //inizializzazione   -->     utilizzo il progetto per creare un qualocsa che si chiama "current_movie"
    //current_movie = nome della struct


    //Aprire file di lettura "r"

    if( (in = fopen(movies_db, "r") ) == NULL ){

        printf("Non posso aprire il file in lettura \n");

        return 1;
    }



    //Legge il file dall'inizio alla fine e lo stampa nel terminale

    int i = 0;      //tiene traccia della posizione all'intenro del singolo campo / genere

    while( ( c = getc(in) ) != EOF ){

        if( c == ',' ){
            riempimento_film ( &current_movie,  '\0',  colonna,  i );       //mettiamo '\0' per conscludere la stringa / colonna

            colonna++;
            i = 0;

        } else if ( c == '\n' ){
        
            riempimento_film ( &current_movie, '\0',  Year, i );        //Year --> va a prendere solo quella con Year
            //current_movie.Year[i] = '\0';       //lo scriviamo perche  DI DEFAULT ogni movies / riga termina con '\n
                                                // imponiamo lo '\0' perchè va alla fine di OGNI stringa

            riga++;
            i = 0;
            colonna = 0;
            
            //Togliere da QUA
            //print_movie(current_movie);     //chiamando la funzione inserendo come valore in ingresso "current_movie"

            printf("\n");
        } else {
        
            //printf("%c", c);    //il carattere che leggiamo e salviamo


            riempimento_film ( &current_movie,  c,  colonna,  i ) ;       //chiamata funzione con valori in ingresso
            
            i++;        //leggo il carartere    -->     lo salvo    -->     incremento il posto in cui salvare il rpossismo carattere
        
        }


    }

    //DEVO STAMPARE TUTTI I FILM FUORI DAL WILES

    


    printf("\n");

    fclose(in);

    return 0;
}




void print_movie ( struct film movie ){     //riceve : "struct film current_movie" dal main


    printf("Titolo: %s\n", movie.Titolo);
    printf("Genere: %s\n", movie.Genere);
    printf("Lead Studio: %s\n", movie.Lead_Studio);
    printf("Audience score %%: %s\n", movie.Audience_score);
    printf("Profitability: %s\n", movie.Profidability);
    printf("Rotten Tomatoes %%: %s\n", movie.Rotten_Tomatoes);
    printf("Worldwide Gross: %s\n", movie.Worldwide_Gross);
    printf("Year: %s\n", movie.Year);

}    




void riempimento_film ( struct film *current_movie, int carattere, int colonna, int posizione ) {

    switch( colonna ){      //uso "colonna" perchè devo scegliere in che parte della struct mettere il carattere
    // case "enum" : struct . attributo_struct (di interesse) [i] (posizione) = c (carattere da inserire in posizione i)
        case Titolo : current_movie -> Titolo[posizione] = carattere; break;
        case Genere : (*current_movie).Genere[posizione] = carattere; break;    
        case Lead_Studio: current_movie -> Lead_Studio[posizione] = carattere; break;           // uso la -> perc accedere agli attributi della struct con un PUNTATORE (current_movie)
        case Audience_score: current_movie -> Audience_score[posizione] = carattere; break;
        case Profitability: current_movie -> Profidability[posizione] = carattere; break;
        case Rotten_Tomatoes: current_movie -> Rotten_Tomatoes[posizione] = carattere; break;
        case Worldwide_Gross: current_movie -> Worldwide_Gross[posizione] = carattere; break;
        case Year: current_movie -> Year[posizione] = carattere; break;
    }  

}
