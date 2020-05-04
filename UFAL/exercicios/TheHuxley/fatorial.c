/*Descrição 
Calcule os fatoriais de uma sequência de números dada.

Formato de entrada 
O programa receberá uma sequência de inteiros n, onde 0<=n<=12.
O programa encerra a sua execução quando o número n dado for -1.

Formato de saída 
Para cada n, deve-se imprimir um inteiro k seguido de um final de linha, correspondendo ao fatorial.*/

#include<stdio.h>

main(){
       int num, i, result = 1;;
       
       do{
          result = 1;
          scanf("%d", &num);
          
          if(0 <= num && num <= 12){
               for(i = 1; i<= num; i++)
                     result *= i; 
                     
               printf("%d\n", result);
          }                
       
       }while (num != -1);       
}
