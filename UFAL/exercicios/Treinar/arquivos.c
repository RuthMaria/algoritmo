
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main (){
     FILE *meu_arquivo; // cria um ponteiro da estrutura FILE definida em stdio
     
     meu_arquivo = fopen("numeros.txt", "rt"); // rt = ler arquivo texto, at = criar arquivo texto, wt = gravar arquivo texto
     int i, lido;
     
     while (fscanf(meu_arquivo, "%d", &lido) != EOF){  // EOF é uma constrant definida em stdio seu valor é NULL
         //fprintf(meu_arquivo, "%d\n", i); // para imprimir dentro do arquivo
         printf("%d\n", lido); // imprimir no prompt   
     }
     printf ("%d\n", EOF);
     getch();
     
}
