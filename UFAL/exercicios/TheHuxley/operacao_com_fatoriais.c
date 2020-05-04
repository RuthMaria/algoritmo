/*Descrição

Formato de entrada
Um inteiro x correspondente ao X da equação e um inteiro n indicando a
quantidade de termos da série, a entrada termina quando x = 0 e n = 0.

Formato de saída
Um número de ponto flutuante formatado com seis casas decimais.*/

#include <stdio.h>
//#include <conio.h>

double fat (int num){
     int i;
     double fatorial = 1;
     
     for ( i = 1; i <= num; i++)
           fatorial *= i;
           
     return fatorial;
}

main(){
       int i;
       double x, quant, k, l;
       double soma, potencia, fat0;
       
       for ( ; ; ){
           
           scanf ("%lf%lf", &x, &quant);
           
           l = 0;
           k = 3;
           
           soma = 0.00;
           
           if ( x == 0 && quant == 0)
                   exit (1);
       
           for ( i = 0; i < quant; i++ ){
               
               potencia = pow (x, l);
               fat0 = fat(k);
                  
               if (i == 0)
                   soma += x;
                 
               else if (i % 2 != 0){
                   soma -= (potencia / fat0);
                   k += 2;
               }
                   
                   else{
                        soma += (potencia / fat0);
                        k += 2;
                   }
                   
               l += 2;               
          }
          
          printf ("%.6lf\n", soma);
       }
      // getch();
}
