#include<stdio.h>

main(){
       int inicio, fim, i , j = 0;

       scanf("%d%d", &inicio, &fim);
       for(i = inicio; i<=fim; i++){                                                 
                                               
                 if(i%5 == 0 && j != 0)
                        printf("|%d", i);
                        
                  if(i%5 == 0 && j == 0){
                      printf("%d", i);
                      j = 1;
                 }                 
       }
}
