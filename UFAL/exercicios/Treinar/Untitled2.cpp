#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int fatorial(int n){
    if (n == 1 || n == 0)
        return 0;
        
    else
         return n * (fatorial(n-1));
       
}

main(){
       int fat = fatorial(5);
       
         printf("%d\n", fat);
         
         getch();
}
