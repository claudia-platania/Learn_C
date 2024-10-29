#include <stdio.h>

int main(void)
{

/* Siccome FOR( ) e WHILE( ) necessitano valori Booleani ( che restituiscano T o F )
se non specifichiamo, i cicli considereranno:
    - 0 --> False
    - != 0 --> True
    - '\0' --> False

    questo vuol dire che con i valori che restituiscono FALSE il ciclo FINISCE
    
 */

    if ( 0 ){

        printf("0 è Vero\n");
    } else{
        printf("0 è Falso\n");
    }


    if ( -1 ){

        printf("-1 è Vero\n");
    } else{
        printf("-1 è Falso\n");
    }


    if ( 5 ){

        printf("5 è Vero\n");
    } else{
        printf("5 è Falso\n");
    }


    if ( 'K' ){

        printf("'K' è Vero\n");
    } else{
        printf("'K' è Falso\n");
    }


    if ( '\0' ){

        printf("\\0 è Vero\n");
    } else{
        printf("\\0 è Falso\n");
    }


    return 0;
}
