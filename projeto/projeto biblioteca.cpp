#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int mes, dia, dataentrega,i,j,devolucao,f;
char livro,c;
struct locacao{                      //registro para o cadastro de clientes na biblioteca
       char livro[20];
       char nome[50];
       int  idade;
       char sexo;
       char endereco[200];
       int  login;
       };

struct cadastro{
       char nome[50];
       char endereco [100];
       char telefone [13];
       char cpf [14];
       char data_nascimento[10];
};
     
    
void cadastro_de_clientes(){
struct cadastro cadast;
printf("\t\t\tCadastro de clientes\n\n\n");
printf("nome:\n");
fflush(stdin);
gets(cadast.nome);
printf("data de nascimento\n");
gets(cadast.data_nascimento);
printf("Endereco:\n");
gets(cadast.endereco);
printf("Tel:\n\n");
gets(cadast.telefone);
printf("Digite seu CPF:\n");
gets(cadast.cpf);

printf("\t\t\tcliente cadastrado com sucesso\n");
};
     
main(){
  struct cadastro cadast;
  int menu, preferencia;
  
  printf("\t1- cadastro de clientes\n");
  printf("\t2- locacao de livros\n");
  printf("\t3- reserva de livros\n");
  printf("\t4- compra de livros\n");
  scanf("%d", &preferencia);
  system ("cls");         
  switch (preferencia){
          case 1 :
               
              cadastro_de_clientes ();
              
  break;
     
}

getch();

}
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
