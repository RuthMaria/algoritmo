/*
g.Entrar com o salário de uma pessoa e imprimir o desconto do INSS segundo a tabela abaixo:
- menor ou igual a R$ 600,00 - isento
- maior que R$ 600,00 e menor ou igual a R$ 1200,00 - 20%
- maior que R$ 1200,00 e menor ou igual a R$2000,00 - 25%
- maior que R$ 2000,00 - 30%
*/

main(){
       float salario;
       
       printf("\n Salario: ");
       scanf("%f", &salario);
       
       if(salario <= 600)
                 printf("\n Isento de desconto do INSS\n");
                 
       if(salario > 600 && salario <= 1200)
                      printf("\n Desconto do INSS: %.2f", salario*0.2);
                      
       if(salario > 1200 && salario <= 2000)
                      printf("\n Desconto do INSS: %.2f", salario*0.25);
                      
       if(salario > 2000)
                      printf("\n Desconto do INSS: %.2f", salario*0.3);
                      
       getch();
}
