/*
4) O Governo do Distrito Federal abriu uma linha de cr�dito para os funcion�rios do
governo do DF. O valor m�ximo da presta��o n�o poder� ultrapassar 30% do sal�rio
bruto. Escreva um algoritmo que leia o sal�rio bruto e o valor da presta��o e informe
se o empr�stimo pode ou n�o ser concedido.

*/

#include<stdio.h>
#include<conio.h>

main(){
       float sal_bruto, prestacao;
       
       printf("\n Salario e valor da pretavao: ");
       scanf("%f%f", &sal_bruto, &prestacao);
       
       if(prestacao <= sal_bruto*0.3)
                   printf("\n O emprestimo foi concedido");
       
       else
                   printf("\n O emprestimo nao foi concedido");
                   
       getch();
}
