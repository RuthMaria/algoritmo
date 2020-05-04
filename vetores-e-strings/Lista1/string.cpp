#include<string.h>
#include<stdio.h>
#include<conio.h>

main(){
       char nome[20],sobrenome[20],completo[40];
       
       printf("\n Nome: ");       
       fflush(stdin);
       gets(nome);
       
       printf("\n Sobrenome: ");
       fflush(stdin);
       gets(sobrenome);
       
       strcpy(completo, nome);
       strcat(completo, " ");
       strcat(completo, sobrenome);
      
       printf("\n Nome Completo: %s", completo);
       
       getch();
       }
       
