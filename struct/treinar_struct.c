#include<stdio.h>
#include<conio.h>



typedef struct
{
        char nome[50];
        char endereco[80];
        char profissao[50];
        char nascimento [10];
        int conta;
        float valor_conta;
}reg;

reg* inserir (reg *g, int tam){
      int i;
        for(i = 0; i<tam; i++){
              scanf("%d",  &g[i]->conta);
        }
        
        return g;
     
}
main(){
       reg r[2], *g;
       
       g = inserir (&r, 2);
       
       for(i = 0; i<tam; i++){
              printf("%d",  g.conta);
       }
       
       getch();
}
