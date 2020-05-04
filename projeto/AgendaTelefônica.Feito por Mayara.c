#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>


/*Estrutura da agenda telefônica:*/
typedef struct agenda{
        char nome[100];
        char telefone[10];
        char celular[10];
        char email[30];
        char pais[10];
        char endereco[50];
        char cidade[10];
        char estado[10];
        char date_nasc[10];
        struct agenda *prox, *ant;
}Agenda;

/*protótipo das funções:*/
void agenda();
int opcao_menu();
void menu(Agenda *lista);
Agenda* add(Agenda *lista);
void posicao(int x, int y);
Agenda* liberar(Agenda *lista);
void info();
Agenda* busca(Agenda*busca);

main(){
       system("MODE con cols=100 lines=30");
       system("title Agenda Telefônica");
       Agenda *lista=NULL;    
       
       agenda();
       menu(lista);
       getch();
}
/*função posicao: define a posição na tela do console*/
void posicao(int x, int y){
     COORD c;
     c.X=x-1;
     c.Y=y-1;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void agenda(){
     int i;
             
     system("color 3f");
     
     printf("\n\n\n\n\n\n\n\t\t%c", 218);
      
     for(i=1; i<=65; i++)                    
        printf("%c",196);
     printf("%c", 191);
     
     
     for(i=1; i<=6; i++)
          printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
     printf("\n\t\t%c\t\t\tAGENDA TELEF%cNICA\t\t\t  %c", 179, 226, 179); 
     
     
     for(i=1; i<=5; i++)
          printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
     
     printf("\n\t\t%c", 192);
     
     
     for(i=1; i<=65; i++){
       
        printf("%c",196);
     }
     
     printf("%c", 217);
     getch();
     
}//fim_agenda

/*função opcao_menu: retorna a opção do usuário*/
int opcao_menu(){
     int i;
     int opcao;
     
     system("cls");
     system("color 3f");
     
     printf("\n\n\n\n\t\t\t\t\t%c MENU CONTATOS %c\n\n", 17, 16);//174, 175
     
     /*Desenho do retângulo_inicio*/
     printf("\t\t%c", 218);
     
     for(i=1; i<=65; i++)                    
        printf("%c",196);
     printf("%c", 191);
     
     for(i=1; i<=5; i++)
          printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
     printf("\n\t\t%c\t1.Buscar\t\t\t\t\t\t  %c", 179,179); 
     printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
     printf("\n\t\t%c\t2.Adicionar novo\t\t\t\t\t  %c", 179,179);
     printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
     printf("\n\t\t%c\t3.Apagar tudo\t\t\t\t\t\t  %c", 179,179);
     printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
     printf("\n\t\t%c\t4.Informa%c%co\t\t\t\t\t\t  %c", 179,135, 198, 179);
     printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
     printf("\n\t\t%c\t5.Sair\t\t\t\t\t\t\t  %c", 179,179);
     for(i=1; i<=2; i++)
          printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
     
     printf("\n\t\t%c", 192);
     
     
     for(i=1; i<=65; i++)
        printf("%c",196);
     printf("%c", 217);
     /*fim_Desenho do retângulo*/
     
     printf("\n\t\t\tQual sua Op%c%co? ",135,198);
     fflush(stdin);
     scanf("%d", &opcao);
     
     return opcao;   
     
}//fim_opcao_menu

/*função menu: recebe a opção do usuário e a executa*/
void menu(Agenda *lista){
     
     int escolha;
    
     
     do{ 
        escolha=opcao_menu();//recebeu a opção do usuário.
        switch(escolha){
              case 1:
                   system("cls");
                   lista=busca(lista);
                   break;
              case 2:
                   system("cls");
                   lista=add(lista);
                   getch();
                   break;
              case 3:
                   system("cls");
                   lista=liberar(lista);
                   getch();
                   break;
              case 4:
                   system("cls");
                   info();
                   getch();
                   break;
            
              case 5:
                   system("cls");
                   exit(1);//aborta o programa.
                   break;
              default:
                     system("cls");
                     printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t OP%c%cO   INCORRETA! ", 128,199 );
                     getch();
                     system("cls");
                     break;
        }
                                
     }while(escolha<5 || escolha>5);
}//fim_menu

/*função adicionar: adiciona  contatos.*/
Agenda* add(Agenda *lista){
        Agenda *cell;
        int cond=0, i;
        
        printf("\n\n\n\n\t\t\t\t\t%c ADICIONAR %c\n\n", 17, 16);//174, 175
        
        do{
            cond++;
            cell=(Agenda*)malloc(sizeof(Agenda));            
            
            printf("\n\t\t\t Nome: "); 
            fflush(stdin);
            gets(cell->nome);
            
            printf("\n\t\t\t Celular:  ");
            gets(cell->celular);
            
            printf("\n\t\t\t Telefone:  ");
            gets(cell->telefone);
            
            printf("\n\t\t\t E-mail:  ");
            gets(cell->email);
            
            printf("\n\t\t\t Pa%cs: ", 214);
            gets(cell->pais);
            
            printf("\n\t\t\t Endere%co:  ", 135);
            gets(cell->endereco);
            
            printf("\n\t\t\t Cidade: ");
            gets(cell->cidade);
            
            printf("\n\t\t\t Estado:  ");
            gets(cell->estado);
            
            printf("\n\t\t\t Data de nascimento:  ");
            gets(cell->date_nasc);
            
            cell->prox=lista;
            cell->ant=NULL;
            
            if(lista==NULL)
                 lista=cell;
            else{
                lista->ant=cell;
                lista=cell;
            }
            //getch();
            system("cls");
            printf("\n\n\n\n\n\n\n\n\t\t\t\t Contatdo Adicionado com Sucesso!  ");
            cond--;
            
        }while(cond!=0);
              
        return lista;
}//fim_add

/*função liberar: libera todos os nós da lista*/
Agenda* liberar(Agenda *lista){
        
        Agenda *cell=lista;
        int i;
        printf("\n\n\n\n\t\t\t\t\t%c APAGAR TUDO %c\n\n", 17, 16);
        while(cell!=NULL){
                          cell=lista;
                          if(cell!=NULL){
                                       lista=lista->prox;
                                       free(cell);
                          }
        }
        if(lista==NULL){
                    printf("\t\t%c", 218);
     
                     for(i=1; i<=65; i++)                    
                              printf("%c",196);
                     printf("%c", 191);
     
                     for(i=1; i<=5; i++)
                              printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
                     printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
                     printf("\n\t\t%c\t\t Agenda j%c est%c liberada!\t\t\t  %c", 179,160,160,179);
                     printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
                     printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
                     printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
                     
                     for(i=1; i<=2; i++)
                              printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
                     printf("\n\t\t%c", 192);
     
     
                     for(i=1; i<=65; i++)
                              printf("%c",196);
                     printf("%c", 217);
        }
        
        return lista;
}//fim_liberar

/*função info: informações sobre o programa*/
void info(){
     int i;
     printf("\n\n\n\n\t\t\t\t\t%c INFORMA%c%cO %c\n\n", 17, 128, 142, 16);//174, 175
     
     printf("\t\t%c", 218);
     
     for(i=1; i<=65; i++)                    
        printf("%c",196);
     printf("%c", 191);
     
     for(i=1; i<=3; i++)
          printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
     printf("\n\t\t%c\t Instituto Federal de Educa%c%co, Ci%cncia e Tecnologia-AL   %c", 179,135,198, 136, 179); 
     printf("\n\t\t%c\t\t Curso T%ccnico em Inform%ctica\t\t\t  %c", 179, 130, 160, 179);
     printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
     printf("\n\t\t%c\t\t Aluna: Mayara Rysia de Assis Lima\t\t  %c", 179,179);
     printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
     printf("\n\t\t%c\t\t Disciplina: Estruturas de Dados\t\t  %c", 179,179);
     printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
     printf("\n\t\t%c\t\t Assunto: Listas Encadeadas\t\t\t  %c", 179,179);
     printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
     printf("\n\t\t%c\t\t Objetivo do Programa: Fixar o Assunto Estudado   %c", 179,179);
     for(i=1; i<=2; i++)
          printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
     
     printf("\n\t\t%c", 192);
     
     
     for(i=1; i<=65; i++)
        printf("%c",196);
     printf("%c", 217);
}//fim_info

/*função busca: faz busca de um contato, e o edita ou o apaga se quiser*/
Agenda* busca(Agenda*lista){
        
     Agenda *cell=lista;
     int opcao, i;
     char nome[100], celular[10], email[30], data[10];
        
     if(lista==NULL){
          printf("\n\n\n\n\t\t\t\t\t%c BUSCAR CONTATO %c\n\n", 17, 16);//174, 175
          printf("\n\n\n\n\n\n\t\t\t\t\t Agenda Vazia!");
          getch();
     }
     else{
         do{
               system("cls");
               printf("\n\n\n\n\t\t\t\t\t%c BUSCAR CONTATO %c\n\n", 17, 16);//174, 175
               printf("\t\t%c", 218);         
               for(i=1; i<=65; i++)                    
                  printf("%c",196);
               printf("%c", 191);
         
               for(i=1; i<=5; i++)
                   printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
                   
               printf("\n\t\t%c\t1.Buscar por Nome\t\t\t\t\t  %c", 179,179); 
               printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
               printf("\n\t\t%c\t2.Buscar por Celular\t\t\t\t\t  %c", 179,179);
               printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
               printf("\n\t\t%c\t3.Buscar por E-mail\t\t\t\t\t  %c", 179,179);
               printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
               printf("\n\t\t%c\t4.Buscar por Data de Nascimento\t\t\t\t  %c", 179,179);
               printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
               printf("\n\t\t%c\t5.Voltar\t\t\t\t\t\t  %c", 179,179);
               
               for(i=1; i<=2; i++)
                   printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);                   
               printf("\n\t\t%c", 192);    
               for(i=1; i<=65; i++)
                   printf("%c",196);   
               printf("%c", 217);
               
               printf("\n\t\t\tQual sua Op%c%co? ",135,198);
               fflush(stdin);
               scanf("%d", &opcao);
               
               switch(opcao){
                             
                             
                             case 1:
                                   system("cls");
                                   printf("\n\n\n\n\t\t\t\t\t%c BUSCAR CONTATO %c\n\n", 17, 16);//174, 175          
                                   printf("\n\n\n\tDigite o nome que desejas buscar: ");
                                   fflush(stdin);
                                   gets(nome);
                                   system("cls");
                                   printf("\n\n\n\n\t\t\t\t\t%c BUSCAR CONTATO %c\n\n", 17, 16);//174, 175
                                   printf("\t%c CONTATO: %c\n", 174, 175);
                                   while(cell!=NULL){
                                                     if(stricmp(cell->nome, nome)==0){
                                                              printf("\n\t\t\tNome: %s\n", cell->nome);
                                                              printf("\n\t\t\tCelular: %s\n", cell->celular);
                                                              printf("\n\t\t\tTelefone: %s\n", cell->telefone);
                                                              printf("\n\t\t\tE-mail: %s\n", cell->email);
                                                              printf("\n\t\t\tPa%cs: %s\n", 214, cell->pais);
                                                              printf("\n\t\t\tCidade: %s\n", cell->cidade);
                                                              printf("\n\t\t\tEstado: %s\n", cell->estado);
                                                              printf("\n\t\t\tEndere%co: %s\n", 135, cell->endereco);
                                                              printf("\n\t\t\tData de nascimento: %s\n", cell->date_nasc);
                                                              break;
                                                     }
                                                     else
                                                          cell=cell->prox;
                                   }
                                   if(cell==NULL)
                                       printf("\n\n\t\t N%co  Encontrado! ", 198);    
                                   getch();
                                   system("cls");
                                   
                                   break;
                             case 2:
                                   system("cls");
                                   printf("\n\n\n\n\t\t\t\t\t%c BUSCAR CONTATO %c\n\n", 17, 16);//174, 175
                                   
                                   printf("\n\n\n\tDigite o n%cmero do celular que desejas buscar: ", 163);
                                   fflush(stdin);
                                   gets(celular);
                                   system("cls");
                                   printf("\n\n\n\n\t\t\t\t\t%c BUSCAR CONTATO %c\n\n", 17, 16);//174, 175
                                   printf("\n\n\t%c CONTATO: %c\n", 174, 175);
                                   while(cell!=NULL){
                                                     if(stricmp(cell->celular, celular)==0){
                                                              printf("\n\t\t\tNome: %s\n", cell->nome);
                                                              printf("\n\t\t\tCelular: %s\n", cell->celular);
                                                              printf("\n\t\t\tTelefone: %s\n", cell->telefone);
                                                              printf("\n\t\t\tE-mail: %s\n", cell->email);
                                                              printf("\n\t\t\tPa%cs: %s\n", 214, cell->pais);
                                                              printf("\n\t\t\tCidade: %s\n", cell->cidade);
                                                              printf("\n\t\t\tEstado: %s\n", cell->estado);
                                                              printf("\n\t\t\tEndere%co: %s\n", 135, cell->endereco);
                                                              printf("\n\t\t\tData de nascimento: %s\n", cell->date_nasc);
                                                              break;
                                                     }
                                                     else
                                                          cell=cell->prox;
                                   }
                                   if(cell==NULL)
                                              printf("\n\n\t\t N%co  Encontrado! ", 198);
                                   getch();                                 
                                   system("cls");
                                   break;
                             case 3:
                                   system("cls");
                                   printf("\n\n\n\n\t\t\t\t\t%c BUSCAR CONTATO %c\n\n", 17, 16);//174, 175
                                   
                                   printf("\n\n\n\tDigite o endere%co de e-mail que desejas buscar: ", 135);
                                   fflush(stdin);
                                   gets(email);
                                   system("cls");
                                   printf("\n\n\n\n\t\t\t\t\t%c BUSCAR CONTATO %c\n\n", 17, 16);//174, 175
                                   printf("\n\n\t%c CONTATO: %c\n", 174, 175);
                                   while(cell!=NULL){
                                                     if(stricmp(cell->email, email)==0){
                                                              printf("\n\t\t\tNome: %s\n", cell->nome);
                                                              printf("\n\t\t\tCelular: %s\n", cell->celular);
                                                              printf("\n\t\t\tTelefone: %s\n", cell->telefone);
                                                              printf("\n\t\t\tE-mail: %s\n", cell->email);
                                                              printf("\n\t\t\tPa%cs: %s\n", 214, cell->pais);
                                                              printf("\n\t\t\tCidade: %s\n", cell->cidade);
                                                              printf("\n\t\t\tEstado: %s\n", cell->estado);
                                                              printf("\n\t\t\tEndere%co: %s\n", 135, cell->endereco);
                                                              printf("\n\t\t\tData de nascimento: %s\n", cell->date_nasc);
                                                              break;
                                                     }
                                                     else
                                                          cell=cell->prox;
                                   }
                                   if(cell==NULL)
                                       printf("\n\n\t\t N%co  Encontrado! ", 198);
                                   
                                   getch();
                                   system("cls");
                                   break;
                             case 4:
                                   system("cls");
                                   printf("\n\n\n\n\t\t\t\t\t%c BUSCAR CONTATO %c\n\n", 17, 16);                                   
                                   printf("\n\n\n\tDigite a data de nascimento que desejas buscar: ");
                                   fflush(stdin);
                                   gets(data);
                                   system("cls");
                                   printf("\n\n\n\n\t\t\t\t\t%c BUSCAR CONTATO %c\n\n", 17, 16);//174, 175
                                   printf("\n\n\t%c CONTATO: %c\n", 174, 175);
                                   while(cell!=NULL){
                                                     if(stricmp(cell->date_nasc, data)==0){
                                                              printf("\n\t\t\tNome: %s\n", cell->nome);
                                                              printf("\n\t\t\tCelular: %s\n", cell->celular);
                                                              printf("\n\t\t\tTelefone: %s\n", cell->telefone);
                                                              printf("\n\t\t\tE-mail: %s\n", cell->email);
                                                              printf("\n\t\t\tPa%cs: %s\n", 214, cell->pais);
                                                              printf("\n\t\t\tCidade: %s\n", cell->cidade);
                                                              printf("\n\t\t\tEstado: %s\n", cell->estado);
                                                              printf("\n\t\t\tEndere%co: %s\n", 135, cell->endereco);
                                                              printf("\n\t\t\tData de nascimento: %s\n", cell->date_nasc);
                                                              break;
                                                     }
                                                     else
                                                          cell=cell->prox;
                                   }
                                   if(cell==NULL)
                                       printf("\n\n\t\t N%co  Encontrado! ", 198);
                                   
                                   getch();
                                   system("cls");
                                   break;
                             case 5:
                                   break;
                             default:
                                     system("cls");
                                     printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t OP%c%cO   INCORRETA! ", 128,199 );
                                     getch();
                                     system("cls");
                                     break;
               }
         }while(opcao!=5);
     }//else
     return lista;
}
