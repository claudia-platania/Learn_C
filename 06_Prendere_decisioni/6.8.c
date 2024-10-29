/* Programma per vautare semplici espressioni della forma
numero operatore numero */

#include <stdio.h>

int main (void){

    float value1, value2;
    char operator;

    printf("Digita l'espressione: \n");
    scanf("%f %c %f", &value1, &operator, &value2);     // numero   carattere   numero

    switch( operator ){

        case '+':
            printf("%.2f\n", value1 + value2);
            break;
        
        case '-':
            printf("%.2f\n", value1 - value2);
            break;

        case '/':
            if ( value2 == 0){
                printf("Divisione pe 0.\n");
            } else {
                printf("%.2f\n", value1 / value2);
            }
            break;
        
        case '*':
            printf("%.2f\n", value1 * value2);
            break;
        
        default:
            printf ("Operatore sconosicuto.\n");
            break;
    }

    return 0;

}












