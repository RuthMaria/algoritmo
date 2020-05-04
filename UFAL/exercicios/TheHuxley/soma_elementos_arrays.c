#include<stdio.h>

main(){
       int num[10000],i,quant, soma = 0;
       
       scanf("%d",&quant);
       
       if(quant <= 10000){
            for(i = 0; i < quant; i++ ){
                 scanf("%d",&num[i]);
                 soma+=num[i];
            }
       }

       printf("%d\n", soma );

}
