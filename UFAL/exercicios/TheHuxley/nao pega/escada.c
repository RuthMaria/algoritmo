#include <stdio.h>

main(){
       int pessoas, pessoas1, soma = 0, i;
       
       scanf("%d", &pessoas);
       
        for ( i = 0; i < pessoas; i++){
           scanf("%d", &pessoas1);
           soma += pessoas1;
        }
        
       printf("%d\n", soma);
}
       
    
