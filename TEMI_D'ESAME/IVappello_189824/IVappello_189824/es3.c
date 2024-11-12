/*
 

 
 Si vuole gestire, con un programma C, una classe di studenti tramite un vettore di dimensione variabile di record, dove i record hanno la seguente struttura:

 struct elem {

     char *nome;

     int eta;

 };

 Il programma legge il nome e l'età di ogni studente tramite la funzione leggi(). Completare tale funzione in modo che prenda come parametro il numero di studenti da inserire e che restituisca l’indirizzo del vettore leggendo da tastiera i nomi (non piu` lunghi di 10 caratteri) e l’età degli studenti. Gestire eventuali errori nella fase di allocazione (dinamica) di memoria, restituendo NULL in caso di errori, l’indirizzo del vettore in caso di successo.

 NON modificare il resto del programma.

 Una volta inseriti il nome e l'età degli studenti (3 in totale nel codice), il programma stamperà la lista degli studenti inseriti.

 Ad esempio, con il seguente input:

 Nome: Mario
 Eta’: 23
 Nome: Giuseppe
 Eta’: 22
 Nome: Carlo
 Eta’: 22

 il programma stamperà:

 *************
 Nome: Mario                eta’:  23
 Nome: Giuseppe          eta’:  22
 Nome: Carlo                 eta’:  22






 */

/**#include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #define N_STUD 3

 struct elem {
     char *nome;
     int eta;
     
 };

 int string_length(char s[]);

 struct elem * leggi(int n)
 {
   struct elem *p;
   char app[21];
   int i;
   p = (struct elem *) malloc(n*sizeof(struct elem));
   if (p == NULL) return NULL;
   for (i = 0; i < n; ++i)
     {
      printf("Nome: ");
      scanf("%10s", app);
      printf("Eta': ");
      scanf("%d", &(p[i].eta));
      p[i].nome = (char *)malloc(string_length(app)+1);
      if (p[i].nome == NULL) return NULL;
      strcpy(p[i].nome, app);
 } return p;
 }


 int main () /* programma principale di test, non richiesto dal compito */
 {
   struct elem *p;
   int i;
   p = leggi(N_STUD);
   printf("*************\n");
   for (i = 0;i < N_STUD;++i)
    printf("Nome: %-20s eta': %3d\n", p[i].nome, p[i].eta);
 }



 int string_length(char s[]){
     int counter=0;
     while (s[counter] != '\0')
         counter++;

     return counter;
 };
