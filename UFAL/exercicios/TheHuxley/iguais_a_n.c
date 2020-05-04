#include<stdio.h>
#define tam 101

main(){
       int i, array[tam];

       for(i = 0; i<tam; i++)
             scanf("%d", &array[i]);

       for(i = 0; i<tam-1; i++){
              if(array[tam-1] == array[i])
                    printf("%d\n", i);
       }
}
