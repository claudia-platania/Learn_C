#include <stdio.h>
#define LINE_LIM 81

/** Definizione funzioni **/
/* ISALPHABET FUNCTION */
int isalphabet(char c){
    if ((c >= 'A' && c<= 'Z') || (c >= 'a' && c<= 'z'))
        return 1;
    else
        return 0;
}

/* PRINTFILE FUNCTION */
void printfile(FILE* this, FILE* that){
    char ch;
    int char_count = 0;
    while ((ch = fgetc(this)) != EOF) {
        fputc(ch, that);
        char_count++;
        if (char_count >= 81) {
            fputc('\n', that);
            char_count = 0;
        }
    }
}

/** MAIN PROGRAM **/
int main(void) {
    char choice;
    int counter = 0;
    
    FILE *f = fopen("testo_24062024.txt", "r");
    
    if (f == NULL){
        fprintf(stdout, "** Errore apertura del file! **\n");
        return -1;
    }
    
    fprintf(stdout, "Il testo salvato nel file è:\n");
    printfile(f, stdout);
    
    // Rewind the file pointer to the beginning of the file
    rewind(f);
    
    fprintf(stdout, "Vuoi contare i caratteri alfabetici (a) o non alfabetici (carattere qualsiasi)?\n");
    fscanf(stdin, " %c", &choice);
    
    while (!feof(f)){
        if (choice == 'a')
            counter += isalphabet(fgetc(f));
        else
            counter += (1 - isalphabet(fgetc(f)));
    }
    
    fprintf(stdout, "\nIl testo contiene %d caratteri %s.\n", counter, (choice == 'a') ? "alfabetici" : "non alfabetici");
    
    fclose(f);
    
    return 0;
}
