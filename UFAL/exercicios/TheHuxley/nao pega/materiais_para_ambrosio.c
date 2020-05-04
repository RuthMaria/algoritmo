/*Descrição
Ambrósio está prosperando e agora ele precisa comprar materiais para ampliar a sua mercearia, ele fez uma lista com os itens que ele deve 
comprar. No entanto ele não dispõe de dinheiro suficiente para comprar todos os itens da lista de uma vez, então ele pediu a sua ajuda para 
comprar o maior número de itens da lista.
Escreva um programa que dada a lista de materiais, retorne quais itens Ambrósio deve comprar para obter o maior número de itens da lista 
sobrando o máximo de dinheiro possível.

Formato de entrada
A primeira linha da entrada contem um número de ponto flutuante D, que representa o dinheiro que Ambrósio dispõe, na segunda linha há um 
inteiro positivo N < 100 contendo o número de itens da lista, cada uma das N linhas seguintes contém o nome do produto( com menos de 25 caracteres) seguido por um espaço em branco e o preço do produto.

Formato de saída
A saída deve imprimir uma nova lista em ordem alfabética contendo os produtos que ambrósio deve comprar seguido de seus respectivos preços, a 
última linha deve imprimir o troco que ambrósio vai receber.*/

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
