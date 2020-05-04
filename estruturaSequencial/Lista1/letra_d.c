/*
d. Receba o valor do salário mínimo e o valor do salário de um funcionário, calcule e mostre a
quantidade de salários mínimos que este funcionário ganha.
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
