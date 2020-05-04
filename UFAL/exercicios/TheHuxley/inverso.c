#include<stdio.h>

main(){
       int num, i;

       scanf("%d", &num);

       int array[num];

       for(i = 1; i<=num; i++)
             scanf("%d", &array[i]);


       for(i = num; i>=1; i--)
              if(i == 1)
                   printf("%d\n", array[i]);
              else
                   printf("%d ", array[i]);


}
