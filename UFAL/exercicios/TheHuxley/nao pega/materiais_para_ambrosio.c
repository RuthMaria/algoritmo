/*Descri��o
Ambr�sio est� prosperando e agora ele precisa comprar materiais para ampliar a sua mercearia, ele fez uma lista com os itens que ele deve 
comprar. No entanto ele n�o disp�e de dinheiro suficiente para comprar todos os itens da lista de uma vez, ent�o ele pediu a sua ajuda para 
comprar o maior n�mero de itens da lista.
Escreva um programa que dada a lista de materiais, retorne quais itens Ambr�sio deve comprar para obter o maior n�mero de itens da lista 
sobrando o m�ximo de dinheiro poss�vel.

Formato de entrada
A primeira linha da entrada contem um n�mero de ponto flutuante D, que representa o dinheiro que Ambr�sio disp�e, na segunda linha h� um 
inteiro positivo N < 100 contendo o n�mero de itens da lista, cada uma das N linhas seguintes cont�m o nome do produto( com menos de 25 caracteres) seguido por um espa�o em branco e o pre�o do produto.

Formato de sa�da
A sa�da deve imprimir uma nova lista em ordem alfab�tica contendo os produtos que ambr�sio deve comprar seguido de seus respectivos pre�os, a 
�ltima linha deve imprimir o troco que ambr�sio vai receber.*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

main (){
     double dinheiro;
     int quant_produtos, i;
     
     scanf("%lf%d", &dinheiro, &quant_produtos); 
     
     char produtos[quant_produtos][40];
     long long int preco[quant_produtos];
     
     for( i = 0; i < quant_produtos; i++){
          fflush(stdin);
          gets(produtos[i]);
          fflush(stdin);
          scanf("%d", &preco[i]);    
          
              printf("[%d]%s %d\n", i, produtos[i], preco[i]); 
     }
     
      for( i = 0; i < quant_produtos; i++)
              printf("[%d]%s %d\n", i, produtos[i], preco[i]);
     
     getch();
}
