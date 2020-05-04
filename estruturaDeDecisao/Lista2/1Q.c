/*
1. Escrever um algoritmo para ler um valor inteiro e verificar se este valor é par ou
impar.
*/

#include<stdio.h>
#include<stdlib.h>

main(){
       int num;
       
       printf("\n Numero: ");
       scanf("%d", &num);
       
       if(num%2 == 0)
                printf("\n Par");
                
       else
                printf("\n Impar"); 
                
       getch();
}
