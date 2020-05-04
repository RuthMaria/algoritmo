/*Gerenciamento de uma agenda telefonica. O programa deve; estar apto a
realizar inclusões(OK), alterações(OK), exclusões, consultas por nome(OK), telefone(OK) ou data de nascimento(OK)*/

#include<string.h>          
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//int pos = 0;//variavel global para incrementar o indice de contatos;


void linha(){   // função linha
    int i;
    printf("\t");
    for(i = 0;i<50;i++){
        printf("%c",205);
    }
    printf("\n");
}

int menu(){   // função do menu
     int opcao;
     
     system("title Feito por Ruth Maria, nos bastidores do IFAL...kkkk");
     system("cls");
     system("color f3");
     
     printf("\t\t\t\t\n\n\t");  // chama a funcão linha
     linha();
     printf("\n\t\t\t\tAGENDA TELEFONICA\n\n\t");
     linha();
     printf("\t\t\n\n");
     /* a seguir são várias opções que o usuário pode escolher para para utilizar a agenha */

     printf("\t1.Adicionar contato\n");
     printf("\t2.Ver contato\n");
     printf("\t3.Consultar contato\n");
     printf("\t4.Alterar contato\n");
     printf("\t5.Excluir contato\n");
     printf("\t6.Sair\n");
     printf("\n\n\t\tQual a sua opcao?\n");
     scanf("%d",&opcao);
        
     system("cls");
     
     return opcao;
}
typedef struct {        // typedef  para não se usar struct agenda
             char nome[50];
             char endereco[50];
             int telefone ;
             int  celular;
             char email[50];
             char data_nascimento[20];
             char cidade[20];
             char estado[20];
             char excluido;    
             
}Agenda;     // ao invés de struct agenda

Agenda dados[10];

int adicionar_contato(){    //função adicionar contato
               int i=0; //para comecar a contar do 0 adiciona +1 e fica 1 sem ele o contato fica 2 
               char op;
                
               system("cls");
               system("color 5e");
               

               printf("\n\n");   // chama a função linha
               linha();
               printf("\n\t\t\tAdicionar contato\n\n");
               linha();
               printf("\n\n");
               
               printf("\nDeseja adicionar: s/sim n/nao");
               printf("\n\n\t\topcao:");
               fflush(stdin);
               scanf("%c",&op);
                            
               system("cls");
               
               printf("\n\n");    // chama a função linha
               linha();
               printf("\n\t\t\tAdicionar contato\n\n");
               linha();
              
               while(op!='n'){     /// vai adcionar os contato enquanto a opção for diferente de 'n'
                       if(op=='s'){
                           dados[i].excluido = 'n';
                           printf("\n\n\tNome:");
                           fflush(stdin);     
                           gets(dados[i].nome);
                           printf("\n");
                                          
                           printf("\tEndereco:");
                           fflush(stdin);
                           gets(dados[i].endereco);
                           printf("\n");
                              
                           printf("\tTelefone residencial:");
                           fflush(stdin);
                           scanf("%d",&dados[i].telefone);
                           printf("\n");
                              
                           printf("\tCelular:");
                           fflush(stdin);
                           scanf("%d",&dados[i].celular);
                           printf("\n");
                                               
                              
                           printf("\tE-mail:");
                           fflush(stdin);
                           gets(dados[i].email);
                           printf("\n");
                                              
                           printf("\tData de nascimento:");
                           fflush(stdin);
                           gets(dados[i].data_nascimento);
                           printf("\n");
                                              
                           printf("\tCidade:");
                           fflush(stdin);
                           gets(dados[i].cidade);
                           printf("\n");
                                               
                           printf("\tEstado:");
                           fflush(stdin);
                           gets(dados[i].estado);
                                         
                           printf("\n\n\t\t  Contato %d adicionado com sucesso",i+1);
                           i++;
                   
                   
                           getch();
                           system("cls");
                  
                   
                           printf("\n\n");
                           linha();
                           printf("\n\t\t\tAdicionar contato\n\n");
                           linha();
                   
                           printf("\n\nDeseja adicionar outro: s/sim n/nao");
                           printf("\n\n\t\topcao:");
                           fflush(stdin);
                           scanf("%c",&op);
                   
                           system("cls");
                           printf("\n\n");
                           linha();
                           printf("\n\t\t\tAdicionar contato\n\n");
                           linha();
                   
                       } // chave do if
                      else{    // esse else é se o usuário digitar a opção diferente de 's' ou 'n'
                            printf("Opcão invalida digite S ou N\n");
                            fflush(stdin);
                            scanf("%c",&op);
                            system("cls");
                            printf("\n\n");
                            
                            linha();
                            printf("\n\t\t\tAdicionar contato\n\n");
                            linha();
                       }
               }; // chave do while
               
               return i;  // vai retornar o i para o case chamar a função adicionar contato
               
} // chave da funcão adicionar contato
              
