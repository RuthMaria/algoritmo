/* 1. Faça um algoritmo que leia 2 valores e mostre as quatro operações matemáticas básicas entre estes 2 números.*/

#include<stdio.h>
#include<conio.h>

main(){
       float num1, num2;
    
       printf("\n digite os 2 numeros  \n");
       scanf("%f%f", &num1, &num2);
       
       printf("\n A soma eh %.2f", num1+num2);
                       
       printf("\n A subtracao eh %.2f", num1-num2);
                       
       printf("\n A multiplicacao eh %.2f", num1*num2);
                       
       printf("\n A divisao eh %.2f", num1/num2);
                       
       
       getch();                        
                        
}
