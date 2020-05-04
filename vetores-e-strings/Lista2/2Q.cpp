/*2.Fazer um programa que leia 20 elementos de um vetor A. Construir um vetor B do mesmo tipo, 
observando a seguinte lei de formação: "Todo o elemento de B deverá ser o quadrado do elemento 
correspondente de A". No final imprimir o vetor A e B.
*/

#include<stdio.h>                   
#include<conio.h>
#include<math.h>

main(){                            
       int a[3], b[3], i;
       
       printf("\n  Vetor A\n");
       for(i = 0; i<3; i++)
            scanf("%d",&a[i]);
         
       printf("\n Vetor  B \n"); 
       for (i = 0; i<3; i++){
            b[i] = pow(a[i], 2);
            printf("%d\n", b[i]);
       }
        
             
       getch();
       } 
       
       
