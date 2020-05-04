/*
4. Escrever um algoritmo para ler a quantidade de horas aula dadas por dois
professores e o valor por hora recebido por cada um. Mostrar na tela qual dos
professores tem salário total maior.
*/

#include<stdio.h>
#include<stdlib.h>

main(){
       int h1, h2;
       float valor, maior, salario1, salario2;
       printf("\n Horas de aulas dadas do prof1 e do prof2 e o valor da hora \n");
       scanf("%d%d%f", &h1, &h2, &valor);
       
       salario1 = h1*valor;
       salario2 = h2*valor;
       
       if(salario1 > salario2)
                  printf("\n O maior salario e do prof1 R$ %.2f", salario1);
                  
       else
                  printf("\n O maior salario e do prof1 R$ %.2f", salario2);

       getch();
}
