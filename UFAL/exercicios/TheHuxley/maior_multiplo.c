/*
Descri��o
Seu objetivo � determinar o maior m�ltiplo de um inteiro dado menor do que ou igual a um outro inteiro dado

Formato de entrada
Consiste de dois inteiros positivos M e N.

Formato de sa�da
A sa�da consiste do maior n�mero que seja m�ltiplo de M e menor que N, se n�o houver um m�ltiplo de M menor que N voc� deve imprimir
 "sem multiplos menores que N", sem as aspas, onde N deve ser substitu�do pelo valor de entrada N.*/

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
