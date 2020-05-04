/*Descrição
Um número inteiro é dito perfeito se o dobro dele é igual à soma de todos os seus divisores.
Por exemplo, como os divisores de 6 são 1, 2, 3 e 6 e 1 + 2 + 3 + 6 = 12, 6 é perfeito.
A matemática ainda não sabe se a quantidade de números perfeitos é ou não finita. Escreva um programa que liste todos os números perfeitos
menores que um inteiro n dado.

Formato de entrada
Um inteiro n.

Formato de saída
Um lista de números inteiros perfeitos em ordem crescente separados por um final de linha.
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
