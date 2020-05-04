/*-Armazenar um polinômio dinâmicamente, até grau e coeficienete ser igual a zero.
  -Somar os elementos.*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>
//Uma lista encadeada é uma sequência de células.
typedef struct lista{
        float  grau;
        float  coef;
        struct lista *prox;
}Lista;
/*Protótipo de funções:*/
Lista* inserir(Lista *first);
Lista* remover(Lista *first);
Lista* liberar(Lista *first);
int tamanho(Lista *first);
void imprimir(Lista *first);
void somar(Lista *first);
void menu();


//FUNÇÃO PRINCIPAL.
main()
{
      system("title Polinômio ___ Mayara Rysia");
      system("MODE con cols=100 lines=30");
      Lista *first=NULL;
      menu(first); 
      getch();
}
//Função menu.
void menu(Lista *first){
    
     int tam;
     int op;
     system("color 8f");
     do{ 
           system("cls");
           printf("\n  ________________________________________________________________________________________________");
           printf("\n\n\t\t\t\t\t MENU\n\t");
           printf("\n\n\n\n\t\t\tEscolha uma opcao: \n\t");
          
           printf(
                 "\n\n\t\t\t\t 1.Adicionar Polinomio \n\n\t\t\t\t "
                 "2.Visualizar Polinomio\n\n\t\t\t\t "
                 "3.Ver Tamanho \n\n\t\t\t\t 4.Remover Monomio\n\n\t\t\t\t "
                 "5.Resultado da Soma do Polinomio\n\n\t\t\t\t"
                 " 6.Liberar Conteudo\n\n\t\t\t\t"
                 " 7.Sair\n\n\t\t\t\t");
           printf("\n ________________________________________________________________________________________________");
           fflush(stdin);
           scanf("%d", &op);
           
          system("cls");
          switch(op){
                  
                  case 1:
                     
                        system("cls");
                        printf("\n\n\n\n\tMENU -> Adicionar Polinomio\n\t");
                        first=inserir(first);
                        break;
                  case 2:
                       
                       system("cls");
                       printf("\n\n\n\n\tMENU -> Vizualizar Polinomio\n\t");
                       imprimir(first);
                       getch();
                       break;
                  case 3:
                      
                       system("cls");
                       printf("\n\n\n\n\tMENU -> Ver Tamanho\n\t");
                       printf("\n\n\n\n\n\n\t\t-> %d\n\n\t", tam =tamanho(first));
                       getch();
                       break;
                  case 4:
                    
                       system("cls");
                       printf("\n\n\n\n\tMENU -> Remover Polinomio\n\t");
                       first=remover(first);
                       getch();
                       break;
                  case 5:
                    
                       system("cls");
                       printf("\n\n\n\n\tMENU -> Resultado da Soma do Polinomio\n\t");
                       somar(first);
                       getch();
                       break;
                  case 6:
                      
                       system("cls");
                       printf("\n\n\n\n\tMENU -> Liberar Conteudo\n\t");
                       first=liberar(first);
                       getch();
                       break;
                  case 7:
                      
                        system("cls");
                        printf("\n\n\n\n\tMENU -> Sair\n\t");
                        printf("\n\n\n\n\n\n\t\t\t\tObrigada!\n\t\t\t\t\t");
                        break;
                        
                  default:
                          
                          printf("\n\n\n\n\n\n\n\n\n\t\t\t\tOPCAO INCORRETA!\n\t");
                          getch();
                          
                          break;
          }
       }while(op>7 || op<7);
}//fim_menu
     
     
//Função de inserção da lista encadeada simples.
Lista* inserir(Lista *first){
        Lista *p;
        printf("\n\n\t\t->Para Fim de Insercao: \n\t\t\tcoeficiente e grau = 0\n\n\t\t\t\t");
        for(;;){
               p=(Lista*)malloc(sizeof(Lista));
               printf("\n\n\t\tDigite o coeficiente:\n\t\t\t");
               scanf("%f",&p->coef);
               printf("\n\n\t\tDigite o grau:\n\t\t\t");
               scanf("%f",&p->grau);
               //fim da inserção.
               if(p->coef==0.0 && p->grau==0.0)
                                 break; 
               p->prox=first;
               first=p;
               
      }//fim_for
      return first;
}//fim_inserir


//Função de impressão.
void imprimir(Lista *first){
     Lista *p;
     p=first;//recebe o último elemento que foi inserido.
     if(p==NULL)
          printf("\n\n\n\n\n\t\t\t-> A lista esta vazia!\n\n\n");
     else{
          printf("\n\n\t\t->Polinomio:");
          while(p!=NULL)
          {
                        printf("\n\n\t\t\t coeficiente: %.2f \n\n\t\t\t grau: %.2f\n\n", p->coef, p->grau);
                        p=p->prox;//vai recebendo o próximo.
          }
     }
}//fim_imprimir


//Função que soma os coeficientes da lista.
void somar(Lista *first){
      Lista *p;
      double soma=0;
      p=first;
      if(p==NULL)
          printf("\n\n\n\n\t\t\t-> A lista esta vazia!\n\n");
      else{
           printf("\n\n\t\t\t->Soma: ");
           while(p!=NULL)
           { 
             soma+=(pow(p->coef, p->grau));
             p=p->prox;//vai recebendo o próximo.
           }
           printf("%f\n\t\t\t\t", soma);
      }
      
}//fim_somar


//Função que remove um monômio do Polinômio
Lista* remover(Lista *first){
        Lista *p, *ant=NULL;
        float c, g; //coeficiente, grau.
        p=first;
       
        printf("\n\n\t\tDigite o coeficiente e o grau\n\n\t\tque voce deseja remover do polinomio:\n\n");
        scanf("%f %f", &c, &g);
        printf("\n\t\t\t\t");
        while((p!=NULL)){
                         //condição de saída:
                         if(p->coef==c && p->grau==g)
                                      break;
                         ant=p;
                         p=p->prox;
        }           

        if(p==NULL)
              printf("\n\n\t\t-> Elemento nao encontrado!\n\n\t\t\t\t");
      
        else{ 
            if(p==first){
                    first=p->prox;
                    free(p);
                    printf("\n\n\t\t\tCoeficiente %.2f e Grau %.2f Removido com Sucesso!\n", c, g);
            }            
            else{
                 ant->prox=p->prox;
                 free(p);
                 printf("\n\n\t\tCoeficiente %.2f e Grau %.2f Removido com Sucesso!\n", c, g);
            }
       }
       return first;
}//fim_remover


//Função que libera Polinômio.
Lista*liberar(Lista*first){
                       Lista *p;
                       int cont=0;
                      
                       for(;;){
                              p=first;
                              if(p!=NULL){
                                       cont=1;
                                       first=first->prox;
                                       free(p);
                              }
                              if(p==NULL)
                                       break;
                       }//fim_for
                       if(cont==1)
                             printf("\n\n\t\t-> Polinomio Removido com Sucesso!\n\n");
                       else
                             printf("\n\n\n\n\t\t\t->A lista ja esta vazia!\n\n\n");
                          
                       
                       return first;
}//fim_liberar


//Função que verifica tamanho do Polinômio.
int tamanho(Lista *first){
    Lista *p;
    int cont=0;
    while(first!=NULL){
                   cont++;
                   first=first->prox;
    }
    return cont;
}//fim_tamanho
