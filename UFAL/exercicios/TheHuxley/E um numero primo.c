/*
Descri��o
Fa�a um programa que dado um n�mero indique se ele � um primo ou n�o. 

Formato de entrada
Voc� ir� receber uma sequ�ncia de n�meros separados por um final de linha. A entrada termina quando o n�mero lido for -1.

Formato de sa�da
Para cada n�mero lido voc� deve imprimir 0 caso o n�mero n�o seja primo ou 1 caso seja.
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
