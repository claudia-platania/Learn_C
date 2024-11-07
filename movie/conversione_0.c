//devo trovare un modo per travasarie una struct dentro un'altra struct
//devo mettere "struct film_text" dentro "struct film"


//TESTO --> NUMERI


#include <stdio.h>

struct film_text{        //definisco il "progetto"

    char Titolo[64];
    char Genere[64];
    char Lead_Studio[64];
    char Audience_score[4];     // uso "char" perchè noi dobbiamo aquisire Caratteri dal file (in)  -->     il file è costituito da caratteri
    char Profidability[64];
    char Rotten_Tomatoes[4];
    char Worldwide_Gross[64];
    char Year[5];                // 2004     +   \0  (carattere fine stringa)

};


struct film{        //definisco il "progetto"

    char Titolo[64];
    char Genere[64];
    char Lead_Studio[64];
    int Audience_score;     // uso "char" perchè noi dobbiamo aquisire Caratteri dal file (in)  -->     il file è costituito da caratteri
    float Profidability;
    int Rotten_Tomatoes;
    float Worldwide_Gross;
    int Year;                // 2004     +   \0  (carattere fine stringa)

};



//Funzione per stampare un movie_text

void print_movie_text ( struct film_text text ){     //riceve : "struct film current_movie" dal main


    printf("Titolo: %s\n", text.Titolo);
    printf("Genere: %s\n", text.Genere);
    printf("Lead Studio: %s\n", text.Lead_Studio);
    printf("Audience score %%: %s\n", text.Audience_score);
    printf("Profitability: %s\n", text.Profidability);
    printf("Rotten Tomatoes %%: %s\n", text.Rotten_Tomatoes);
    printf("Worldwide Gross: %s\n", text.Worldwide_Gross);
    printf("Year: %s\n", text.Year);

}    



//TO DO : void porint_movie     --> che stampi la seconda struct

void print_movie ( struct film movie ){     //riceve : "struct film current_movie" dal main


    printf("Titolo: %s\n", movie.Titolo);
    printf("Genere: %s\n", movie.Genere);
    printf("Lead Studio: %s\n", movie.Lead_Studio);
    printf("Audience score %%: %i\n", movie.Audience_score);
    printf("Profitability: %f\n", movie.Profidability);
    printf("Rotten Tomatoes %%: %i\n", movie.Rotten_Tomatoes);
    printf("Worldwide Gross: $ %.2f\n", movie.Worldwide_Gross);
    printf("Year: %i\n", movie.Year);

}    


int strToInt( char text[]  );
double strToFloat( char text_float[] );


void converti_movie(struct film_text *input, struct film *output);
void converti_int(struct film_text *sorgente, struct film *destinazione);
void converti_float(struct film_text *input, struct film *output);


int main (void){


    struct film_text input = { "Tangled","Animation","Disney","88","1.365692308","89","$355.01","2010" };       //inizializzazione

    struct film output;

    printf("Input\n");
    print_movie_text(input);
    printf("\n");



    converti_movie(&input, &output);


    printf("Output\n");
    print_movie(output);


    return 0;
}


void converti_movie(struct film_text *input, struct film *output){

    converti_int(input, output);
    converti_float(input, output);
}

void converti_float(struct film_text *input, struct film *output)
{
    output -> Profidability = strToFloat(input ->  Profidability);
    output -> Worldwide_Gross = strToFloat(input -> Worldwide_Gross);
}



void converti_int(struct film_text *sorgente, struct film *destinazione)
{
    destinazione->Audience_score = strToInt(sorgente->Audience_score);
    destinazione->Rotten_Tomatoes = strToInt(sorgente->Rotten_Tomatoes);
    destinazione->Year = strToInt(sorgente->Year);
}

 /* 
    destinazione->Profidability = strToInt(sorgente->Profidability);

    destinazione->Worldwide_Gross = strToInt(sorgente->Worldwide_Gross);
 */


int strToInt( char text[] ){

    int i;
    int intValue;
    int output = 0;

    for( i = 0; text[i] >= '0' && text[i] <= '9'; ++i ){

        intValue = text[i] - '0';
        output = output * 10 + intValue;
    }

    return output;
}



double strToFloat( char text_float[] ){

    int output = 0;
    int segno = 1;      // 1 = true     o = false
    int i = 0;
    int isDecimal = 0;
    double fraction = 0.1;
    double fractionalPart = 0;

    printf("\n");
    while (text_float[i] != '\0') {
        char c = text_float[i];
        if ( c == '-' || c == '.' || ( c >= '0'  &&  c <= '9' ) ){      //se non uno di questi saltiamo

            if( c == '-' ){
                segno = -1;     //sto invertendo il segno
            
            } else if (c == '.') {
                isDecimal = 1;         
                
            } else{

                int cifra = c - '0';     // c - '0'  -->  -48 (codice ascii dello 0 --> così ottengo il valore del numero)

                if( isDecimal == 0 ){       // isDecimal = false    -->     siamo prima del punto 
                    
                    output = (output * 10) + cifra;     //cifra = lavoriamo la cifra vera e proprio già converita da stringa a numero (stringa-->numero)
                
                } else {            // isDecimal = true     -->     siamo dopo il punto ora
                    //output += c;
                    //printf("loool %f\n", (cifra * fraction));
                    fractionalPart = fractionalPart + (cifra * fraction);

                    fraction = fraction * 0.1;
                }
            }
        }
        
        i++;        //così passiamo al prossimo carattere
    }
    return (output + fractionalPart) * segno;
}
