//Verificare l'uguaglianza di due stringhe di caratteri

#include <stdio.h>
#include <stdbool.h>

bool equalStrings (const char s1[], const char s2[]){

    int i = 0;
    bool areEqual;

    while( s1[i] == s2[i]   &&    s1[i] != '\0'   &&    s2[i] != '\0' ){

        ++i;
    }

    if( s1[i] == '\0'    &&      s2[i] == '\0' ){

        areEqual = true;        //1

    } else {
        areEqual = false;       //0
    }

    return areEqual;        //ritorna o True(1) o False(0)

}



int main (void){

    bool equalStrings (const char s1[], const char s2[]);

    const char str1[] = "string compare test";
    const char str2[] = "string";
    
    printf("%i\n", equalStrings (str1, str2));      //  str1 e str2
    printf("%i\n", equalStrings (str1, str1));      //  str1
    printf("%i\n", equalStrings (str2, str2));      //  str2

    


    return 0;

}


