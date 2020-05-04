/**/

#include <stdio.h>

main(){
       float mat[4][4], result;
       int i, j;
       
       for(i = 0; i < 4; i++){
             for(j = 0; j < 4; j++){
                    scanf("%f", &mat[i][j]);
             }                  
       }
       
        for(i = 0; i < 4; i++){
             result = 0.0;
             for(j = 0; j < 4; j++){
                      result += mat[i][j]*mat[3][j];
             }
             if(i != 3)
                  printf("%.2f\n", result);
        }
}
