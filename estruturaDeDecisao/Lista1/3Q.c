
/*
3.Escreva um programa que verifique se um ano inserido pelo usu�rio � bissexto ou n�o. Sabe-se 
que o ano bissexto � aquele que � m�ltiplo de 4, exceto os m�ltiplos de 100 que n�o sejam 
m�ltiplos de 400. Por exemplo: 1996, 2004, 2008, 2012, 1600, 2000 e 2400 (s�o bissextos); 1700, 1800, 
1900 e 2100 (n�o s�o bissextos).
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
