/*
Descrição
Seu objetivo é determinar o maior múltiplo de um inteiro dado menor do que ou igual a um outro inteiro dado

Formato de entrada
Consiste de dois inteiros positivos M e N.

Formato de saída
A saída consiste do maior número que seja múltiplo de M e menor que N, se não houver um múltiplo de M menor que N você deve imprimir
 "sem multiplos menores que N", sem as aspas, onde N deve ser substituído pelo valor de entrada N.*/

#include <stdio.h>
//#include <conio.h>

main(){
       int num1, num2, maior = 0, i;
       
       scanf("%d%d", &num1, &num2);
              
       for( i = 1; i <= num2; i++){              
                if((i % num1 == 0) && i <= num2){
                         maior = i; 
                }                             
       }
            
       if (maior == 0)
                printf("sem multiplos menores que %d\n", num2);
       else
                printf("%d\n", maior);
            
      
       
      // getch();
}
