/*
Descri��o
Fa�a um programa que leia um n�mero inteiro e imprima o seu antecessor (inteiro anterior) e o seu sucessor (inteiro posterior).

Formato de entrada
Um n�mero inteiro.

Formato de sa�da
O inteiro anterior e o sucessor, separados por um espa�o.*/

#include <stdio.h>

main() {
       int num;
       
       scanf("%d", &num);
       
       printf("%d %d\n", num-1, num+1);       
}
