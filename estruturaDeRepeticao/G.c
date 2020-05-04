/*
g)Mostrar os 20 primeiros termos da série abaixo e calcule o somatório destes termos. Os primeiros
 termos da série são: 1, -1/2, 1/3, -l/4, 1/5, ...
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
                     den++;
                     
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
