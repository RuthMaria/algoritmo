/*Descri��o
Crie um programa que gerencie a sa�da de notas em um caixa eletr�nico.
Recebendo a quantia, seu programa deve dizer quantas de cada nota devem ser retiradas. Utilize o crit�rio da "distribui��o �tima", ou seja, o 
menor n�mero poss�vel de c�dulas. O caixa tem c�dulas de R$50, R$20, R$10, R$5 e R$1.

Formato de entrada
Um inteiro n representando a quantia a ser sacada

Formato de sa�da
Notas de 50: X
Notas de 20: Y
Notas de 10: Z
Notas de 5: W
Notas de 1: K
onde X, Y, Z, W e K devem ser substitu�dos por n�meros inteiros que correspondem a quantidade de notas*/

#include <stdio.h>
//#include <conio.h>

main(){
       int array[] = {50, 20, 10, 5, 1}, saque, i, array2[] = {0, 0, 0, 0, 0}, aux = 0, j;       
       
       scanf("%d", &saque);

       for (i = 0; i < 5; i++){
              if ( (saque / array[i]) != 0){   
                   if (saque != 0){
                       array2[i] += saque / array[i];
                       saque -= array[i] * (saque / array[i]);
                   }
                   else                     
                       break;
             }
       }
       
       printf ("Notas de 50: %d\n", array2[0]);
       printf ("Notas de 20: %d\n", array2[1]);
       printf ("Notas de 10: %d\n", array2[2]);
       printf ("Notas de 5: %d\n", array2[3]);
       printf ("Notas de 1: %d\n", array2[4]);

       //getch();
}
