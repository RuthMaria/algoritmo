/*
b.Verificar se um número inteiro lido é divisível por 3 e por 5;
*/

#include<stdio.h>
#include<conio.h>

main(){
       int num;
       
       printf("\n numero: ");
       scanf("%d", &num);
       
       if(num%3 == 0 && num%5 == 0)
                  printf("\n Eh divisivel por 3 e por 5 \n");
               
       else
               printf("\n Nao eh divisivel por 3 e por 5 \n");
       
       getch();
}
