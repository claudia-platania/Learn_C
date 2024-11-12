/* ISi completi il programma C in modo che:

    legga uno dei file di testo a disposizione (testo_24_06_2024_1.txt, o testo_24_06_2024_2.txt);
    conti le parole all'interno del file aperto;
    modifichi tutte le vocali minuscole in maiuscole;
    stampi il risultato su standard output - andando a capo ogni 81 caratteri stampati da un file all'altro.

Precisazione: non è ammesso l'utilizzo delle funzioni printf() e scanf(), né della libreria ctype.h.

Nota: Estratto tabella ASCII
Dec	Glifo	Dec	Glifo
65	A	97	a
66	B	98	b
67	C	99	c
68	D	100	d
...	...	...	...

 */



#include <stdio.h>
#define LINE_LIM 81

/** Definizione funzioni **/
/* COUNTWORDS FUNCTION */
int countWords(FILE *in){
    int count = 0;
    char ch;
    while ((ch = fgetc(in)) != EOF){
        if (ch == ' ') {count++;}
    }
    return count;   
}

/* ISLOWVOWEL FUNCTION */
int islowvowel(char in){
    return (in == 'a' || in == 'e' || in == 'i' || in == 'o' || in == 'u');
}

/* CHANGETEXT FUNCTION */
void changeText(FILE *this, FILE *that) {
    char ch;
    int char_count = 0;
    while ((ch = fgetc(this)) != EOF) {
        if (islowvowel(ch)) {
            fputc(ch-32, that);
        } else {
            fputc(ch, that);
        }
        char_count++;
        if (char_count >= LINE_LIM) {
            fputc('\n', that);
            char_count = 0;
        }
    }
}

/** MAIN PROGRAM **/
int main(void) {
    const char *textfiles[] = {"testo_24062024_1.txt", "testo_24062024_2.txt"};     //array di stringhe
    int choice = 0;
    
    do{
        fprintf(stdout, "Quale file vuoi aprire?\n");
        fprintf(stdout, "\t- [1] %s\n", textfiles[0]);
        fprintf(stdout, "\t- [2] %s\n", textfiles[1]);
        fscanf(stdin, "%i", &choice);
    } while ( ! (choice == 1 || choice == 2) );
    
    FILE *f = fopen(textfiles[choice-1], "r");      // "r" = read   -->     aprire il file [choice-1] in lettura
    //quando apro un file ho sempre la FOPEN( NOME_FILE o percorso_file, "r"/"w" )
    
    if (f == NULL){
        fprintf(stdout, "** Errore apertura del file! **\n");
        return -1;
    }
    
    fprintf(stdout, "\nIl testo contiene %i parole.\n", countWords(f));
    
    // Rewind the file pointer to the beginning of the file
    rewind(f);
    
    fprintf(stdout, "\nIl testo modificato e':\n");
    changeText(f, stdout);
    
    fclose(f);
    
    return 0;
}
