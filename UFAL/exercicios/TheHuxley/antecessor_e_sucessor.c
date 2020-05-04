/*
Descrição
Faça um programa que leia um número inteiro e imprima o seu antecessor (inteiro anterior) e o seu sucessor (inteiro posterior).

Formato de entrada
Um número inteiro.

Formato de saída
O inteiro anterior e o sucessor, separados por um espaço.*/

#include <stdio.h>

main() {
       int num;
       
       scanf("%d", &num);
       
       printf("%d %d\n", num-1, num+1);       
}
