/*
f)Calcular a soma da seguinte s�rie de 100 termos:
1 � 1/2 + 1/4 - 1/6 + 1/8 �1/10 + 1/12...
*/

#include<stdio.h>
#include<stdlib.h>

main(){
       float s = 0.0;
       int num = 1, den = 1, i;
       
       for(i = 0; i<10; i++){
             if(den%2 == 0){

                     printf("%d/%d \n", -1*num, den);
                     s+= num/den;
                     den+= 2;
                     
             }
             
             else{
                     printf("%d\n", num);
                     s+= num/den;
                     den++;
             }
       }
       
       printf("\n Soma: %.0f", s);
       
       getch();
}
