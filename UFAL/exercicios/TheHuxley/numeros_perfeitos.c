/*Descri��o
Um n�mero inteiro � dito perfeito se o dobro dele � igual � soma de todos os seus divisores.
Por exemplo, como os divisores de 6 s�o 1, 2, 3 e 6 e 1 + 2 + 3 + 6 = 12, 6 � perfeito.
A matem�tica ainda n�o sabe se a quantidade de n�meros perfeitos � ou n�o finita. Escreva um programa que liste todos os n�meros perfeitos
menores que um inteiro n dado.

Formato de entrada
Um inteiro n.

Formato de sa�da
Um lista de n�meros inteiros perfeitos em ordem crescente separados por um final de linha.
*/

#include<stdio.h>

main(){
       int num, i, j, cont;

       scanf("%d", &num);

       for(i = 2; i<num; i++){
            cont = 0;
            for(j = 1; j<i; j++){
                if(i%j == 0)
                     cont+= j;
             }

            if(cont == i)
                    printf("%d\n", i);
       }
}
