/*
T�picos: [string, array, caractere, fun��o] 

Descri��o 
Diana escrever� uma lista com todos os inteiros positivos entre A e B, inclusive. Os inteiros n�o possuem zero � esquerda. 
Por�m, Diana ir� ser paga de acordo com a quantidade de d�gitos que ela ir� utilizar. Para isso, ela precisa saber quantas vezes ela utilizou 
cada um dos 10 d�gitos dos n�meros decimais. Por exemplo, se os inteiros dados foram 9 e 13, ent�o a lista ser�: 9, 10, 11, 12 e 13. 
Nesse caso, diana utilizou o d�gito 0 uma vez, o 1 cinco vezes, o 2 uma vez, o 3 uma vez e o 9 uma vez.

Formato de entrada 
Cada caso de teste � dado em uma �nica linha que cont�m dois inteiros A e B (1 <= A <= B <= 100000000). O �ltimo caso de teste � seguido por 
uma linha contendo dois zeros.

Formato de sa�da 
Para cada caso de teste, imprima uma �nica linha com 10 inteiros representando o n�mero de vezes que cada d�gito � usado ao escrever todos os 
inteiros entre A e B. Escreva a contagem de cada d�gito em ordem crescente do 0 at� o 9.
*/


#include <stdio.h>
//#include <conio.h>
#include <math.h>

main(){
       int num1, num2, i, j = 0, l = 0, m, quantidade[10]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
       
       char elemento[20] = "", aux;
       
       scanf("%d%d", &num1, &num2);       
      
       while ( num1 != 0 && num2 != 0){
            
             for ( i = num1; i <= num2; i++){
                   sprintf(elemento, "%d", i);
                   
                   for ( j = 0; j <strlen(elemento); j++){
                       switch(elemento[j]){
                                           
                          case '0':
                               quantidade[0]++;
                               break;
                          case '1':
                               quantidade[1]++;
                               break;
                          case '2':
                               quantidade[2]++;
                               break;
                          case '3':
                               quantidade[3]++;
                               break;
                          case '4':
                               quantidade[4]++;
                               break;
                          case '5':
                               quantidade[5]++;
                               break;
                          case '6':
                               quantidade[6]++;
                               break;
                          case '7':
                               quantidade[7]++;
                               break;
                          case '8':
                               quantidade[8]++;
                               break;
                          case '9':
                               quantidade[9]++;
                               break;
                       }
                 }
             }
             
             for ( j = 0; j < 10; j++){                            
                 
                 if (j == 9)
                       printf("%d\n", quantidade[j]);
                 else
                       printf("%d ", quantidade[j]);  
                 
                 quantidade[j] = 0;
             }
             
            
             
             scanf("%d%d", &num1, &num2); 
              //printf("%s\n", elemento);
       }
              
      // getch();
}
