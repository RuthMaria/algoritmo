/*Descri��o
Dados 04 n�meros inteiros, calcule o produto entre eles caso os 04 n�meros digitados sejam n�meros primos.
Se algum deles n�o for primo, imprima: SEM PRODUTO

Formato de entrada
4 n�meros inteiros

Formato de sa�da
O resultado da multiplica��o entre eles, caso os 04 sejam primos ou SEM PRODUTO, caso contr�rio.*/


#include<stdio.h>
#include<conio.h>

main(){
       int i, num[4], j, result = 1, cont = 0;

       for(i = 0; i<4; i++){
             scanf("%d", &num[i]);
             result *= num[i];
       }

       for(i = 0; i<4; i++){
             if(num[i] == 0)
                   cont = 1;

             if(num[i] == 2)
                   cont = 0;

             for(j = 2; j < num[i]; j++){
                   
                 if(num[i] % j == 0)
                          cont = 1;
                          
                          break;
            }

       }

       if(cont == 1)
              printf("SEM PRODUTO");

       else
              printf("%d", result);
getch();

}
