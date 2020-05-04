/*Seja uma estrutura para descrever os carros de uma determinada revendedora, contendo
os seguintes campos:
marca: string de tamanho 15
ano: inteiro
cor: string de tamanho 10
preço: real
(a) Escrever a definição da estrutura carro.
(b) Declarar o vetor vetcarros do tipo da estrutura definida acima, de tamanho 20.
(c) Definir uma função para ler o vetor vetcarros.
(d) Definir uma função que receba um preço e imprima os carros (marca, cor e ano)
que tenham preço igual ou menor ao preço recebido.
(e) Defina uma função que leia a marca de um carro e imprima as informações de
todos os carros dessa marca (preço, ano e cor).
(f) Defina uma função que leia uma marca, ano e cor e informe se existe ou não um
carro com essas características. Se existir, informar o preço.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define tam 2

//(a) Escrever a definição da estrutura carro.
typedef struct carro{
      char marca[15];
      int ano;
      char cor[10];
      float preco;
} Carro;


//(b) Declarar o vetor vetcarros do tipo da estrutura definida acima, de tamanho 20.
Carro c [tam];

//(c) Definir uma função para ler o vetor vetcarros.
void inserir_carros (){
     int i;

     system("cls");

     printf("\n\n\t\t\t CADASTAR CARROS");

     for(i = 0; i<tam; i++){
         printf("\n\n Marca: ");
         fflush(stdin);
         gets(c[i].marca);

         printf("\n Ano: ");
         fflush(stdin);
         scanf("%d", &c[i].ano);

         printf("\n Cor: ");
         fflush(stdin);
         gets(c[i].cor);

         printf("\n Preco: ");
         fflush(stdin);
         scanf("%f", &c[i].preco);
     }
}

void imprimir_carros(){
      int i;

      system("cls");
      printf("\n\n\t\t\t CARROS CADASTRADOS");

      for(i = 0; i<tam; i++){
         printf("\n\n Marca: %s", c[i].marca);

         printf("\n Ano: %d", c[i].ano);

         printf("\n Cor: %s", c[i].cor);

         printf("\n Preco: %.2f\n\n", c[i].preco);
      }
      system("pause");
}

//(d) Definir uma função que receba um preço e imprima os carros (marca, cor e ano) que tenham preço igual ou menor ao preço recebido.

void verificar_preco(float preco, Carro c[]){
    int i;

    for(i = 0; i<tam; i++){
        if(preco <= c[i].preco){
            printf("\n Marca: %s", c[i].marca);
            fflush(stdin);
            printf("\n Ano: %d", c[i].ano);
            fflush(stdin);
            printf("\n Cor: %s\n\n", c[i].cor);
        }
    }

    system("pause");
}

//(e) Defina uma função que leia a marca de um carro e imprima as informações de todos os carros dessa marca (preço, ano e cor).

void verificar_marca(char marca[15], Carro c[]){
    int i;
    for(i = 0; i<tam; i++){
        if(strcmp(c[i].marca, marca) == 0){
            printf("\n Preco: %.2f", c[i].preco);
            fflush(stdin);
            printf("\n Ano: %d", c[i].ano);
            fflush(stdin);
            printf("\n Cor: %s\n\n", c[i].cor);
        }
    }

    system("pause");
}

//f) Defina uma função que leia uma marca, ano e cor e informe se existe ou não um carro com essas características. Se existir, informar o preço.

void verificar_modelo(char marca[15], int ano, char cor[10], Carro c[]){
    int i;
    for(i = 0; i<tam; i++){
        printf("\n Preco do carro com essas caracteristicas \n");
        if(strcmp(c[i].marca, marca) == 0 && c[i].ano == ano && strcmp(c[i].cor, cor) == 0)
            printf("\n Preco: %.2f\n\n", c[i].preco);
    }

    system("pause");
}

main(){
       int opcao, ano;
       float preco;
       char marca[15], cor[10];

       do{
           system("cls");
           printf("\n\n\t\t\t REVENDEDORA DE CARROS\n\n");
           printf("1. Cadastrar \n");
           printf("2. Visualizar \n");
           printf("3. Carros com preco menor que o recebido \n");
           printf("4. Carros com marca igual ao recebido \n");
           printf("5. Verificar modelo \n");
           printf("");

           printf("\n Opcao: ");
           scanf("%d", &opcao);

           switch(opcao){
               case 1:
                    inserir_carros();
                    break;

               case 2:
                   imprimir_carros();
                   break;

               case 3:
                    system("cls");
                    printf("\n\n\t\t\t VERIFICAR PRECO\n");
                    printf("\nPreco para verificacao: ");
                    scanf("%f", &preco);
                    verificar_preco(preco, c);
                    break;

               case 4:
                    system("cls");
                    printf("\n\n\t\t\t VERIFICAR MARCA\n");
                    printf("\nMarca para verificacao: ");
                    fflush(stdin);
                    gets(marca);
                    verificar_marca(marca, c);
                    break;

              case 5:
                    system("cls");
                    printf("\n\n\t\t\t VERIFICAR MODELO\n");
                    printf("\n\n Marca: ");
                    fflush(stdin);
                    gets(marca);

                    printf("\n Ano: ");
                    fflush(stdin);
                    scanf("%d", &ano);

                    printf("\n Cor: ");
                    fflush(stdin);
                    gets(cor);

                    verificar_modelo(marca, ano, cor, c);
                    break;

             case 6:
                   exit(1);

             default:
                   printf("\n\n Opcao invalida \n");
                   break;

           }
       }while(opcao != 6);

       getch();
}