void visualizar(Agenda dados[], int i){  /* função para visualizar os contatos se o usuário digitar 2 da opção do menu
                                          o case 2 vai chamar essa função e monstrar os contatos*/
                                         
     int j;
     system("cls");
     system("color 5e");
     
      printf("\n\n");
      linha();
      printf("\n\t\t\tVisualizacao dos contatos\n\n");
      linha();
                                          
     for(j=0; j<i; j++){
              if(dados[j].excluido == 'n'){     
                      printf("\n%d contato\n",j+1);
                      fflush(stdin);
                      printf("\tNome:%s \n",dados[j].nome);
                      fflush(stdin);
                      printf("\tEndereco:%s \n",dados[j].endereco);
                      fflush(stdin);
                      printf("\tTelefone:%d \n",dados[j].telefone);
                      fflush(stdin);
                      printf("\tCelular:%d \n",dados[j].celular);
                      fflush(stdin);
                      printf("\tE-mail:%s \n",dados[j].email);
                      fflush(stdin);
                      printf("\tData de nascimento:%s \n",dados[j].data_nascimento);
                      printf("\tCidade:%s \n",dados[j].cidade);
                      printf("\tEstado:%s \n",dados[j].estado);
                      printf("\n");
              }
     }
}

void consulta_contatos(Agenda dados[],int i){  /* função para consultar os contatos */

          int escolha,j, tel;
          char nome2[30], data_nascimento[10];;
          char aux[30];   // esse aux vai copiar o nome2, o tel e o data_nascimento
          do{
              
              system("cls");
              system("color 5e");
              
              printf("\n\n");
              linha();
              printf("\n\t\t\tConsulta de contatos \n\n");
              linha();
              
              /*quando for digitado a opcão consulta do menu vai aparecer um item de menu para
              escolher  o que vai ser consultado: nome,telefone ou data de nascimento*/
                                         
              printf("\tDigite a sua opcao:\n");
              printf("\n1. Busca por nome");
              printf("\n2. Busca por telefone");
              printf("\n3. Busca por data de nascimento");
              printf("\n4. Sair daqui");
              printf("\n\n\tOpcao de escolha\n");
              scanf("%d",&escolha);
                                             
              if(escolha!=4){
                                             
                   switch(escolha){  // esse switch é para o menu da opção consultar contato
                    
                       
                        case 1:  // esse case e para consulta por nome
                             system("cls");
                             printf("\n\t\tConsulta de contato por nome\n\n");
                             printf("\tDigite o nome\n");
                             fflush(stdin);
                             gets(nome2);
                                             
                             strcpy(aux,nome2); //vai fazer uma copia do nome2 para uma variavel auxiliar
                                 
                             for(j=0; j<i; j++){
                                   if(strcmp(dados[j].nome,aux)==0){ /*aqui vai comparar o nome da  agenda com a aux que recebeu nome2 que o 
                                                                     usuário digitou se for igual ao da agenda vai monstrar o 
                                                                      contato*/
                        
                                       printf("\tNome:%s \n",dados[j].nome);
                                       printf("\tEndereco:%s \n",dados[j].endereco);
                                       printf("\tTelefone:%d \n",dados[j].telefone);
                                       printf("\tCelular:%d \n",dados[j].celular);
                                       printf("\tE-mail:%s \n",dados[j].email);
                                       printf("\tCidade:%s \n",dados[j].cidade);
                                       printf("\tEstado:%s \n\n",dados[j].estado);
                                   }
                                   
                                   else     // se o aux não for igual ao da lista vai mosntra essa frase
                                       printf("\nContato nao esta na lista\n\n");
                                       
                            }
                                   getch();
                                   break;
                                                                   
                            
                        case 2:  // esse case e para consulta por telefone
                        
                             system("cls");
                             printf("\n\t\tConsulta de contatos por telefone\n\n");
                             printf("\tDigite o telefone\n");
                             scanf("%d",&tel);
                                 
                             for(j=0; j<i; j++){ 
                                 if(dados[j].telefone==tel){ /*aqui vai comparar o telefone da agenda com o tel que o 
                                                             usuário digitou se for igual ao da agenda vai monstrar o 
                                                             contato*/
                                                 
                                     printf("\n\tNome:%s",dados[j].nome);
                                     printf("\n\tEndereco:%s",dados[j].endereco);
                                     printf("\n\tTelefone:%d",dados[j].telefone);
                                     printf("\n\tCelular:%d",dados[j].celular);
                                     printf("\n\tE-mail:%s",dados[j].email);
                                     printf("\n\tCidade:%s \n",dados[j].cidade);
                                     printf("\tEstado:%s \n",dados[j].estado);
                                     printf("\n");
                                                                                
                                 }
                                 
                                else  // se o tel não for igual ao da lista vai mosntra essa frase
                                    printf("\nContato nao esta na lista\n\n");                                              
                                    
                             }
                                getche();       
                                break;
                                                           
                                                            
                        case 3:  // esse case e para consulta por data de nascimento
                        
                             system("cls");
                             printf("\n\t\tConsulta de contato por data de nascimento\n\n");
                             printf("\tDigite data de nascimento\n");
                             fflush(stdin);
                             gets(data_nascimento);
                                                                  
                             strcpy(aux,data_nascimento);
                                                                  
                             for(j=0; j<i; j++){
                                  if(strcmp(dados[j].data_nascimento,aux)==0){/*aqui vai comparar a data de nascimento da agenda com a aux que recebeu
                                                                              a data_nascimento que o usuário digitou se for igual ao da agenda vai monstrar o 
                                                                              contato*/
                                                                              
                                       printf("\n\tNome:%s",dados[j].nome);
                                      printf("\n\tEndereco:%s",dados[j].endereco);
                                      printf("\n\tTelefone:%d",dados[j].telefone);
                                      printf("\n\tCelular:%d",dados[j].celular);
                                      printf("\n\tE-mail:%s",dados[j].email);
                                      printf("\n\tCidade:%s \n",dados[j].cidade);
                                      printf("\tEstado:%s \n",dados[j].estado);
                                      printf("\n");                                          
                                  }
                                  
                                  else   // se a aux não for igual ao da lista vai mosntra essa frase
                                     printf("\nContato nao esta na lista\n\n");
                                     
                             }
                                  getche();
                                  break;
                                                                                   
                    }// fecha o switch
                    
              }//Fecha o if principal
              
          }while(escolha!=4);//chaves do while 
          
}// chaves  da funcao  
 

