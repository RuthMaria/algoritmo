/*3- Seja uma estrutura contendo dados dos funcion�rios de uma empresa. Para cada
funcion�rio tem-se os seguintes dados:
            
nome: string de tamanho 20
CPF: vetor de 11 inteiros
numpe�as: inteiro
sal�rio: real
Implemente fun��es para cadastro, consulta e atualiza��o e exclus�o de funcion�rios.*/


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
      printf("digite o numero de pe�as:");
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
       
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
