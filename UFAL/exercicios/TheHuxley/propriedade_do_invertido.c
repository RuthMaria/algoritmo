/*
Descrição
Faça um programa que imprima todos os números (inteiros e positivos) entre x e y que satisfaçam as duas condições abaixo:
- não terminem em 0;
- se o dígito da direita for removido, o número restante é divisor do original.

Formato de entrada
Dois inteiros x e y, separados por um espaço. Onde: x>=10 e y<100.

Formato de saída
Os números inteiros (maiores ou iguais a x e menores ou iguais a y) que satisfazem as propriedades acima, separados por um final de linha.*/

#include <stdio.h>

main(){
       int num1, num2, i;
       
       scanf("%d %d", &num1, &num2);
       
       if ( num1 >= 10 && num2 < 100){
           for (i = num1; i <= num2; i++){
                 if ( (i % 10) != 0 && (i % (i / 10) == 0))
                       printf("%d\n", i);                      
            }
       }
}
