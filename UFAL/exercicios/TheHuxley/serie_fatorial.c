/*Descrição
Faça um programa que calcule e escreva a soma dos n primeiros termos da série:

Formato de entrada
Um inteiro n indicando a quantidade de termos da série

Formato de saída
Um número de ponto flutuante formatado com duas casas decimais, seguido de
um final de linha.*/

#include <stdio.h>
//#include <conio.h>

int fatorial (int i){
      int j, fat = 1;
      
      for(j = 1; j <= i; j++){
                fat *= j;
      }
      
      return fat;
}

main(){
       
       int num, i, j;
       float k = 1.00;
       float result = 0.00;
       int fat;


       scanf("%d", &num);

       if(num == 0){
             printf("%.2f\n", 1);
             exit(1);
       }

       for(i = 1; i <= num; i++){
             
             fat = fatorial (i);
            
             if (i % 2 == 0) {
                    result -= (fat / k);
                    
             } else {
                    result += (fat / k);
             }

             k = (k * 2) + 1;
     }

     printf("%.2f\n", result);

     //getch();
}
