//Funzione per concatenare due stringhe di caratteri
//Concatenare = unirle una dopo l'altra

#include <stdio.h>


void concat ( char result[], const char str1[], int n1, const char str2[], int n2 ) {

    int i, j;


    //copia str1 in result

    for( i = 0; i < n1; ++i ){
        result[i] = str1[i];
    }


    //copia str2 in result

    for( j = 0; j < n2; ++j ){
        result[n1 + j] = str2[j];       //usiamo n1 + j     -->     nel primo ciclo abbiamo già riempito con str1 e quindi devo riempire dalla posizione dopo
    }

}



int main (void){

    void concat ( char result[], const char str1[], int n1, const char str2[], int n2 );

    const char s1[5] = { 'T', 'e', 's', 't', ' ' };

    const char s2[6] = { 'W', 'o', 'r', 'k', 's', '.' };

    char s3[11];        //contiene sia s1 che s2    -->     5 + 6 = 11

    int i;


    concat( s3, s1, 5, s2, 6 );

    for( i = 0; i < 11; ++i ){
        printf("%c", s3[i]);
    }


    printf("\n");


    return 0;
}





