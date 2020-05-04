#include<stdio.h>

main(){
       int numero,i;
       
       scanf("%d", &numero);
      
       if(numero > 0){
           for(i = 1; i<=9; i++)
               printf("%d X %d = %d\n", numero, i, numero*i);
       }
      
}
