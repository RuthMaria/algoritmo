#include <stdio.h>
#include <conio.h>

main(){
       
       int *v, i;
       
       v = (int*) malloc (5*sizeof(int)); // v é um ponteiro que aponta para a primeira area alocada
       
       for ( i = 0; i < 5; i++ ){
           scanf("%d", &v[i]);
       }
       
       for ( i = 0; i < 5; i++ )
          printf("%d ", v[i]);
       
       getch();
       
}
