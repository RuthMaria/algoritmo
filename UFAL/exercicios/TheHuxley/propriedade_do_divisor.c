/*
Descrição

Dado um número inteiro 10<=n<=100, faça um programa que imprima SIM caso ele satisfaça as propriedades abaixo ou NAO, caso contrário:

Não termina em zero;
Se o dígito da direita for removido, o número restante é divisor do número original.

Formato de entrada
Um número inteiro entre 10 e 100.

Formato de saída
SIM caso o número satisfaça as propriedades ou NAO, caso contrário.
*/

#include<stdio.h>

main(){
      int num;

      scanf("%d", &num);

      if(10 <= num && num <= 100){
           if(num%10 != 0 && num%(num/10) == 0)
                  printf("SIM");
            else
                  printf("NAO");
      }

}
