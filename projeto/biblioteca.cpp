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
       
int menu()
{
      int escolha;    
      do{
      system("cls");
      printf("\n\n\t\t\t    Biblioteca Infantil\n\t________________________________________________________________");
      
      printf("\n\n\t1.cadastro\n");
      printf("\n\t2.locar\n");
      printf("\n\t3.reservar\n");
      printf("\n\t4.sair\n");
      
      scanf("%d",&escolha);
      }while(1>escolha||escolha>4);
      
      return escolha;
}
void cadastro(){         // funçao pra cadastro de clientes da biblioteca
     struct cadastro cad[999];
     int i;
     char novo;
     
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
                              fflush(stdin);
                              if((novo=='N')||(novo=='n')){
                                                           system("cls");
                                                           menu();
                                                           
                              }
                              
                              i++;
                              } while((novo=='S')||(novo=='s'));                   
                           
}

void locar(){
     int mes, dia,diaentrega,mesentrega,i,j,n=30,g=31;
     
     printf("Digite o mes: ");
     scanf("%d",&mes);
     if (mes==2){
                  do{
                  printf("Digite o dia: ");
                  scanf("%d",&dia);
                  if(dia<=28)
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
                  }while(dia>28);
                  }
                  
     if (mes==4||mes==6||mes==9||mes==11){
                                          
                  do{
                  printf("Digite o dia: ");
                  scanf("%d",&dia);
                                
                  if(dia<=n){
                  printf("Data certa\n");
                  if(dia+7>n){
                  diaentrega=(dia+7)-n;
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
                  }while(dia>n);
                 
                 }
     if (mes==1||mes==3||mes==5||mes==7||mes==8||mes==10){
                  do{
                  printf("Digite o dia: ");
                  scanf("%d",&dia);
                                
                  if(dia<=g){
                  printf("Data certa\n");
                  if(dia+7>g){
                  diaentrega=(dia+7)-g;
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
                  }while(dia>g);
     
     if (mes==12)
                  do{
                  printf("Digite o dia: ");
                  scanf("%d",&dia);
                                
                  if(dia<=g){
                  printf("Data certa\n");
                  if(dia+7>g){
                  diaentrega=(dia+7)-g;
                  mesentrega=mes-11;
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
                  }while(dia>g);
                 
     
     }

}     
main(){
      int escolha,i=0,s;
      char novo;
      struct cadastro cad[999];
      
      system("title Biblioteca Infantil");
      system("color fd");
      
      menu();
      do{
         escolha==menu();
         switch(escolha){// switch da escolha do cliente 
                      
                      case 1:  // escolha do usuario para cadastrar clientes
                        cadastro();
                      break;
                      
                      case 2:
                        locar();
                      break;
                      case 4:
                        exit(0);     
                      break; 
         }
      }while(escolha!=4);               
                      
                          
      getch();
       
}
      
