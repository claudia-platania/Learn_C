//dictionary.c
#include <stdio.h>
#define MAX 20
#define MAX_DEF 100

struct entry {
    char word[MAX];
    char definition[MAX_DEF];
};

int lookup_binaria(char key[], struct entry dictionary[], int length);


int main(void) {

    struct entry dictionary[] = {
        {"automobile", "Mezzo di trasporto su gomma."},
        {"cane", "Animale che abbaia spesso."},
        {"cattedra", "Tavolo di lavoro universitario."},
        {"computer", "Strumento dfi calcolo automatico."},
        {"gatto", "Animale peloso e miagolante."},
        {"lavagna", "Supporto per la scrittura a parete."},
        {"studente", "Persona che dovrebbe studiare molto."}
    };
    
    char key[MAX];
    int posizione;
    
    printf("Inserire la chiave da ricercare: ");
    scanf("%s", key);
    
    posizione = lookup_binaria(key, dictionary, 7);
    if(posizione >= 0){
        printf("La definizione di \"%s\" è la seguente: \"%s\"\n",
               key,
               dictionary[posizione].definition
               );
    }
    else
        printf("La stringa inserita non esiste nel dizionario\n");
  return 0;
}


int compare_strings(char s1[], char s2[]){
    int pos=0;
    while (s1[pos] == s2[pos] && s1[pos])
        pos++;
    
    return s1[pos] - s2[pos]; //se <0, s1!= s2 e s1 viene prima di s2
    //se >0 s1!=s2 e s1 viene dopo di s2
    //se ==0 s1==s2
};




int lookup_binaria(char key[], struct entry dictionary[], int length){
    int left=0, right = length-1, middle, comp;
    
    while(left <= right){
        middle = (left+right)/2;
        
        comp = compare_strings(key, dictionary[middle].word);
        
        if(comp == 0)
            return middle;
        else if(comp < 0)
            right = middle - 1;
        else
            left = middle + 1;
    };
    return -1; //non c'e'!
};
