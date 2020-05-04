#include<stdio.h>
#define tam 4

main(){
       int num, i, j, troca;
       float array[tam], aux, aux1, aux2,aux3;

       for(i = 0; i<tam; i++){
             scanf("%f", &array[i]);

             if(array[i] <= 0)
                    i--;
       }



       for(i = 0; i<tam; i++){
             troca = 0;
             for(j = 0; j<tam-1; j++){
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

       aux1 = array[1];
       aux2 = array[2];
       aux3 = array[3];

       array[3] = aux1;
       array[1] = aux2;
       array[2] = aux3;

       for(i = 0; i<tam; i++)
                printf("%.2f\n", array[i]);
    }