void altera_contato(Agenda dados[],int i){  // essa função é para alterar contato
                        int altera,j;
                        char nome3[20];
                        char aux[30];   //este é o auxiliar do consulta nome
                        char nome_novo[50];
                        char endereco_novo[50];
                        int telefone_novo;
                        int  celular_novo;
                        char email_novo[50];
                        char cidade_novo[20];
                        char estado_novo[20];
                        char data_nascimento_novo[20];
                        
                        
                        system("color 5e");
                        
                        
                        printf("\n\n"); // chama a função linha
                        linha();
                        printf("\n\t\t\tAlteracao dos contatos \n\n");
                        linha();
                        
                                            
                        printf("\n\tDigite opcao:\n");
                        printf("\n1. Para alterar");
                        printf("\n2. Sair");
                        printf("\n\n\tDigite sua escolha\n");
                        scanf("%d",&altera);
                        
                        system("cls");
                        printf("\n\n");   // chama a função linha
                        linha();
                        printf("\n\t\t\tAlteracao dos contatos \n\n");
                        linha();
                        
                        
                                            
                        if(altera==1){
                             printf("\n\tDigite  o nome que vai ser alterado:");
                             fflush(stdin);
                             gets(nome3);
                                   
                             strcpy(aux,nome3);          //vai fazer uma copia do nome2 para uma variavel auxiliar
                             
                             for(j=0; j<i; j++){
                                  if(strcmp(dados[j].nome,aux)==0){         //aqui vai comparar o nome da agenda com o nome2 que você colocou para pesquisar
                                       printf("\nNome:");
                                       fflush(stdin);
                                       gets(nome_novo);
                                       strcpy(dados[j].nome,nome_novo);  //utiliza a função strcpy, pois a nome eh do tipo char
                                                   
                                       printf("\nEndereco:");
                                       fflush(stdin);
                                       gets(endereco_novo);
                                       strcpy(dados[j].endereco,endereco_novo);
                                                   
                                       printf("\nTelefone:");
                                       scanf("%d",&telefone_novo);
                                       dados[j].telefone=telefone_novo;   //não foi precisa utilizar nehuma função pois eh do tipo int
                                                   
                                       printf("\nCelular:",dados[j].celular);
                                       scanf("%d",&celular_novo);
                                       dados[j].celular=celular_novo;
                                                   
                                       printf("\nE-mail:");
                                       fflush(stdin);
                                       gets(email_novo);
                                       strcpy(dados[j].email,email_novo);
                                                                 
                                       printf("\nData de nascimento:");
                                       fflush(stdin);
                                       gets(data_nascimento_novo);
                                       strcpy(dados[j].data_nascimento,data_nascimento_novo);
                                                                 
                                       printf("\nCidade:");
                                       fflush(stdin);
                                       gets(cidade_novo);
                                       strcpy(dados[j].cidade,cidade_novo);
                                                                 
                                       printf("\nEstado:");
                                       fflush(stdin);
                                       gets(estado_novo);
                                       strcpy(dados[j].estado,estado_novo);
                                                   
                                       printf("\n");
                                       getch();
                                       
                                   }// chave de if
                                   
                                   
                                   else
                                      printf("\n\nNao esta na lista de contatos\n\n");
                                      
                             } //chave do for
                        } //chave do 1º if
} // função

