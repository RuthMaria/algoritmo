#include<stdio.h>
#include<conio.h>
#include<string.h>

main(){
       char v1[20], v2[20];
       int i;
       
       printf("\n Palavra 1: ");
       gets(v1);
       
       printf("\n Palavra 2: ");
       gets(v2);
       
       if(strcmp(v1, v2) == 0)
          printf("\n Palavras iguais\n");
          
       if(strlen(v1) > strlen(v2))
                printf("\n A palavra %s eh maior com %d caracteres\n", v1, strlen(v1));
         
       else
            printf("\n A palavra %s e maior com %d caracteres\n", v2, strlen(v2));
            
       getch();
}    
