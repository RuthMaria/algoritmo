#include<stdio.h>


main(){
       int inicio, fim, i, j = 0;

       scanf("%d %d", &inicio, &fim);

       for(i = inicio; i<=fim; i++){
                 if(i%5 == 0 && i == fim)
                        printf("%d", i);


                  if(i%5 == 0 && i != fim)
                        printf("%d|", i);

       }
   }
