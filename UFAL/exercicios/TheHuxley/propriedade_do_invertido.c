/*
Descri��o
Fa�a um programa que imprima todos os n�meros (inteiros e positivos) entre x e y que satisfa�am as duas condi��es abaixo:
- n�o terminem em 0;
- se o d�gito da direita for removido, o n�mero restante � divisor do original.

Formato de entrada
Dois inteiros x e y, separados por um espa�o. Onde: x>=10 e y<100.

Formato de sa�da
Os n�meros inteiros (maiores ou iguais a x e menores ou iguais a y) que satisfazem as propriedades acima, separados por um final de linha.*/

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
