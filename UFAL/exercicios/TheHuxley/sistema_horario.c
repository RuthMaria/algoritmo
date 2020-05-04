#include<stdio.h>

main(){
       int hora, min;
       
       scanf("%d%d", &hora, &min);
       
       if(hora <= 12)
                 printf("%d%dpm", hora, min);
                 
       else{
            if(hora == 24)
                 printf("0%d%dam",hora-24,min);
            else
                 printf("%d%dam",hora-12,min);
       }
      
}
