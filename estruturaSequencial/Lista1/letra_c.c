/*
c. Receba o peso de uma pessoa em quilos e mostre o equivalente em gramas
*/

#include<stdio.h>
#include<conio.h>

main(){
       float peso, gramas;
       
       printf("\n Peso em kg: ");
       scanf("%f", &peso);
       
       gramas = peso*1000;
       
       printf("\n Peso em gramas: %.2fg", gramas);
       
       getch();
}
