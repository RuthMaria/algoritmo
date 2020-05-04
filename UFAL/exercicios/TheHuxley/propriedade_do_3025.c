#include<stdio.h>

main(){
       int i,num, quociente, resto;
       
       for(i = 0; i<=1000; i++){
             scanf("%d", &num);  
                        
             if(num < 1000 || num > 9999)
                     break;     
                     
             else{
                    quociente = num/100;
                    resto = num%100;
                    
                    if((quociente+resto)*(quociente+resto) == num)
                             printf("propriedade do 3025!");
                    else
                             printf("numero comum");
             }
             printf("\n");
       }  
}
