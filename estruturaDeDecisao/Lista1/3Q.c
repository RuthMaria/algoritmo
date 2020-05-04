
/*
3.Escreva um programa que verifique se um ano inserido pelo usuário é bissexto ou não. Sabe-se 
que o ano bissexto é aquele que é múltiplo de 4, exceto os múltiplos de 100 que não sejam 
múltiplos de 400. Por exemplo: 1996, 2004, 2008, 2012, 1600, 2000 e 2400 (são bissextos); 1700, 1800, 
1900 e 2100 (não são bissextos).
*/



#include<stdio.h>
#include<stdlib.h>

main(){
       int ano;
       
       printf("\n Ano: ");
       scanf("%d", &ano);
       
       if(ano%4 == 0 && ano%100 != 0 || ano%400 == 0)
                   printf("\n O ano eh bissexto");
                   
       else
                   printf("\n o ano nao eh bissexto");
                   
       getch();
}
