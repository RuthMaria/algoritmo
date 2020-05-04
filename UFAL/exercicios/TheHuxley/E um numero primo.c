/*
Descrição
Faça um programa que dado um número indique se ele é um primo ou não. 

Formato de entrada
Você irá receber uma sequência de números separados por um final de linha. A entrada termina quando o número lido for -1.

Formato de saída
Para cada número lido você deve imprimir 0 caso o número não seja primo ou 1 caso seja.
Depois de cada 0 ou 1 impresso, coloque um final de linha.

*/

#include <stdio.h>

main(){
       int num, i, quant;
       
       scanf("%d", &num);
       
       while( num != -1 ){
          quant = 1;
          
          for( i = 2; i <= num; i++ ){
              if ( num % i == 0 ){
                  // printf("%d ", i);
                   quant++;
              }
              
          }
           //printf("\n");
          if ( quant == 2 )
                 printf("1\n");
                 
          else
                 printf("0\n");
                 
          scanf("%d", &num);
       }          
}
