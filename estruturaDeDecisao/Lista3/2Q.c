/*
2) Escreva um algoritmo que leia um número e apresente a raiz quadrada do número
caso seja positivo e o quadrado do número caso ele seja negativo.
*/

#include<stdio.h>
#include<conio.h>

main(){
       int num, r;
       
       printf("\n Numero: ");
       scanf("%d", &num);
       
       if(num > 0){
              r =  sqrt(num);
              printf("\n Raiz Quadrada: %d", r);
       }
              
       else{
              r = pow(num, 2);
              printf("\n Quadrado do numero: %d", r);
       }
              
       getch();
}
