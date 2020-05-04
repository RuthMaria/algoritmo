/*
3) Escreva um algoritmo que receba um número e informe se ele é divisível por 3 e por 7;
*/

#include<stdio.h>
#include<conio.h>

main(){
       int num;
       
       printf("\n numero: ");
       scanf("%d", &num);
       
       if(num%3 == 0 && num%7 == 0)
                  printf("\n Eh divisivel por 3 e por 7 \n");
               
       else
               printf("\n Nao eh divisivel por 3 e por 7 \n");
       
       getch();
}
