
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main (){
     FILE *meu_arquivo; // cria um ponteiro da estrutura FILE definida em stdio
     
     meu_arquivo = fopen("valores.bin", "wb"); // wb = gravar arquivo binario, ab =  adiciona no finalm do arquivo  
     int i, lido = 5;
     
     fwrite(&lido, sizeof(int), 1, meu_arquivo); // grava
     fread(&lido, sizeof(int), 1, meu_arquivo); // ler
     printf("%d\n", lido); 
     fclose(meu_arquivo);
      
    /* while (fscanf(meu_arquivo, "%d", &lido) != EOF){  // EOF é uma constrant definida em stdio seu valor é NULL
         //fprintf(meu_arquivo, "%d\n", i); // para imprimir dentro do arquivo
         printf("%d\n", lido); // imprimir no prompt   
     }*/
     getch();
     
}
