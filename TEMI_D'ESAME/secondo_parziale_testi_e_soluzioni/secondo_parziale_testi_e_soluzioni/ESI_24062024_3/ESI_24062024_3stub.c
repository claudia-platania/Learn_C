#include <stdlib.h>
#include <stdio.h>

struct entry {
    int value;
    struct entry * next;
};

struct entry *construct_list();
void list_print(struct entry *this);
int list_length(struct entry *this);
int list_min(struct entry *this);
int list_sum(struct entry *this);


int main(void) {
    struct entry * l = (struct entry *)construct_list();
    printf("Ecco la lista: ");
    list_print(l);
    printf("La lunghezza della lista è : %i\n",
           list_length(l));
    printf("Il minimo valore della lista è : %i\n",
           list_min(l));
    printf("La somma dei valori della lista è : %i\n",
           list_sum(l));
    return 0;
}


//Dichiarazione e definizione funzioni:
struct entry *construct_list(){
    int n1, n2, n3, n4;
    scanf("%i", &n1);
    scanf("%i", &n2);
    scanf("%i", &n3);
    scanf("%i", &n4);
    
    struct entry *pn1 = (struct entry*)malloc(sizeof(struct entry));
    struct entry *pn2 = (struct entry*)malloc(sizeof(struct entry));
    struct entry *pn3 = (struct entry*)malloc(sizeof(struct entry));
    struct entry *pn4 = (struct entry*)malloc(sizeof(struct entry));
    pn1->value = n1;
    pn2->value = n2;
    pn3->value = n3;
    pn4->value = n4;
    
    pn1->next = pn2;
    pn2->next = pn3;
    pn3->next = pn4;
    pn4->next = NULL;
    return pn1;
    
};

void list_print_aux(struct entry *this){
    if(this == NULL)
    {}
    else {
        printf("%i ", this->value);
        list_print_aux(this->next);
    };
};

void list_print(struct entry *this){ //supporta liste vuote
    printf("[");
    list_print_aux(this);
    printf("]\n");
};



int list_length(struct entry *this){
    /*
    completare in stile ricorsivo
    */
};

int list_min(struct entry *this){
    /*
    completare in stile ricorsivo
    */
};

int list_sum(struct entry *this){
    /*
    completare in stile ricorsivo
    */
};

