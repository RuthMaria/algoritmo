/*
Descrição
A sequência de Fibonacci é definida pela seguinte sequência: 0 1 1 2 3 5 8 13 21... Em que cada termo da sequência é obtido somando os dois 
termos anteriores.
Escreva um programa que imprima os n primeiros termos da sequência dos números Fibonacci.

Formato de entrada
Um número inteiro n indicando a quantidade de termos da sequência de fibonacci a serem impressos. Onde: 0<=n <=47.
A entrada termina quando n=0

Formato de saída
A sequência de termos da série fibonacci. Cada termo é separado por um espaço.
Depois do último termo não deve existir espaço.

*/


#include <stdio.h>
//#include <conio.h>

main(){
       int n, result = 0, i, b, a;
        
        for(;;){
           scanf("%d", &n);
           result = 0;
           b = 1, a = 0;
           
           if(n == 0)
               exit(1);
               
           if(0 <= n && n <= 47){    
                  for(i = 0; i < n; i++){
                        if( i < 2 ){
                              result += i;
                              if(i == n-1)
                                      printf("%d\n", result);
                              else  
                                      printf("%d ", result);
                              
                        }
                              
                        else{
                              result = a + b;
                              a = b;
                              b = result;
                              
                              if(i == n-1)
                                     printf("%d\n", result);
                              
                              else
                                     printf("%d ", result);
                        }
                            
                   } 
           }
        }
       
       
      // getch();
}
