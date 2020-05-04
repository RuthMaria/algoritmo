#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

struct cadastro{
       char nome[50];
       int  idade;
       char sexo;
       char endereco[200];
       char telefone[9];
       char senha[6];
};
       
void cab()
{
      printf("\n\n\t\t\t    Biblioteca Infantil\n\t________________________________________________________________");
      
      printf("\n\n\t1.cadastro\n");
      printf("\n\t2.locar\n");
      printf("\n\t3.reservar\n");
      printf("\n\t4.sair\n");
      
}

int main(){
      int escolha,i=0,s;
      char novo;
      struct cadastro cad[999];
      
      system("title Biblioteca Infantil");
      system("color fd");
      
      cab();
      printf("\n\n\t\t escolha: ");
      scanf("%d",&escolha);
      
      switch(escolha){// switch da escolha do cliente 
                      
                            case 1:  // escolha do usuario para cadastrar clientes
                            struct cadastro cad[999];
                    
                            do{
                              system("cls");
                              printf("\n\tCadastro\n\t________________________________________________________________");
                           
                              printf("\n\n\tCliente %d",i+1);
                              fflush(stdin);
                              printf("\n\n\tnome: ");
                              gets(cad[i].nome);
                           
                              fflush(stdin);
                              printf("\n\tidade: ");
                              scanf("%d",&cad[i].idade);
                           
                              do{
                                 fflush(stdin);
                                 printf("\n\tsexo: ");
                                 scanf("%c",&cad[i].sexo);
                              
                                 if((cad[i].sexo!='M')&&(cad[i].sexo!='m')&&(cad[i].sexo!='F')&&(cad[i].sexo!='f'))
                                                                                            printf("\n\n\t\t\tSexo errado, tente novamente!");
                              
                              }while((cad[i].sexo!='M')&&(cad[i].sexo!='m')&&(cad[i].sexo!='F')&&(cad[i].sexo!='f'));
                                                   
                              fflush(stdin);
                              printf("\n\tendereco: ");
                              gets(cad[i].endereco);
                           
                              fflush(stdin);
                              printf("\n\ttel: ");
                              gets(cad[i].telefone);
                           
                              fflush(stdin);
                              printf("\n\tsenha: ");
                              
                               gets(cad[i].senha);
                               
                             
                              
                              printf("\n\t%s cadastrado com sucesso",cad[i].nome);
                              getch();
                              
                              fflush(stdin);
                              printf("\n\n\tDeseja fazer novo cadastro?\n\tS.Sim N.Nao: ");
                              scanf("%c",&novo);
                              
                              if((novo=='N')||(novo=='n')){
                                                           system("cls");
                                                           main();
                              }
                              
                              i++;
                              } while((novo=='S')||(novo=='s'));                   
                           
                           
                           break;
          
                      
                            
                      case 2:// escolha do usuario para cliente locar livro
                           
                           int mes, dia, diaentrega,mesentrega,i,j;
                           printf("Digite o mes: ");
                           scanf("%d",&mes);
                           switch (mes){
                                  case 1: // esse case eh para opção do usuario para mes 1
                                        do{
                                        printf("Digite o dia: ");
                                        scanf("%d",&dia);
            
                                        if(dia<=31){
                                        printf("Data certa\n");
                                            if(dia+7>31){
                                            diaentrega=(dia+7)-31;
                                            mesentrega=mes+1;
                                            printf("\nA data de entrega e: %d/%d",diaentrega,mesentrega);
                                            }
                                            else{
                                            diaentrega=dia+7;
                                            mesentrega=mes;
                                            printf("\nA data de entrega e: %d/%d",diaentrega,mesentrega);
                                            }
                                            getch();
                                            }
                                            else{
                                            printf("Data errada. tente de novo\n");
                                            getch();
                                            system("cls");
                                            }
                                            }while(dia>31);
                                            break;
       
                                  case 2:// escolha do cliente para mes 2
                                        do{
                                        printf("Digite o dia: ");
                                        scanf("%d",&dia);
            
                                        if(dia<=28){
                                           printf("Data certa\n");
                                        if(dia+7>28){
                                           diaentrega=(dia+7)-28;
                                           mesentrega=mes+1;
                                           printf("\nA data de entrega e: %d/%d",diaentrega,mesentrega);
                                        }
                                        else{
                                           diaentrega=dia+7;
                                           mesentrega=mes;
                                           printf("\nA data de entrega e: %d/%d",diaentrega,mesentrega);
                                        }
                                           getch();
                                        }
                                        else{
                                           printf("Data errada. tente de novo\n");
                                           getch();
                                           system("cls");
                                        }
                                        }while(dia>28);
                                        break;
       
                                 case 3:
                                       do{
                                       printf("Digite o dia: ");
                                       scanf("%d",&dia);
            
                                       if(dia<=31){
                                         printf("Data certa\n");
                                         if(dia+7>31){
                                         diaentrega=(dia+7)-31;
                                         mesentrega=mes+1;
                                         printf("\nA data de entrega e: %d/%d",diaentrega,mesentrega);
                                         }
                                         else{
                                         diaentrega=dia+7;
                                         mesentrega=mes;
                                         printf("\nA data de entrega e: %d/%d",diaentrega,mesentrega);
                                    }
                                         getch();
                                         }
                                else{
                                     printf("Data errada. tente de novo\n");
                                     getch();
                                     system("cls");
                                }
                                }while(dia>31);
                           break;
                           
                           case 4:
                                do{
                                   printf("Digite o dia: ");
                                   scanf("%d",&dia);
                                
                                if(dia<=30){
                                            printf("Data certa\n");
                                if(dia+7>30){
                                             diaentrega=(dia+7)-30;
                                             mesentrega=mes+1;
                                             printf("\nA data de entrega e: %d/%d",diaentrega,mesentrega);
                                }
                                else{
                                     diaentrega=dia+7;
                                     mesentrega=mes;
                                     printf("\nA data de entrega e: %d/%d",diaentrega,mesentrega);
                                }
                                getch();
                                }
                                else{
                                     printf("Data errada. tente de novo\n");
                                     getch();
                                     system("cls");
                                }
                                }while(dia>30);
                           break;
                           
                           case 5:
                                do{
                                   printf("Digite o dia: ");
                                   scanf("%d",&dia);
                                
                                if(dia<=31){
                                            printf("Data certa\n");
                                if(dia+7>31){
                                             diaentrega=(dia+7)-31;
                                             mesentrega=mes+1;
                                             printf("\nA data de entrega e: %d/%d",diaentrega,mesentrega);
                                }
                                else{
                                     diaentrega=dia+7;
                                     mesentrega=mes;
                                     printf("\nA data de entrega e: %d/%d",diaentrega,mesentrega);
                                }
                                getch();
                                }
                                else{
                                     printf("Data errada. tente de novo\n");
                                     getch();
                                     system("cls");
                                }
                                }while(dia>31);
                           break;
                           
                           case 6:
                                do{
                                   printf("Digite o dia: ");
                                   scanf("%d",&dia);
                                
                                if(dia<=30){
                                            printf("Data certa\n");
                                if(dia+7>30){
                                             diaentrega=(dia+7)-30;
                                             mesentrega=mes+1;
                                             printf("\nA data de entrega e: %d/%d",diaentrega,mesentrega);
                                }
                                else{
                                     diaentrega=dia+7;
                                     mesentrega=mes;
                                     printf("\nA data de entrega e: %d/%d",diaentrega,mesentrega);
                                }
                                getch();
                                }
                                else{
                                     printf("Data errada. tente de novo\n");
                                     getch();
                                     system("cls");
                                }
                                }while(dia>30);
                           break;
                           
                           case 7:
                                do{
                                   printf("Digite o dia: ");
                                   scanf("%d",&dia);
                                
                                if(dia<=31){
                                            printf("Data certa\n");
                                if(dia+7>31){
                                             diaentrega=(dia+7)-31;
                                             mesentrega=mes+1;
                                             printf("\nA data de entrega e: %d/%d",diaentrega,mesentrega);
                                }
                                else{
                                     diaentrega=dia+7;
                                     mesentrega=mes;
                                     printf("\nA data de entrega e: %d/%d",diaentrega,mesentrega);
                                }
                                getch();
                                }
                                else{
                                     printf("Data errada. tente de novo\n");
                                     getch();
                                     system("cls");
                                }
                                }while(dia>31);
                           break;
                           
                           case 8:
                                do{
                                   printf("Digite o dia: ");
                                   scanf("%d",&dia);
                                
                                if(dia<=31){
                                            printf("Data certa\n");
                                if(dia+7>31){
                                             diaentrega=(dia+7)-31;
                                             mesentrega=mes+1;
                                             printf("\nA data de entrega e: %d/%d",diaentrega,mesentrega);
                                }
                                else{
                                     diaentrega=dia+7;
                                     mesentrega=mes;
                                     printf("\nA data de entrega e: %d/%d",diaentrega,mesentrega);
                                }
                                getch();
                                }
                                else{
                                     printf("Data errada. tente de novo\n");
                                     getch();
                                     system("cls");
                                }
                                }while(dia>31);
                           break;
                           
                           case 9:
                                do{
                                   printf("Digite o dia: ");
                                   scanf("%d",&dia);
                                
                                if(dia<=30){
                                            printf("Data certa\n");
                                if(dia+7>30){
                                             diaentrega=(dia+7)-30;
                                             mesentrega=mes+1;
                                             printf("\nA data de entrega e: %d/%d",diaentrega,mesentrega);
                                }
                                else{
                                     diaentrega=dia+7;
                                     mesentrega=mes;
                                     printf("\nA data de entrega e: %d/%d",diaentrega,mesentrega);
                                }
                                getch();
                                }
                                else{
                                     printf("Data errada. tente de novo\n");
                                     getch();
                                     system("cls");
                                }
                                }while(dia>30);
                           break;
                           
                           case 10:
                                do{
                                   printf("Digite o dia: ");
                                   scanf("%d",&dia);
                                
                                if(dia<=31){
                                            printf("Data certa\n");
                                if(dia+7>31){
                                             diaentrega=(dia+7)-31;
                                             mesentrega=mes+1;
                                             printf("\nA data de entrega e: %d/%d",diaentrega,mesentrega);
                                }
                                else{
                                     diaentrega=dia+7;
                                     mesentrega=mes;
                                     printf("\nA data de entrega e: %d/%d",diaentrega,mesentrega);
                                }
                                getch();
                                }
                                else{
                                     printf("Data errada. tente de novo\n");
                                     getch();
                                     system("cls");
                                }
                                }while(dia>31);
                           break;
                           
                           case 11:
                                do{
                                   printf("Digite o dia: ");
                                   scanf("%d",&dia);
                                
                                if(dia<=30){
                                            printf("Data certa\n");
                                if(dia+7>30){
                                             diaentrega=(dia+7)-30;
                                             mesentrega=mes+1;
                                             printf("\nA data de entrega e: %d/%d",diaentrega,mesentrega);
                                }
                                else{
                                     diaentrega=dia+7;
                                     mesentrega=mes;
                                     printf("\nA data de entrega e: %d/%d",diaentrega,mesentrega);
                                }
                                getch();
                                }
                                else{
                                     printf("Data errada. tente de novo\n");
                                     getch();
                                     system("cls");
                                }
                                }while(dia>30);
                           break;
                           
                           case 12:
                                do{
                                   printf("Digite o dia: ");
                                   scanf("%d",&dia);
                                
                                if(dia<=31){
                                            printf("Data certa\n");
                                if(dia+7>31){
                                             diaentrega=(dia+7)-31;
                                             mesentrega=1;
                                             printf("\nA data de entrega e: %d/%d",diaentrega,mesentrega);
                                }
                                else{
                                     diaentrega=dia+7;
                                     mesentrega=mes;
                                     printf("\nA data de entrega e: %d/%d",diaentrega,mesentrega);
                                }
                                getch();
                                }
                                else{
                                     printf("Data errada. tente de novo\n");
                                     getch();
                                     system("cls");
                                }
                                }while(dia>31);
                           break;
                           }
                           
       
       default:
               printf("Mes nao existe");
               getch();
               system("cls");
               main();
       break;
       }
       
       getch();
       }
      
