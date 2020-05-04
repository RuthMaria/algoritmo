/*
4) O Governo do Distrito Federal abriu uma linha de crédito para os funcionários do
governo do DF. O valor máximo da prestação não poderá ultrapassar 30% do salário
bruto. Escreva um algoritmo que leia o salário bruto e o valor da prestação e informe
se o empréstimo pode ou não ser concedido.

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
