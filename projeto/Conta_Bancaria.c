#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<conio.h>

struct cadat
{
        char nome[50];
        char endereco[80];
        char profissao[50];
        char nascimento [10];
        int conta;
        float valor_conta;
};
     
typedef struct cadat cadastro;

int cont;
     
void cadastra(cadastro *cad)
{        
    system("cls");
    printf ("\nCADASTRO\n\n");
    
    fflush(stdin);
    printf ("\nNome: ");
    gets(cad->nome);
    
    fflush(stdin);
    printf ("\nEndereco: ");
    gets(cad->endereco);
    
    fflush(stdin);
    printf ("\nProfissao: ");
    gets(cad->profissao);
    
    fflush(stdin);
    printf ("\nNascimento: ");
    gets(cad->nascimento);
    
    printf ("\nNumero da conta: ");
    scanf("%d", &cad->conta);
    fflush(stdin);
    
    fflush(stdout);
    
    cont++;    
}

void depositar(cadastro *cad)
{   
    system("cls");
    float valor;
    int contaa;
    
    printf ("\nDEPOSITO\n\n");
    fflush(stdin);
    printf ("\nNumero da Conta: ");
    scanf("%d", &contaa);
    
    if(contaa == cad->conta)
    {
              printf("\nValor do deposito: ");
              scanf("%f",&valor);
    }
    else
    {
        printf ("\nNumero da Conta Inexistente.\n");
        getche ();
    }
    cad->valor_conta += valor;
    fflush(stdin);
}

void sacar(cadastro *cad)
{
     int conta;
     float saque;
     system("cls");
     printf ("\nSACAR\n\n");
     printf ("\nNumero da Conta: ");
     scanf("%d", &conta);
     
     if(conta == cad->conta)
     {
              printf("\nValor do saque: ");
              scanf("%f",&saque);
     }
     
     else
     {
        printf ("\nNumero da Conta Inexistente.\n");
        getche ();
     }
     
     cad->valor_conta -= saque;
}

void imprimir(cadastro cad)
{
     
     system("cls");
     if(cont >= 1)
     {
             printf ("\nIMPRESSAO\n\n");
             printf ("\nNome: %s", cad.nome);
             printf ("\nEndereco: %s", cad.endereco);
             printf ("\nProfissao: %s", cad.profissao);
             printf ("\nNascimento: %s", cad.nascimento);
             printf ("\nNumero da conta: %d", cad.conta);
             printf ("\nValor da conta: %.1f", cad.valor_conta);
     }
     else
     {
         printf ("\nCadastro Inexistente.\n");
     }
     
     getche();
     fflush(stdout);
}

    
main()
{
       
        cadastro *var;
        int op;
        while(op != 5)
        {
                 
                 system("cls");
                 printf("O que voce deseja fazer?\n\n1- Criar Conta\n2- Depositar\n3- Sacar\n4- Imprimir\n5- Sair\n\n\n");
                 scanf("%d", &op);
                 switch (op)
                 {
                        case 1:
                             cadastra(var);
                             break;
                        
                        case 2:
                             depositar(var);
                             break;
                        
                        case 3:
                             sacar(var);
                             break;
                        
                        case 4:
                            // imprimir(var);
                             break;
                        
                        case 5:
                             fflush(stdout);
                             system("cls");
                 }
        }
                         
       
       printf("\n\n");
       system("pause");
}
