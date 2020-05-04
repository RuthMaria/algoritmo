/*
e)Calcular o valor de S:
S = 1/1 – 2/4 + 3/9 - 4/16 + 5/25 – 6/36 ... - 10/100
*/

#include<stdio.h>
#include<stdlib.h>

main(){
       float s = 0.0;
       int num = 1, den = 1, i;
       
       for(i = 0; i<10; i++){
             if(i%2 == 0){
                     printf("%d/%d \n", num, den);
                     s-= num/den;
                     num++;
                     den = num*num;
             }
             
             else{
                     printf("%d/%d \n", -1*num, den);
                     s+= num/den;
                     num++;
                     den = num*num;
             }
       }
       
       printf("\n Soma: %.0f", s);
       
       getch();
}

