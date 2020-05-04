/*
Descri��o
A sequ�ncia de Fibonacci � definida pela seguinte sequ�ncia: 0 1 1 2 3 5 8 13 21... Em que cada termo da sequ�ncia � obtido somando os dois 
termos anteriores.
Escreva um programa que imprima os n primeiros termos da sequ�ncia dos n�meros Fibonacci.

Formato de entrada
Um n�mero inteiro n indicando a quantidade de termos da sequ�ncia de fibonacci a serem impressos. Onde: 0<=n <=47.
A entrada termina quando n=0

Formato de sa�da
A sequ�ncia de termos da s�rie fibonacci. Cada termo � separado por um espa�o.
Depois do �ltimo termo n�o deve existir espa�o.

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
