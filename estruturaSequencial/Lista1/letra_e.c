/*
e. Receba o número de horas trabalhadas, o valor do salário mínimo e o número de horas
extras trabalhadas, calcule e mostre o salário a receber, seguindo as regras abaixo:
i. A hora trabalhada vale 1/8 do salário mínimo;
ii. A hora extra vale ¼ do salário mínimo;
iii. O salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da
hora trabalhada.
iv. A quantia a receber pelas horas extras equivale ao número de horas trabalhadas
multiplicado pelo valor da hora extra
v. O salário a receber equivale ao salário bruto mais a quantia a receber pelas horas
extras.
*/

#include<stdio.h>
#include<conio.h>

main(){
       int h_trab,num_hora, h_extras;
       float sal_min, sal_bruto, quant_receber, sal_receber;
       
       printf("\n Horas trabalhadas, salario minimo e horas extras:  ");
       scanf("%d%f%d", &num_hora, &sal_min, &h_extras);
       
       h_trab = (sal_min*1)/8;
       h_extras = (sal_min*1)/4;
       
       sal_bruto = num_hora*h_trab;
       quant_receber = num_hora*h_extras;
       
       sal_receber = sal_bruto+quant_receber;
       
       printf("\n\n Slario a receber: R$ %.2f", sal_receber);
       
       getch();
}
