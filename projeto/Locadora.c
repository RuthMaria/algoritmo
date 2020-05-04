/*Mayara e Marcos Fernando*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define MAX 150
#define MAXC 50
#define MIN 10
struct carro
{
  char nome[MAX][MAXC];
  int matricula[MAX];
  int ano[MAX];
  int modelo[MAX];
  char cor[MAX][MIN];
};
struct cliente
{
  char nome[MAX][MAXC];
  int matricula[MAX];
  char sexo[MAX];
  int cnh[MAX];//carteira nacional de habilitação
  int rg[MAX];
  int cpf[MAX];
  int idade[MAX];
};               
main()
{
      int i=0, j=0, data_devo[MAX][MIN], data_loc[MAX][MIN], cli_car[MAX][2], opcao;
      struct carro car;
      struct cliente cli;
      
      system("color 4f");
      
      do
      {
         system("cls"); 
	     system("color 4f");
		 printf("\t\t\n\t\t\t\t  Bem Vindo ao SGLC\t\t\n\t\t\t\t--------------------\n      \t\t\tSistema Gerenciador de Locacao de Veiculos\n");
		 printf("\t\t     ----------------------------------------------\n");
	     printf("\n\t________________________________________________________");
	     printf("_____\n\t|\t\t\t\t\t\t\t    |\n\t|\t\t\t\t\t\t\t    |\n\t|\t\t\t\t Men");
	     printf("u\t\t\t    |\n\t|\t\t\t\t\t\t\t    |\n\t|\t\t\t\t\t\t\t    |\n\t|\t\t");
	     printf("1. Adicionar Veiculo \t\t\t    |\n\t|\t\t\t\t\t\t\t    |\n\t|\t\t2. Adicionar Cliente");
	     printf("\t\t\t    |\n\t|\t\t\t\t\t\t\t    |\n\t|\t\t3. Locacoes");
	     printf("\t\t\t\t    |\n\t|\t\t\t\t\t\t\t    |\n\t|\t\t4. Devolucoes    \t\t\t    |    \n");
	     printf("        |\t\t\t\t\t\t\t    |\n\t|\t\t5.Creditos    \t\t\t\t    |\n\t|\t\t\t\t\t\t\t    |\n\t|\t\t6. Sair   \t\t\t\t  |    _ \t  \t|___________");
	     printf("________________________________________________|\t|");
         fflush  (stdin);
         scanf("%d",&opcao);
         switch(opcao)
         {
                            case 1://Adicionar Veículo:
                                   system  ("color f0");
                                   system  ("cls");
                                   
                                   printf  ("Digite o Codigo do Carro:\n");
                                   fflush  (stdin);
                                   scanf   ("%d",&car.matricula[j]); 
                                                                    
                                   printf  ("Digite o Nome do Carro:\n");
                                   fflush  (stdin);
                                   scanf   ("%s",car.nome[j]);
                                   
                                   printf  ("Digite a Cor do Carro:\n");
                                   fflush  (stdin);
                                   scanf   ("%s",car.cor[j]);
                                  
                                   printf  ("Digite o Ano de Fabricacao:\n");
                                   fflush  (stdin);
                                   scanf   ("%d",&car.ano[j]);
                                   
                                   printf  ("Digite o Modelo do Carro:\n");
                                   fflush  (stdin);
                                   scanf   ("&d",&car.modelo[j]);
                                   
                                   getch();
                                   j++;//contador
                                   break;
                            case 2://Adicionar Cliente:
                                   system ("color f1");
                                   system ("cls");
                                   j=0;
                                   
                                   printf   ("Digite a idade do Cliente:\n");
                                   fflush   (stdin);
                                   scanf    ("%d",&cli.idade[j]);
                                   
                                   if(cli.idade[j]>=18)
                                   {
                                                           printf  ("Digite o Codigo do Cliente:\n"); 
                                                           fflush  (stdin);
                                                           scanf   ("%d", &cli.matricula[j]);
                                                          
                                                           printf  ("Digite o Nome do Cliente:\n"); 
                                                           fflush  (stdin);
                                                           gets(cli.nome[j]);
                                                          
                                                           printf  ("Digite o Sexo do Cliente:\n");
                                                           fflush  (stdin);
                                                           scanf   ("%c", &cli.sexo[j]);
                                                           
                                                           printf  ("Digite o Numero da CNH do Cliente:\n");
                                                           fflush  (stdin);
                                                           scanf   ("%d", &cli.cnh[j]);//CNH=Carteira Nacional de Habilitação(carteira de motorista)
                                                           
                                                           printf  ("Digite o Numero do CPF do Cliente:\n");
                                                           fflush  (stdin);
                                                           scanf   ("%d", &cli.cpf[j]);
                                                           
                                                           printf  ("Digite o RG do Cliente:\n");
                                                           fflush  (stdin);
                                                           scanf   ("%d", &cli.rg[j]);
      
                                   }
                                   else
                                       printf("Voce Nao Tem Idade Para Alugar Um Carro. Volte Quando For de Maior!\n");
                                   j++;
                                   getch();
                                   break;
                            case 3://Locações:
                                   system ("color f2");
                                   system ("cls");
                                   
                                   do{
                                          data_loc[i][2]='/';
                                          data_loc[i][5]='/';
                                      
                                          if(data_loc[i][j]!='/')
                                          {
                                                           printf("Digite a data da Locacao:\n");
                                                           fflush  (stdin);
                                                           scanf("%d", &data_loc[i][j]);
                                          }
                                          else
                                              j++;
                                   }while(j<10);
                                   getch();
                                   break;
                            case 4://Devoluções:
                                   system ("color f3");
                                   system("cls");
                                   data_devo[i][2]='/';
                                   data_devo[i][5]='/';
                                   getch();
                                   break;
                            case 5://Créditos
                                   system ("color f4");
                                   system("cls");
                                   printf("\n\n\n\n\n\n\n\n\n\tEsse Software Foi Desenvolvido em C por Marcos Fortes & Mayara Rysia.\n\n");
                                   getch();
                                   break;
                            case 6://Saída
                                   system("color 4e");
                                   system("cls");
                                   printf("\n\n\n\n\n\n\n\n\n\t\tAgradecemos a Preferencia. Ate a Proxima.\n\n\n\n\n");
                                   getch();
                                   exit(0);
                                   break;
                            default:
                                    system ("color 5f");
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\n\t\t\aOpcao Invalida. Digite uma Opcao Dada Acima.");
                                    getch();
                                    break;
         }
      
      }
      while(opcao>=6 || opcao<=6);
      getch();
}
