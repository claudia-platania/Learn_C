//Altro esempio sui puntatori

#include <stdio.h>

int main (void){

    int i1, i2;
    int *p1, *p2;       //Puntatori

    i1 = 5;
    p1 = &i1;       //il puntatore p1 punta a i1    -->     p1 ora varà il valore contneuto in i1 ( 5 )

    i2 = *p1 / 2 + 10;      // 5 / 2 + 10 = 2 + 10 = 12     -->     i2 = 12
    p2 = p1;        //uguaglio i due putnatori  -->     p2 ora punta a p1 e quindi legge / acquisisce i valori dentro a p1 ( 5 )


    printf(" i1 = %i,      i2 = %i,\n*p1 = %i,    *p2 = %i\n", i1, i2, *p1, *p2);

    return 0;
}










