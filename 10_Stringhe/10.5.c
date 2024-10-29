//Programma per illustrare il formato %s
//Leggere le stringhe con scanf( )

#include <stdio.h>

int main (void){

    char s1[81], s2[81], s3[81];

    printf("Enter text: \n");
    scanf("%s%s%s", s1, s2, s3);        //chiamata per leggere 3 stringhe di caratteri


    printf("\n s1 = %s\n s2 = %s\n s3 = %s\n", s1, s2, s3);

    return 0;

}



/* 

    %s  =   per stampare Stringhe di caratteri

 */

