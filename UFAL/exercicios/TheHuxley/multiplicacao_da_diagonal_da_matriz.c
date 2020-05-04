#include <stdio.h>

main() {
       int mat[4][4], i, j, n;
       
        for(; ;){
           scanf("%d", &n); 
                      
           if(n == 0)
               return 0;
                  
      
           for(j = 0; j<4; j++){
               for(i = 0; i<4; i++){            
                    scanf("%d", &mat[i][j]);
             }           
          }
                                  
          for(i = 0; i<4; i++){
              for(j = 0; j<4; j++){
                    if(i == j)
                         printf("%d ", mat[i][j]*n);
                    else
                         printf("%d ", mat[i][j]);
              }
              
              printf("\n");
          }
                 
       }
}
      
      
