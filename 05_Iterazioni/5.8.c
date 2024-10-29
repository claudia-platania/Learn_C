//Programma per invertire le cifre di un numero - WHILE

#include <stdio.h>

int main (void){

    int number, right_digit;
    
    printf("Digita il numero. \n");
    scanf("%i", &number);

    while ( number != 0 ){

        right_digit = number % 10;
        
        printf("%i", right_digit);

        number = number / 10;
    }

    printf("\n");

    return 0;
}






