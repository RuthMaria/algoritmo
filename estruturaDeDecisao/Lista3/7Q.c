/*
7) Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o valor da compra for 
menor que R$ 50.00, caso contrário, o lucro será de R$ 30,00. Escreva um algoritmo que leia o 
valor de compra do produto e apresente o valor de venda.
*/

#include<stdio.h>
#include<conio.h>

main(){
       float valor_compra;
       
       printf("\n valor da compra: ");
       scanf("%f", &valor_compra);
       
       if(valor_compra < 50)
                 printf("\n valor de venda: %.2f", valor_compra+(valor_compra*0.45));
                 
       else
                 printf("\n valor de venda: %.2f", valor_compra+30);
                 
       getch();
}
