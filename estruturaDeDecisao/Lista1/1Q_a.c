/*
a.Verificar se um n�mero inteiro lido � par;
*/

#include<stdio.h>
#include<conio.h>

main(){
       int num;
       
       printf("\n Numero: ");
       scanf("%d", &num);
       
       if(num%2 == 0)
               printf("\n O numero eh par \n");
               
       else
               printf("\n O nuamero eh impar \n");
       
       getch();
}
