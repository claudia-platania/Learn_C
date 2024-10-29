//Programma per visualizzare il numero di giorni di un mese

#include <stdio.h>

int main (void){

    //definizione nuovo tipo di dati enumerati  -->     un insieme finito a cui associ ad una stringa un numeor intero

    enum month { january = 1, february, march, april,       //il compilatore assegna ai nomi una serie di valori interi a partire da 1
                may, june, july, august, septemeber,        // --> ( se non fosse splicitato partirebbe da 0 )    
                october, november, december };

    enum month  aMonth;     //aMonth è una varibile di tipo "enum month"    -->     può prendere solo i valori dichiaratii dentro enum

    int days;


    printf("Digita il numero del mese: ");
    scanf("%u", &aMonth);                 // %u   -->     lo metto perchè gli enum sono Unsigned
    

    switch (aMonth){        // aMonth è la condizione che controllo -->     confronto il valore dentro aMOnth con i case

        case january:       //jenuary è un numero perchè dentro "enbum month"   -->     1   -->     controllo se il numero inserito dall'utente è 1
        case march:
        case may:
        case july:
        case august:
        case october:
        case december:

            days = 31;
            break;

        case april:
        case june:
        case septemeber:
        case november:

            days = 30;
            break;

        case february:
            
            days = 28;
            break;
        
        default:
            printf("Numero errato \n");
            days = 0;
            break;

    }


    if( days != 0 ){
        printf("Numero di giorni = %i\n", days);
    }

    if( aMonth == february ){
        printf(".... o 29 se l'anno è bisestile\n");
    }

    return 0;
}





