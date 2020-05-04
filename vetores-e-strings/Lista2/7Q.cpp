#include<stdio.h>
#include<conio.h>
#include<string.h>

main(){
       char palavra[20];
       int i;
       printf("\n Digite uma palavra\n");
       gets(palavra);
       
       for(i = 0; i<strlen(palavra); i++){
           if(palavra[i] >= 'a' && palavra[i] <= 'z')
              palavra[i]-= 32;
              
           else
              palavra[i]+= 32;
        }
        
        printf("Palavra com os caracteres maiusculo e minusculo trocados: %s",palavra);
        getch();
        }                           
