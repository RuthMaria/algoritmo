/*Descrição
 Ache a soma de todos números naturais múltiplos de 3 e 5 menores que n.
 
Formato de entrada
Um número inteiro n.

Formato de saída
 A soma de todos os números naturais múltiplos de 3 e 5 menores que n, com uma quebra de linha.*/
 
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
 
 
