#include<string.h>
#include<stdio.h>
#include<conio.h>
main(){
       char nome[20],sobrenome[20],completo[40];
       printf("digite o nome \n");
       
       fflush(stdin);
       gets(nome);
       printf("digite o sobrenome\n");
       fflush(stdin);
       gets(sobrenome);
       
       strcpy(completo,nome);
       strcat(completo," ");
       strcat(completo,sobrenome);
      
       printf("%s",completo);
       
       getch();
       }
       
