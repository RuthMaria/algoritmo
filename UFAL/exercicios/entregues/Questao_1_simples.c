/* 1. Fa�a um algoritmo que leia 2 valores e mostre as quatro opera��es matem�ticas b�sicas entre estes 2 n�meros.*/

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
