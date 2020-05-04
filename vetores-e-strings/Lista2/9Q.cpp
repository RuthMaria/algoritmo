#include<stdio.h>
#include<conio.h>
#include<string.h>

main(){
      char palavra[4][40], es[4];
      int i;
      
      for(i = 0; i<4; i++){
          printf("\n Palavra: %d ", i+1);
          gets(palavra[i]);
          
          strcpy(es, " ");
          strcat(palavra[i], es);
      }
      
      printf("\n Palavra concatenada: ");
      for(i = 0; i<4; i++)
             printf("%s", palavra[i]);
          
      getch();
}               
