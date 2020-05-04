#include <stdio.h>
//#include <conio.h>

main(){
       
       char *p;
       int i;
    
       for ( ; ; ){
              p = (char*) malloc (75*sizeof(int));
              
              gets(p);
              
              if ( strcmp(p, "the end!") == 0 )
                     exit(1);
                     
              for ( i = 0; i < strlen(p); i++)
                  printf("%c", toupper(p[i]));
              
              printf("\n");
              
        
       }
       
       //getch();
       
}
