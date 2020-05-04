/*
9) Escreva um algoritmo que leia três números e apresente-os em ordem crescente.
*/


#include<stdio.h>
#include<conio.h>

main(){
       int num1, num2, num3, maior, menor, medio;
       
       printf("\n Numeros: ");
       scanf("%d%d%d", &num1, &num2, &num3);
       
       maior = num1;
       if(maior > num2)
                maior = num2;
       
       if(maior > num3)
                maior = num3;
                
       menor = num1;
       if(menor < num2)
                menor = num2;
       
       if(menor < num3)
                menor = num3;
                
       medio = num1;
       if(maior == num1 || maior == num2 && menor == num1 || menor == num2 || menor == num3)
                           medio = num3;
                           
       if(maior == num3 && (menor == num3 || menor == num1 || menor == num2))
                           medio = num2;
     
       printf("\n Ordem Crescente: %d %d %d", maior, medio, menor);
                        
       getch();
}
