/*
b)Ler um número e mostrar a tabuada do mesmo;
*/
#include<stdio.h>
#include<stdlib.h>

main(){
       int num, i;
       
       printf("\n Numero: ");
       scanf("%d", &num);
       
       printf("\n\n TABUADA \n\n");
       for(i = 0; i<9; i++)
                   printf("\n %d x %d = %d", num, i, num*i);

       getch();
}
