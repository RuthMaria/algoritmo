/*Descri��o
 Ache a soma de todos n�meros naturais m�ltiplos de 3 e 5 menores que n.
 
Formato de entrada
Um n�mero inteiro n.

Formato de sa�da
 A soma de todos os n�meros naturais m�ltiplos de 3 e 5 menores que n, com uma quebra de linha.*/
 
#include <stdio.h>
//#include <conio.h>

main(){
       int num, i, soma = 0;
       
       scanf("%d", &num);
       
       for( i = 1; i < num; i++){
            if ( ( i % 3 == 0) || ( i % 5 == 0) )
                  soma += i;
       }
       
       printf("%d\n", soma);
       
       //getch();
       
}
 
 
