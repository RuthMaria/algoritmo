#include<stdio.h>

main(){
       int arrays[10],i, cont=0;
       
             
      for(i = 0; i<10; i++)
                scanf("%d", &arrays[i]);
                 
      for(i = 0; i<10; i++){
           if(arrays[9] == arrays[i])
                 cont++;
      }
            
      printf("O numero %d apareceu %d vezes",arrays[9], cont);
           
}
