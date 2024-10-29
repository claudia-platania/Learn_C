//Versione con i puntatori di copyString( )

#include <stdio.h>

void copyString (char *to, char *from){     //la funzione prende in ingresso 2 Puntatori a caratteri (char)

    for( ; *from != '\0'; ++from, ++to ){       //ciclo per Copiare la stringa puntata da From  -->     ad ongi giro incremento i puntatori di to e from
                                                //From punta al successivo carattere da far copiare     To punta alla posizionen nella stringa di destinazione (dove memorizzare)

        *to = *from;
    }                   //quando From punta al carattere nullo ( '\0' ) il ciclo termina    -->     significa che non ci sono più caratteri da copiare

    *to = '\0';     //la funzione poi inserisce il carattere nullo (si usa per chiudere una stringa) alla fine della stringa di destinazione (*to)
}



int main (void){

    void copyString (char *to, char *from);

    char string1[] = "A string to be copied";
    char string2[50];


    copyString (string2, string1);      //copiamo il contneuto di String1 (From) in String2 (To)
    printf("%s\n", string2);            // %s   -->     perchè una stringa  -->     stampa sino ad un '\0'


    copyString (string2, "So is this.");    //copiamo la stringa "So is this." (From) in String2 (To)   -->     posso passare anche una stringa direttamente
    printf("%s\n", string2);

    return 0;
}


