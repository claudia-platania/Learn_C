//Programma per aggiornare l'orario di 1s

#include <stdio.h>

struct time{

    int hour;
    int minutes;
    int seconds;

};


int main (void){

    struct time timeUpdate(struct time  now);
    struct time currentTime, nextTime;

    printf("Digita l'orario ( hh : mm : ss ): ");
    scanf("%i : %i : %i", &currentTime.hour, &currentTime.minutes, &currentTime.seconds );

    nextTime = timeUpdate( currentTime );           //nella funzione dopo   currentTime = now

    printf("L'orario aggiornato è: %.2i : %.2i : %.2i\n", nextTime.hour, nextTime.minutes, nextTime.seconds);

    return 0;
}



//Funzione per aggiornare l'orario di 1s

struct time timeUpdate(struct time  now){               //now ha il valore di currentTime ( che gli viene dato dla main )

    ++now.seconds;      //iniziamo incrememntando di 1s e poi verifichiamo se il numero di secondi ha raggiunto 60

    if( now.seconds == 60 ){        //se i secondi sono 60
        now.seconds = 0;
        ++now.minutes;              //minuto successivo --> incrementiamo i minuti
    
    
        if( now.minutes == 60 ){    //se i secondi arrivano a 60 e se i minuti arrivano a 60
            now.minutes = 0;
            ++now.hour;             //ora successiva --> incremento le ore
        
        
            if( now.hour == 24 ){   //se le ore diventano 24
                now.hour = 0;       //si raggiunge la mezzanotte --> 00 : 00 : 00
            }
        }
    
    }

    return now;

}




