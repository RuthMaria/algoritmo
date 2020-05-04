/*
10)Escreva um algoritmo que leia três números e informe qual deles é o menor. 
Suponha que os números são distintos.
*/


#include<stdio.h>
#include<conio.h>

main(){
       int num1, num2, num3, menor;
       
       printf("\n Numeros: ");
       scanf("%d%d%d", &num1, &num2, &num3);
      
       menor = num1;
       if(menor > num2)
                menor = num2;
       
       if(menor > num3)
                menor = num3;
                
       printf("\n Menor: %d", menor);
       getch();
}