void excluir_contato(Agenda dados[], int i){
       int n_contato, j;
       int op;
       
       Agenda contato[10];
       
       
       system("color 5e");
       
       printf("\n\n");
       linha();
       printf("\n\t\t\tExcluir contato \n\n");
       linha();
       
       printf("\n\nQual contato voce deseja excluir:");
       scanf("%d",&n_contato);
       
       for(j=0; j<i; j++){
                if(j == n_contato - 1){
                        printf("\nO contato que voce deseja excluir eh %s?\n\n",dados[j].nome);
                        printf("\t Digite 1 p/ sim ou 2 p/ nao?\n\n");
                        scanf("%d",&op);
                    if(op==1){
                          dados[j].excluido = 's';             
                          dados[j].nome[j]= ' ';
                          dados[j].endereco[j]=' ';
                          dados[j].telefone=0 ;
                          dados[j].celular=0;
                          dados[j].email[j]=' ';
                          dados[j].data_nascimento[j]=' ';
                          dados[j].cidade[j]=' ';
                          dados[j].estado[j]=' ';
                        
                    }else{
                    return;
                    menu();
                }    
                    
               }//chave do 1º if 
               
       }//chave do for
       
} // chave da função
     
                  
             
 main(){
       
      int opcao,i=0;   
       
       do{
            
          opcao=menu();  
           
          switch(opcao){
                  case 1:
                        i=adicionar_contato(); /// chama a função adicionar_contato
                        break;
                                           
                  case 2:
                        visualizar(dados, i);  // chama a função visualizar
                        break;
                                  
                  case 3:
                        consulta_contatos(dados,i); // chama a função consulta_contatos
                        break;   
                                      
                  case 4:
                        altera_contato(dados,i);  // chama a função altera_contato
                        break;   //este break eh para sair, ou seja se a opcao for 2 sai da alteração e vai para o menu
                        
                  case 5:
                       
                        excluir_contato(dados,i);
                        break; 
                 default:
                         printf("\n\n\tA opcao digitada nao esta no menu\n");            
                         
                                                       
         }   //do switch principal
           getch();
           }  while(opcao!=6);
      
}



