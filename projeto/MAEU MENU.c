#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int interface_opcao_menu(){
  
     int i;
     int opcao;
     system("MODE con cols=100 lines=30");
     system("cls");
     
     printf("\n\n");
     printf("\t\t\t\t      %c", 218);
     
     for(i=0; i<20; i++){
              printf("%c", 196);
     }
     
     printf("%c", 191);
     printf("\n");
     
     printf("\t\t\t\t");
     printf("      %c %c   ", 179, 219);
     printf("CALC POSFIXA %c %c\n", 219, 179);
     
     printf("\t\t\t\t      %c", 192);
     for(i=0; i<20; i++){
              printf("%c", 196);
     }
     printf("%c", 217);
     
     printf("\n\n\n\n\n");
     printf("\t\t\t\t\t%c MENU DE OP%c%cES %c\n\n", 17, 128, 229, 16);
     
     
     
     
     /*desenho:  inicio*/
     printf("\t\t%c", 218);
     
     for(i=1; i<=65; i++)                    
        printf("%c",196);
     printf("%c", 191);
     
     for(i=1; i<=4; i++)
          printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
          
          
          
          
          
     printf("\n\t\t%c\t", 179);    
     printf("1.Inserir Express%co Infixa",198);
     printf("\t\t\t\t  %c", 179);
     
          
     printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
     printf("\n\t\t%c\t2.Inserir e Obter Valor da Posfixa\t\t\t  %c", 179,179);
     printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
     
     printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
     printf("\n\t\t%c\t3.Imprimir Posfixa\t\t\t\t\t  %c", 179,179);
     printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
  
     printf("\n\t\t%c\t4.Sair\t\t\t\t\t\t\t  %c", 179,179);
     
     
     
     
     /*desenho: fim*/
     for(i=1; i<=2; i++)
          printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
     
     printf("\n\t\t%c", 192);
     
     
     for(i=1; i<=65; i++)
        printf("%c",196);
     printf("%c", 217);
     
     
     
     
     printf("\n\t\t\tQual sua Op%c%co? ",135,198);
     fflush(stdin);
     scanf("%d", &opcao);
     
     return opcao;
     
     getch();
}



/*função menu: chama a função escolhida pelo usuário.*/
void menu(/*Pilha *p*/){
     
     int decisao;
     char *expressao=NULL;
     
     do{
         
       decisao = interface_opcao_menu();/*recebendo a escolha do usuário.*/
     
       switch(decisao){
                     
         case 1:
              
           system("cls"); 
           printf("\n\n");
           printf("\t\tMENU DE OP%c%cES %c ", 128, 229, 16);
           printf("Inserir Express%co Infixa", 198);
          // expressao = infixa();
           getch();
           break;
           
         case 2:
           
           system("cls");     
           //expressao = varredura(p, expressao);
           //imprime(expressao);
           getch();
           break;
           
         case 3:
              
           system("cls");     
           //calcular(p, expressao);
           getch();
           break;
           
         case 4:
           exit(1);/*aborta programa.*/
           break;    
           
         default:
              system("cls");
              printf("\n\n\n\n\n\n\n\n\n\n\n");
              printf("\t\t\t\t\t");
              printf("OP%c%cO INV%cLIDA!! ", 128, 199, 181);
              getch();
        }
        
     }while(decisao>=4 || decisao<=4);
}

main(){
     
      printf("\n\n");
     // printf("\t\tMENU DE OP%c%cES %c ", 128, 229, 16);
      //printf("Inserir Express%co Infixa", 198);
      //getch();
     menu();
     
}
