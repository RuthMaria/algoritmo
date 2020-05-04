/*
c)Uma loja utiliza o codigo V para transacoes a vista e P para transacoes a prazo. Faca um programa 
que receba o codigo e o valor de 15 transacoes, calcule e mostre:
o valor total das compras a vista;
o valor total das compras a prazo;
o valor total das compras efetuadas;
*/


#include<stdio.h>
#include<stdlib.h>

main(){
       int i;
       char cod;
       float valor, valor_vista = 0.0, valor_prazo = 0.0;
       
       for(i = 0; i<3; i++){
              printf("\n codigo V ou P: ");
              fflush(stdin);
              scanf("%c", &cod);
              
              printf("\nvalor da transacao: ");
              scanf("%f", &valor);
       
              if(cod == 'v' || cod == 'V')
                          valor_vista+= valor;
                      
              if(cod == 'p' || cod == 'P')
                          valor_prazo+= valor;
       }
       
       printf("\n A Prazo: %.2f \n", valor_prazo);
       printf(" A vista: %.2f \n", valor_vista);
       printf(" Total: %.2f \n", valor_prazo+valor_vista);

       getch();
}
