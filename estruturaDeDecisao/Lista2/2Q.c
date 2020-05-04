/*
2. Escrever um algoritmo para ler cinco valores inteiros e escrever na tela o maior e
o menor deles. Considere que todos os valores são diferentes.

*/

#include<stdio.h>
#include<stdlib.h>

main(){
       int a, b, c, d , e, maior, menor;
       
       printf("\n Numeros: ");
       scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
       
       maior = a;
       menor = a;
       
       if(b > maior)
                maior = b;
                
       if(c > maior)
                maior = c;
                
       if(d > maior)
                maior = d;
                
       if(e > maior)
                maior = e;
                
                
       if(b < menor)
                menor = b;
                
       if(c < menor)
                menor = c;
                
       if(d < menor)
                menor = d;
                
       if(e < menor)
                menor = e;
                
       printf("\n Maior: %d", maior);
       printf("\n Menor: %d", menor);
       
       getch();
}
