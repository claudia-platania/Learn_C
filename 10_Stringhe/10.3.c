//Concatenare le stringhe di carattere

#include <stdio.h>

int main (void){

    void concat (char result[], const char str1[], const char str2[]);

    const char s1[] = { "TEST " };

    const char s2[] = { "Works." };

    char s3[20];            //quando passo s3 dentro alla funzione come result --> gli sto passando l'indirizzo --> modifico s3 stesso


//sto chiamando l'utilizzo della funzione concat con i valori di:   result = s3 = s1 + s2       str1 = s1       str2 = s2

    concat (s3, s1, s2);    //metto dentro s3 sia s1 che s2  



    printf("%s\n", s3);      //stampo s3 dopo che la funzione mi restituisce il valore modificato     -->      è il risultato della concatenazione ( unione ) di s1 ed s2
                            //questo perchè il main da l'indirizzo del valore alla funzione e vice versa ( perchè usiamo gli array )
                            //modifichiamo il valore originale ( NON  una copia )
                            
                            // %s   =   si usa per le stringhe ( array di caratteri ) --> char[ ] che terminano con \0
    
    return 0;
}





void concat (char result[], const char str1[], const char str2[]){

    int i, j;


    //copia str1  in result

    for( i = 0; str1[i] != '\0'; ++i ){

        result[i] = str1[i];            //il 1 valore che inserisco in result
    }


    //copia str2 in result

    for( j = 0; str2[j] != '\0'; ++j ){

        result[i + j] = str2[j];        //il 2 valore che inserisco in result   -->     subito dopo str1
                                                                                    //quindi la sua posizione rispetto a result sarà sciftata
                                                                                    //perchè le prime posizioni sono occupete da str1
    }


    //termina la stringa concatenata con un carattere nullo

    result[i + j] = '\0';        //così sappia che dopo che concateno le due stringhe la mia stringa risultato finisce
}






