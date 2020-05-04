/*3- Seja uma estrutura contendo dados dos funcionários de uma empresa. Para cada
funcionário tem-se os seguintes dados:
            
nome: string de tamanho 20
CPF: vetor de 11 inteiros
numpeças: inteiro
salário: real
Implemente funções para cadastro, consulta e atualização e exclusão de funcionários.*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define TAM 3

 struct funcionarios{
        char nome [20];
        int cpf[13];
        int numpecas;
        float salario;
 };
 void cadastrar(){
      struct funcionarios func;
      int i,j;
      
      for (i=0;i<TAM;i++){
      fflush(stdin);
      printf("Digite o nome do funcionario:");
      gets(func.nome);
      fflush(stdin);
      printf("Digite o cpf:");
      for(i=0;i<13;i++){
       scanf("%d", &func.cpf[j]);
      }
      printf("digite o numero de peças:");
      scanf("%d", &func.numpecas);
      printf("digite o salario:");
      scanf("%f", &func.salario);
      }
}
void atualizar(){
      struct funcionarios func;
      int i,j;     
}

int menu(){
    
      int escolha;
      printf("1.cadastro");
      printf("2.atualizar");
      printf("3.consulta");
      scanf("%d", &escolha);
      return escolha;
      }
main(){
       int opcao;
       
       opcao = menu();
       
       if (opcao==1)
       cadastrar();
       
       getchar();
       }
       
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
