/*Seja uma estrutura para descrever os livros de uma loja, contendo os seguintes campos:
título: string de tamanho 15
autor: string de tamanho 20
estilo: string de tamanho 10
código: inteiro
float: real

a)Escrever a definiçaõ da estrutura livro; com o seguinte trecho de programa:

  //declaração de variváeis
    struct de vetlivro[50];
    char ch;
    int numlivros=0;

 //definição de menu:
   I- para incluir um livro.
   L- para listar o nome de todos os livros.
   A- para procurar livro por autor.
   T- para procurar livro por título.
   E- para procurar livro por estilo.
   M- para calcular a média de preço de todos os livros.
   S- para sair //


b) Escrever a definição DOS BLOCOS pa atender o menu:
                                                        */
#include<string.h>          
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void linha(){   // função linha
    int i;
    printf("\t");
    for(i = 0;i<50;i++){
        printf("%c",205);
    }
    printf("\n");
}

char menu(){   // função do menu
     int opcao;
     
     system("cls");
     system("cls");
     printf("\n\n\t\t\t\t BIBLIOTECA \n\n\n");
     printf("I - para incluir um livros.\n");
     printf("L - para listar o nome de todos os livros.\n");
     printf("A - para procurar livro por autor.\n");
     printf("T - para procurar livro por título.\n");
     printf("E - para procurar livro por estilo.\n");
     printf("M - para calcular a média de preço de todos os livros.\n");
     printf("S - para sair.\n");
     printf("\n Opcao: ");
     fflush(stdin);
     scanf("%c", &opcao);
        
     system("cls");
     
     return opcao;
}

typedef struct {        // typedef  para não ficar escrevendo o struct
       char titulo[15];
       char autor[20];
       char estilo[10];
       int codigo;
       float preco;       
}Livro;

Livro livros[5];  // vetor do tipo da estrutura

float soma = 0;  // variável global para somar todos os preços dos livros cadastrados para o calculo da média

int adicionar(){
      int i = 0;
      char op;

      system("cls");
      linha();
      printf("\n\t\t\t ADICIONAR LIVRO \n\n");
      linha();

      printf("\nDeseja adicionar: s/sim n/nao");
      printf("\n\n\t\t Opcao:");
      fflush(stdin);
      scanf("%c",&op);

      system("cls"); // limpa a tela

      system("cls");
      printf("\n\t\t\t\t ADICIONAR LIVRO \n\n");


      while(op != 'n' || op == 'N'){    /* vai adicionando os livros enquanto a opção for diferente de 'n', ou seja, enquanto o 
                                          usuário quiser cadastrar mais livros*/
            if(op == 's' || op == 'S'){
                  printf("\n Titulo:");
                  fflush(stdin);
                  gets(livros[i].titulo);  // para ler uma string usa-se o gets ao invés do scanf pq o gets pegar os espaços e o scanf não

                  printf("\n Autor: ");
                  fflush(stdin);
                  gets(livros[i].autor);

                  printf("\n Estilo: ");
                  fflush(stdin);
                  gets(livros[i].estilo);

                  printf("\n Codigo do livro: ");
                  scanf("%d",&livros[i].codigo);

                  printf("\n Preco: ");
                  scanf("%f",&livros[i].preco);
                  
                  soma+=livros[i].preco;
                  printf("soma: %.2f", soma);

                  printf("\n Livro %s cadastrado com sucesso \n", livros[i].autor);
                  i++;

                  getch();
                  system("cls");
                  printf("\n\t\t ADICIONAR LIVRO \n\n");

                  printf("\n\nDeseja adicionar outro: s/sim n/nao");
                  printf("\n\n\t\topcao:");
                  fflush(stdin);
                  scanf("%c",&op);
                  
                  system("cls");
                  printf("\n\t\t ADICIONAR LIVRO \n\n");


            }
            else{    // esse else é se o usuário digitar a opção diferente de 's' ou 'n'
                 printf("Opcão invalida digite S ou N\n");
                 fflush(stdin);
                 scanf("%c", &op);
            }
      };

      return i;  // retorna a quantidade de livros cadastrados
}
  
void visualizar(Livro livros[], int i){   // recebe como parametro o vetor do tipo da estrutura e a quantidade de livros cadastrados
     int j;

     system("cls");
     linha();
     printf("\n\t\t\t VISUALIZACAO DOS LIVROS \n\n");
     linha();

     for(j = 0; j < i; j++){   // imprime todos os dados cadastrados no vetor do tipo da estrutura
          printf("\n\n Titulo: %s", livros[j].titulo);
          printf("\n Autor: %s", livros[j].autor);
          printf("\n Estilo: %s", livros[j].estilo);
          printf("\n Codigo do livro: %d", livros[j].codigo);
          printf("\n Preco: %.2f", livros[j].preco);
     }
     getch();
}

