/*
d. Receba o valor do sal�rio m�nimo e o valor do sal�rio de um funcion�rio, calcule e mostre a
quantidade de sal�rios m�nimos que este funcion�rio ganha.
*/

#include<stdio.h>
#include<conio.h>

main(){
       float sal_min, sal_func;
       int quant;
       
       printf("\n valor do salario minimo: ");
       scanf("%f", &sal_min);
       
       printf("\n Seu salario: ");
       scanf("%f", &sal_func);
       
       quant = sal_func/sal_min;
       
       printf("\n Quantidade de salarios minimos: %d", quant);
             
       
       getch();
}
