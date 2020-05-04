//propriedade do divisor e propriedade do invertido

#include<stdio.h>

main(){
     int num, i, achou = 0;

     scanf("%d", &num);

     for(i = ; i < num && achou == 0; i++){
                 if(num % 2 == 0)
                      achou = 1;
     }

     if(achou == 0)
             printf("eh primo");

     else
            printf("nao eh primo");
}
