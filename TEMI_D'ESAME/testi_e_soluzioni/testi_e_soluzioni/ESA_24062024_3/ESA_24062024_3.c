#include <stdlib.h>
#include <stdio.h>

struct entry {
    int value;
    struct entry * next;
};

struct entry *construct_list();
void list_print(struct entry *this);
int list_length(struct entry *this);
int list_equal(struct entry *this, struct entry *that);


int main(void) {
    printf("Inserisci i valori della prima lista: ");
    struct entry * l1 = (struct entry *)construct_list();
    printf("Inserisci i valori della seconda lista: ");
    struct entry * l2 = (struct entry *)construct_list();
    printf("Ecco la lista 1: ");
    list_print(l1);
    printf("Ecco la lista 2: ");
    list_print(l2);
    printf("La lunghezza della lista 1 è : %i\n", list_length(l1));
    printf("La lunghezza della lista 2 è : %i\n", list_length(l2));
    printf("Le due liste %s sono uguali!\n", list_equal(l1, l2)? "" : "NON");
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



int list_length(struct entry *this){ //supporta liste vuote
    if (this == NULL)
        return 0;
    else
        return (1+list_length(this->next));
};



int list_equal(struct entry *this, struct entry *that){
    if(this == NULL && that != NULL) //passo base
        return 0; //false perche' diverse
    else if (this != NULL && that == NULL) //passo base
        return 0; //false perche' diverse
    else if (this == NULL && that == NULL) //passo base
        return 1; //true perche' uguali (vuote entrambe)
    else //adesso siamo sicuri che entramb non sono vuote- passo ricorsivo:
        return (this->value == that-> value && list_equal(this->next, that->next));
};
