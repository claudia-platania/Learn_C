//Conversioni di tipo in C

#include <stdio.h>

int main (void){

    float f1 = 123.125, f2;
    int i1, i2 = -150;
    char c = 'a';


    i1 = f1;    //Conversione da virgola mobile a intero
    printf("%f assegnato a un valore intero produce %i\n", f1, i1);

    f1 = i2;    //Conversione da intero a virgola mobile
    printf("%i assegnato a un valore in virgola mobile produce %f\n", i2, f1);

    f1 = i2 / 100;  //Un intero diviso per un intero
    printf("%i diviso 100 produce %f\n", i2, f1);

    f2 = i2 / 100.0;    //Un intero diviso per un numero in virgola mobile
    printf("%i diviso 100.0 produce %f\n", i2, f2);

    f2 = ( float ) i2 / 100;    //Operatore cast
    printf("( float ) %i diviso 100 produce %f\n", i2, f2);


    return 0;

}


/* 

1. ( 1 linea dell'Output )

Ogni volta che un valore in virgola mobile viene assegnato
a una variabile intera, la parte decimale viene troncata.

Pertanto, quando il valore di f1 viene assegnato a i1,
il numero 123.125 viene troncato --> soltanto la sua parte
                                    intera ( 123 ) viene
                                    memorizzata in i1



2. ( 2 linea dell'Output )

Se una variabile intera viene assegnata a una variabile
in virgola mobile, NON si ha alcuna modifica del valore
del numero

IL valore viene semplicemente convertito e memorizzato
nella variabile in virgola modile.

La seconda linea dell'output del programma mostra che
il valore di i2 ( -150 ) è stato correttamente
convertito e memorizzato nella variabile f1.



3 ( 3 linea dell'Output )

Riguarda l'aritmetica degli interi, di cui
si è detto in precedenza.

Quando due operandi in un'espressione sono interi, l'operazione
viene svolta con le regole dell'aritmetica degli interi.

Di conseguenza ì, la parte decimale risultante da una divisione
viene scartatamì, anche se il risultato viene assegnato a una
variabile in virgola mobile.

Pertanto, quando la variabile intera i2 viene divisa per la
costante intera 100, il sistema esegue la divisione come
una divisione tra interi.

Il risultato della divisione tra -150 e 100, cioè -1, è
quindi il valore memorizzato nella variabile f1.



4. ( 4 linea dell'Output )

La divisione riguarda una variabile intera e una costante
in virgola mobile.

Qualsiasi operazione tra due valori in C, viene svolta come
un'operazione in virgola  mobile se uno dei valori è una
variabile o una costante in virgola mobile

Pertanto, quando il valore di i2 è diviso per 100.0, il
sistema tratta la divisione come una divisione in
virgola mobile e produce il risultato di -1.5 che viene
assegnato alla variabile f1.



5. ( 5 linea dell'Output )  _   L'operatore Cast

L'ultima divisione del programma:

 f2 = ( float ) i2 / 100;       //introduce l'operatore cast

 OPERATORE CAST:
    
    Questo operatore ha l'effetto di convertire il valore
    della variabile i2 nel tipo float soltanto per valutare
    l'espressione, senza alterarlo.

    È un operatore unario che si comporta come gli altri
    operatori unari.

    Come l'espressione -a  non ha un effetto permanente
    sul valore di a, così neanche l'espressione ( float ) a
    ha un effetto permanente.


es:
( int ) 29.55 + ( int ) 21.99   -->     29 + 21
    ( es operatore cast )              ( in C )


( float ) 6 / ( float ) 4   -->    ( float ) 6 / 4  -->  6 / 4 = 1.5


 */












