/*
e. Receba o n�mero de horas trabalhadas, o valor do sal�rio m�nimo e o n�mero de horas
extras trabalhadas, calcule e mostre o sal�rio a receber, seguindo as regras abaixo:
i. A hora trabalhada vale 1/8 do sal�rio m�nimo;
ii. A hora extra vale � do sal�rio m�nimo;
iii. O sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado pelo valor da
hora trabalhada.
iv. A quantia a receber pelas horas extras equivale ao n�mero de horas trabalhadas
multiplicado pelo valor da hora extra
v. O sal�rio a receber equivale ao sal�rio bruto mais a quantia a receber pelas horas
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
