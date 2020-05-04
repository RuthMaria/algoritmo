#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 2


main(){
       int i, n[MAX], n2[MAX], n3[MAX];
       
       printf("\n Vetor 1\n");       
       for(i = 0; i<MAX; i++)
           scanf("%d", &n[i]);
           
       printf("\n Vetor 2\n");
       for(i = 0; i<MAX; i++)
           scanf("%d", &n2[i]);
          
       printf("\n Vetor c \n");           
       for(i = 0; i<MAX; i++){
            n3[i] = n[i]+n2[i]; 
            printf("\n%d",n3[i]);
       }
       
       getch();
}
       
