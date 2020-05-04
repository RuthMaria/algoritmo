/*
7. Faça um programa que receba uma string e converta os caracteres maiúsculos para minúsculo e
vice-versa. Por exemplo, a palavra CaSa, ficaria cAsA.
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

main(){
       char palavra[20];
       int i;
       
       printf("\n Palavra: ");
       gets(palavra);
       
       for(i = 0; i < strlen(palavra); i++){
           if(palavra[i] >= 'a' && palavra[i] <= 'z')
                    palavra[i] = palavra[i]-32;
                    
           else
                    palavra[i] = palavra[i]+32;
        }
        
        printf("\n Conversao: %s", palavra);
        getch();
        }                           
