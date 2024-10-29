//Convertire un intero in un'altra base ( Architettura )

#include <stdio.h>

int main (void){

    const char baseDigits[16] = {                   //Const     -->     costate, non posso modificarla ( se no chupa )
        '0', '1', '2', '3', '4', '5', '6', '7',
        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

    int convertedNumber[64];
    long int numberToConvert;   //Long --> 
    int nextDigit, base, index = 0;

    //aquisisci il numero e la base

    printf("Numero da convertire?");
    scanf("%ld", &numberToConvert);     //%ld   -->     Long_Double     -->     per avere più precisione

    printf("Base?");
    scanf("%i", &base);

    //convertire il numero nella base specificata

    do{

        convertedNumber[index] = numberToConvert % base;
        ++index;
        numberToConvert = numberToConvert / base;

    } while ( numberToConvert != 0 );


    //visualizza il risultato in ordine inverso

    printf("Numero convertito = ");

    for( --index; index >= 0; --index ){

        nextDigit = convertedNumber[index];
        printf("%c", baseDigits[nextDigit]);
    }

    printf("\n");

    return 0;

}



