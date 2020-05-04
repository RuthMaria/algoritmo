#include<stdio.h>

main(){
       int num1, den1, num2, den2, numerador, denominador;

       scanf("%d/%d + %d/%d", &num1, &den1, &num2, &den2);

       if(den1 == 0 || den2 == 0)
                 printf("entrada invalida!");

       else{
             if(den1 == den2)
                   printf("%d/%d\n", num1+num2, den1);

              else{
                   numerador = (num1*den2+num2*den1);
                   denominador =  den1*den2;
                   printf("%d/%d\n", numerador, denominador);
              }                  
                   
       }

}
