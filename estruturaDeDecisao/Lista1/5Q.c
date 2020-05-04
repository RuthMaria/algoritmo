

#include<stdio.h>
#include<stdlib.h>

main(){
       int num_comp, folha, num_folha_cada;
       
       printf("\n Num de competidores, de folhas e de folha p/ cada competidor: ");
       scanf("%d%d%d", &num_comp, &folha, &num_folha_cada);
       
       if(folha/num_comp >= num_folha_cada)
                   printf("\n A folha eh suficiente \n");
                             
       else   
                   printf("\n A folha nao eh suficiente \n");
                   
       getch();
}
                           
