/*
d.Determinar o maior de tr�s n�meros dados.
*/

#include<stdio.h>
#include<conio.h>

main(){
       int num1, num2, num3, maior;
       
       printf("\n 3 Numero: ");
       scanf("%d%d%d", &num1, &num2, &num3);
       
       maior = num1;
       
       if(num2 > maior)
                maior = num2;
              
       if(num3 > maior)
                maior = num3;
                
       printf("\n o maior eh: %d", maior);
       
                
       getch();
}
       
       
