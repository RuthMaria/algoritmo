/*
5) Escreva um algoritmo que leia um n�mero e informe se ele est� compreendido entre 20 e 90 inclusive.
Caso contr�rio apresente a mensagem: "o n�mero informado est� fora da faixa 20 e 90".
*/

#include<stdio.h>
#include<conio.h>

main(){
       int num;
       
       printf("\n numero: ");
       scanf("%d", &num);
       
       if(num > 20 && num < 90)
                     printf("\n o numero informado esta na faixa 20 e 90");
                     
       else
                     printf("\n o numero informado esta fora da faixa 20 e 90");
           
       getch();
}
