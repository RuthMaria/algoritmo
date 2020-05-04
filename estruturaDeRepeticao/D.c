/*
d)Calcular o valor de S:
S = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50
*/

#include<stdio.h>
#include<stdlib.h>

main(){
       float s = 0.0;
       
       int num = 1, den = 1, i;
       
       for(i = 0; i<50; i++){
             printf("%d/%d \n", num, den);
             s+= num/den;
             num+= 2;
             den++;
       }
       
       printf("\n Soma: %.0f", s);
       
       getch();
}
