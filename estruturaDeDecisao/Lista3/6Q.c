/*
6) Escreva um algoritmo que receba dois números, e apresente o quadrado do menor
número e a raiz quadrada do maior número se possível.
*/

#include<stdio.h>
#include<conio.h>

main(){
       int num1,num2, r, p;
       
       printf("\n Numeros: ");
       scanf("%d%d", &num1, &num2);
       
       if(num1 > num2){
              p = pow(num1, 2);
              r =  sqrt(num2);
              printf("\n Quadrado do numero: %d", p);
              printf("\n Raiz Quadrada: %d", r);
       }
              
       else{
              p = pow(num1, 2);
              r =  sqrt(num2);
              printf("\n Quadrado do numero: %d", p);
              printf("\n Raiz Quadrada: %d", r);
       }
       
       getch();
}
