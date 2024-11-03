/* Il programma prende un numero, esegue alcuni calcoli
su di esso e ne visualizza il risultato */

#include <stdio.h>

main(){

    float d = 6.5;
    float half, square, cube;

    half = d / 2;
    square = d * d;
    cube = d * d * d;


    printf("\nIl numero è: %.2f\n", d);

    printf("La sua metà è: %.2f\n", half),
    printf("Il suo quadrato è: %.2f\n", square);
    printf("Il suo cubo è: %.2f\n", cube);

    
    return 0;
}



/* 

gcc 14.1.c
./a.out > "nome del file"

    --> l'output viene rediretto in un file txt

 */