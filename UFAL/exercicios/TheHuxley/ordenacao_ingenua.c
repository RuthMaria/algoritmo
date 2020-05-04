#include<stdio.h>

main(){
       int num, i, j, troca, aux;

       scanf("%d", &num);

       int array[num];

       for(i = 0; i<num; i++)
             scanf("%d", &array[i]);
       

       for(i = 0; i<num; i++){
             troca = 0;
             for(j = 0; j<num-1; j++){
                   if(array[j] > array[j+1]){
                          aux = array[j];
                          array[j] = array[j+1];
                          array[j+1] = aux;
                          troca = 1;
                   }
             }

             if(troca == 0)
                    break;
       }

       for(i = 0; i<num; i++)
              printf("[%d]", array[i]);

       printf("\n");


}
