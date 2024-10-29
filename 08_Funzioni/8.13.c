//Programma per convertire un intero positivo in un'altra base

#include <stdio.h>

//Variabili Globali

int convertedNumber[64];
long int numberToConvert;       //numeri molto grandi
int base;
int i = 0;


void getNumberAndBase (void){

    printf("NUmero da convertire? ");
    scanf("%li", &numberToConvert);

    printf("Base? ");
    scanf("%i", &base);

    if( base < 2 || base > 16 ){        // || = o
        printf("Base errata - deve essere compresa tra 2 e 16\n");
        base = 10;      //viene dato un valore di defaull a base --> evita che crasci male
    }
}


void convertNumber (void){

    do{
        convertedNumber[i] = numberToConvert % base;
        ++i;
        numberToConvert /= base;
    } while ( numberToConvert != 0 );
}


void displayConvertedNUmber (void){

    const char baseDigits[16] = {
        '0', '1', '2', '3', '4', '5', '6', '7',
        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'
    };

    int nextDigit;

    printf("Numero convertito = ");

    for( --i; i >= 0; --i ){
        nextDigit = convertedNumber[i];
        printf("%c", baseDigits[nextDigit]);
    }

    printf("\n");
}


int main (void){

    void getNumberAndBase (void);
    void convertNumber (void);
    void displayConvertedNUmber (void);


    //sto dicendo al mio programma di andare ed eseguire queste funzioni in questo ordine

    getNumberAndBase( );
    convertNumber( );
    displayConvertedNUmber( );

    return 0;
}