void consulta_autor(Livro livros[], int i){  
             int j, cont;
             char autor2[20];
         
              system("cls");
                          
              printf("\n\n");
              linha();
              printf("\n\t\t\tPROCURAR POR AUTOR\n\n");
              linha();
                                                       
               printf("\tNome do autor: ");
               fflush(stdin);
               gets(autor2);
                                               
               for(j = 0; j < i; j++){
                    if(strcmp(livros[j].autor, autor2 )== 0){  /* a função strcmp compara duas strings, neste caso ela está comparando 
                                                                  se o autor que o usuário digitou é igual ao que está cadastrado*/
                         printf("\n\n Titulo: %s", livros[j].titulo);
                         printf("\n Autor: %s", livros[j].autor);
                         printf("\n Estilo: %s", livros[j].estilo);
                         printf("\n Codigo do livro: %d", livros[j].codigo);
                         printf("\n Preco: %.2f", livros[j].preco);
                         cont = 1;
                    }           
               }
               
               if(cont == 0)
                         printf("\ nLivro nao esta na lista \n\n");
               
               getch();       
}          

void consulta_titulo(Livro livros[], int i){ 

             int j, cont;
             char titulo2[20];
         
              system("cls");
                          
              printf("\n\n");
              linha();
              printf("\n\t\t\tPROCURAR POR TITULO\n\n");
              linha();
              
               printf("\tNome do titulo: ");
               fflush(stdin);
               gets(titulo2);
                                               
               for(j = 0; j < i; j++){
                    if(strcmp(livros[j].titulo, titulo2 ) == 0){
                         printf("\n\n Titulo: %s", livros[j].titulo);
                         printf("\n Autor: %s", livros[j].autor);
                         printf("\n Estilo: %s", livros[j].estilo);
                         printf("\n Codigo do livro: %d", livros[j].codigo);
                         printf("\n Preco: %.2f", livros[j].preco);
                         cont = 1;
                    }           
               }
               
               if(cont == 0)
                         printf("\ nLivro nao esta na lista \n\n");
              
              getch();
      
}       

void consulta_estilo(Livro livros[], int i){  

             int j, cont;
             char estilo2[20];
         
              system("cls");
                          
              printf("\n\n");
              linha();
              printf("\n\t\t\tPROCURAR POR ESTILO\n\n");
              linha();
                                                      
               printf("\tNome do titulo: ");
               fflush(stdin);
               gets(estilo2);
                                               
               for(j = 0; j < i; j++){
                    if(strcmp(livros[j].estilo, estilo2 ) == 0){
                         printf("\n\n Titulo: %s", livros[j].titulo);
                         printf("\n Autor: %s", livros[j].autor);
                         printf("\n Estilo: %s", livros[j].estilo);
                         printf("\n Codigo do livro: %d", livros[j].codigo);
                         printf("\n Preco: %.2f", livros[j].preco);
                         cont = 1;
                    }           
               }
               
               if(cont == 0)
                         printf("\ nLivro nao esta na lista \n\n");
               
               getch();
      
}               

void media(int i){
        system("cls");
                          
        printf("\n\n");
        linha();
        printf("\n\t\t\t MEDIA DE PRECO \n\n");
        linha();
        printf("\n Media: %.2f\n\n", soma/i);  // está dividindo a soma de todos os preços cadastrados pela quantidade de livros cadastrados
        
        getch();
}             
 main(){
       
      char opcao;
      int i = 0;   
       
       do{
            
          opcao = menu();  
           
          switch(opcao){
                  case 'I':
                       i = adicionar(); // a variável i recebe a quantidade de livros cadastrados
                       break;

                  case 'L':
                       visualizar(livros, i); // envia como parametro o vetor do tipo da estrutura e a quantidade de livros cadastrados
                       break;
                       
                  case 'A':
                       consulta_autor(livros, i);
                       break;
                       
                  case 'T':
                       consulta_titulo(livros, i);
                       break;
                  
                  case 'E':
                       consulta_estilo(livros, i);
                       break;
                       
                  case 'M':
                       media(i);
                       break;
                       
                  case 'S':
                      exit(1);                      
                                         
                  default:
                         printf("\n\n Opcao invalida \n\n");
                         break;         
                         
                                                       
            }           
         } while(opcao != 'S' || opcao != 's');
        getch();
}



