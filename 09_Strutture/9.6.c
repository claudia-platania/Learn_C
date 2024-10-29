//Programma per illustrare gli array di strutture

#include <stdio.h>


struct time {

    int hour;
    int minutes;
    int seconds;
};



int main (void){

    struct time timeUpdate(struct time  now);

    struct time testTimes[5] = {
        { 11, 59, 59 }, { 12, 0, 0 }, { 1, 29, 59 },
        { 23, 59, 59 }, { 19, 12, 27 }
    };


    int i;

    for( i = 0; i < 5; ++i ){

        printf("Orario = %.2i : %.2i : %.2i", testTimes[i].hour, testTimes[i].minutes, testTimes[i].seconds);

        testTimes[i] = timeUpdate(testTimes[i]);

        printf(".... un secondo dopo = %.2i : %.2i : %.2i\n", testTimes[i].hour, testTimes[i].minutes, testTimes[i].seconds);
    }

    return 0;
}



struct time timeUpdate(struct time  now){

    ++now.seconds;      //parto incrementando di 1s e poi controllo

    if( now.seconds == 60 ){    //se i secondi sono 60 allora...

        now.seconds = 0;        // i secondi scattano a 00 e...
        ++now.minutes;          //incremento di 1 minuto


        if( now.minutes == 60 ){    //se anche i minuti sono 60 allora...
            now.minutes = 0;        //i minuti scattano a 00 e...
            ++now.hour;             //incremento di 1 le ore
        

            if( now.hour == 24 ) {  //inoltre, se anche le ore sono 24 allora...
                now.hour = 0;       //le ore scattano a 00 : 00 : 00
            }
               
        }
    }

    return now;
}




