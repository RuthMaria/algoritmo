#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct cliente{
       int senha;
       char nome[20];
       char data[10];
       char hora[10];
       
       struct cliente *prox;
};

struct fila{
       struct cliente *inicio;  
       struct cliente *fim;
};

main(){
       system("color 2e");
       struct cliente *novocliente,*auxcliente;
       struct fila *fila;
       int cont=0, opc, i, opc1, p, k, quant;
       char data_chegada[10], hora_chegada[10];
       
       /*Inicializando fila:*/
       fila=(struct fila*)malloc(sizeof(struct fila));
       fila->inicio=NULL;
       fila->fim=NULL;
       
       for (p=0;p<2;p++){
           
            system ("cls");
            system ("color 0A");
            
            printf("\n\n\t\t-------------------------------------------------\n");
            printf("\n\n\t\t|\tBem vindo(a) ao Sistema Bancario !!\t|\n");
            printf("\n\n\t\t-------------------------------------------------\n\n\n");
            sleep (10);
            system ("cls");
            system ("color 09");
            printf("\n\n\t\t-------------------------------------------------\n");
            printf("\n\n\t\t|\tBem vindo(a) ao Sistema Bancario !!!\t|\n");
            printf("\t\t-------------------------------------------------\n\n\n");
            sleep (10);
            system ("cls");
            system ("color 0C");
            printf("\n\n\t\t-------------------------------------------------\n");
            printf("\n\n\t\t|\tBem vindo(a) ao Sistema Bancario !!!\t|\n");
            printf("\n\n\t\t-------------------------------------------------\n\n\n");
            sleep (10);
            system ("cls");
            system ("color 0D");
            printf("\n\n\t\t-------------------------------------------------\n");
            printf("\n\n\t\t|\tBem vindo(a) ao Sistema Bancario !!!\t|\n");
            printf("\n\n\t\t-------------------------------------------------\n\n\n");
            sleep (10);
            system ("cls");
            system ("color 0E");
            printf("\n\n\t\t-------------------------------------------------\n");
            printf("\n\n\t\t|\tBem vindo(a)ao Sistema Bancario !!!\t|\n");
            printf("\n\n\t\t-------------------------------------------------\n\n\n");
            sleep (10);
       } 
       
       
       
       do{
          system("cls");
          system ("color 0E");
          printf("\n\n\t\t-------------------------------------------------\n");
          printf("\n\n\t\t|\tBem vindo(a)ao Sistema Bancario !!!\t|\n");
          printf("\n\n\t\t-------------------------------------------------\n\n\n"); 
          printf("\n\tEu sou: \n\n\t1 - Cliente\n\t2 - Funcionario\n\t3 - Sair\n\n");
          fflush(stdin);
          scanf("%d", &opc1);
       
          switch(opc1){
                    case 1:
                           system("cls");
                           printf("\n=========================================\n\n");                       
                           printf("\t\tFICHA DO CLIENTE\n");
                           printf("\n=========================================\n\n");
                    
                           novocliente=(struct cliente*)malloc(sizeof(struct cliente));
                           printf("\tDigite seu nome: ");
                           fflush(stdin);
                           gets(novocliente->nome);
                           cont++;
                           novocliente->senha=cont;
                          
                           printf("\n\tSenha: %d\n\n", novocliente->senha);
                           _strdate(data_chegada);
                           _strtime(hora_chegada);
                           strcpy(novocliente->data, data_chegada);
                           strcpy(novocliente->hora, hora_chegada);
                           printf("\n\tData: %s\n\tHora: %s", novocliente->data, novocliente->hora);
           
                           novocliente->prox=NULL;
           
                           if(fila->inicio==NULL)
                                 fila->inicio=novocliente;
                
                           if(fila->fim!=NULL)
                                 fila->fim->prox=novocliente;
                
                           fila->fim=novocliente;
                           printf("\n____________________________________________\n\n");
                          
                           printf("\n\tAguarde!! Estamos armazenando seu dados no sistema.\n\n");
                           printf("\t\t");
                           for(k=0;k<=20;k++){
                                            sleep(100);
                                            printf(".");
                           }
                           system("cls");
                           printf("\n\n\n\n\n\n\t\tDados dos clientes armazenados com exito!!\n\n");
                           sleep(1500);
                           system("cls");
                           printf("\n\n\n\n\n\n\t\tJah tem cliente na fila a espera de atendimento!\n\n");
                           sleep(1500);
                           system("cls");
                           
                           break;
                     case 2:
                            
                            do{
                               system("cls");
                               printf("\n\n\t\t====================================\n\n");
                               printf("\n\t\t\tFICHA DO FUNCIONARIO\n");
                               printf("\n\n\t\t====================================\n\n");
                            
                               printf("\tDigite uma opcao:\n\n\t");
                               printf("1 - Chamar\n\t");
                               printf("2 - Verificar senhas \n\t");
                               printf("3 - Verificar dados das senhas\n\t4 - Sair.\n");
                               fflush(stdin);
                               scanf("%d",&opc);
       
                           
                               switch(opc) {
                                           case 1:
                                                  system("cls");
                                                  printf("\n\tCHAMAR SENHA\n\n\n");
                                                  printf("\n\t\t________________________________\n\n");
                                                  
                                                  auxcliente = fila->inicio;
                                                  if(auxcliente!=NULL){
                                                     printf("\n\t Senha Chamada:\n\n");
                                                     
                                                     printf("\t|       %d\t|\n", auxcliente->senha);
                                                     printf("\t|       %s\t|\n", auxcliente->data);
                                                     printf("\t|       %s\t|\n", auxcliente->hora); 
                                                     fila->inicio=auxcliente->prox;
                                                     free(auxcliente);
                                                  }
                                                  else{
                                                       printf("\n\n\t\t\tFila vazia!!");
                                                       printf("\n\n");
                                                       printf("\n\n\t\t================================\n\n");
                                                  }
                                                  
                                                 getch();      
                                                 break;
                                         case 2:
                                              system("cls");
                                              printf("\n\t\t____________________________________\n\n"); 
                                              auxcliente=fila->inicio;
                                              if(auxcliente!=NULL){
                                                  printf("\n\tSenhas em espera:\n\n");
                                                 
                                                  while(auxcliente!=NULL){
                                                       printf("\t| %d  |\n", auxcliente->senha);
                                                       auxcliente=auxcliente->prox;
                                                  }
                                              }
                                              else{
                                                  printf("\n\n\t\t\tFila Vazia!!");
                                                  printf("\n\t\t______________________________\n\n");
                                              }
                                              getch();
                                              break;  
                                        case 3:
                                               printf("\n\n");
                                               auxcliente=fila->inicio;
                                               
                                               if(auxcliente==NULL)
                                                    printf("\n\n\t\tFila Vazia!!");
                                                    
                                               while(auxcliente!=NULL){
                                                  printf("\n\nCliente: %s\n", auxcliente->nome);
                                                  printf("Senha: %d\n", auxcliente->senha);
                                                  printf("Data: %s\n", auxcliente->data);
                                                  printf("Hora de chegada: %s\n", auxcliente->hora);
                                                  printf("\n________________________\n");
                                                  auxcliente=auxcliente->prox;
                                               }
                                               
                                               
                                               getch();
                                               break;
                                        case 4:
                                               break;
                                        default:
                                                printf("\n\n\tOpcao Invalida!!");
                                                getch();
                                                break;
                               }
                            }while(opc!=4);
                            break;
                     case 3:
                          exit(1);
                          break;
                     default:
                          printf("Opcao Invalida!!");
                          getch();
                          break;
          }
       }while(opc1!=3);

       getche();
}
                        
                        

