/*Descrição 
Escreva um programa que leia 2 valores X e Y e que imprima todos os valores entre eles cujo resto da divisão dele por 5 for igual a 2 ou 
igual a 3.

Formato de entrada 
Contém 2 valores inteiros quaisquer, não necessariamente em ordem crescente.

Formato de saída 
Todos os inteiros entre x e y, um por linha, em ordem crescente, que satisfazem o enunciado deste problema.*/



#include <stdio.h>
//#include <conio.h>


main(){
       int num1, num2, i;
       
       scanf("%d%d",  &num1, &num2);
       
       if ( num2 > num1){
           for ( i = num1-1; i < num2 ; i++){
               if ( i % 5 == 2 || i % 5 == 3)
                   printf("%d\n", i);   
           }         
       }   
       else{
             for ( i = num2-1; i < num1 ; i++){
               if ( i % 5 == 2 || i % 5 == 3)
                   printf("%d\n", i);   
           }         
       }
                        
      // getch();
}
