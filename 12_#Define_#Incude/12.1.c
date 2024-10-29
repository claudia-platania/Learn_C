//Utilizzare la direttiva #define

#include <stdio.h>

// #define viene utilizztao per assegnare nomi simbolici alle costanti del programma

#define YES 1       //definiamo il nome YES = 1     -->     ogni volta che utilizziamo YES il compilatore lo sostituisce con 1
#define NO 0


//Funzione per determinare se un intero è PARI

int isEven( int number ){

    int answer;

    if( number % 2 == 0 ){
        answer = YES;               // answer = 1       -->     True
    
    } else {
        answer = NO;                // answer = 0       -->     False
    }

    return answer;
}



int main (void){

    int isEvent( int number );

    if( isEven(17) == YES ){        // isEven(17) == 1      -->     isEven(17) == True
        printf("yes ");

    } else {
        printf("no ");
    }


    if( isEven(20) == YES ){
        printf("yes \n");
    
    } else {
        printf("no \n");
    }

    return 0;
}



