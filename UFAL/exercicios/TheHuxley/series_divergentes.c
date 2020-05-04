/*Descri��o 
A s�rie harm�nica � divergente:

Isto significa que dado qualquer real k existe n0 tal que:

Por exemplo se k = 2, o programa deve fornecer n0 = 4, pois
  e 
 
Ps.: Aten��o, cuidado com problemas de precis�o do ponto flutuante. Procure usar o tipo de dados com maior precis�o.
Formato de entrada 
O programa receber� uma sequ�ncia de inteiros k, onde k <=15
O programa encerra a sua execu��o quando o n�mero k dado for -1
Formato de sa�da 
Para cada k, deve-se imprimir um inteiro n seguido de um final de linha, correspondendo ao n0 descrito acima*/

#include<stdio.h>
#include<conio.h>

main(){
       int k;
       float result = 1.00, i;
       
       do{
          scanf("%d", &k);
          
          if(k <= 15 && k != -1){
               i = 2.00;
               do{
                     result += 1.00/i;
                     i++;
               }while(result < k);
               if(k == 0)
                     printf("%.0f\n", i-2);
               else
                     printf("%.0f\n", i-1);
          }       
         
          result = 1.00;
          
       }while(k != -1);
 getch();
 }
