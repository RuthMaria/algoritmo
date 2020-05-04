#include<stdio.h>
#include<conio.h>

main(){
       int mat[3][3], soma1 = 0, l, c, soma2 = 0, dia_pr = 0, dia_s = 0;
       
       for(l = 0; l<3; l++){
           printf("\n");
           for(c = 0; c<3; c++){                          
               printf("\n Linha %d e coluna %d: ", l+1, c+1);
               scanf("%d", &mat[l][c]);
               
               if(l == 2)
                    soma1+= mat[l][c];
               
               if(l == 1)
                    soma2+= mat[l][c];
                    
               if(l == c)
                   dia_pr+= mat[l][c];
                           
                if(l+c == 2)
                   dia_s+= mat[l][c];     
           }
       }
       
                 
      printf("\n Soma dos elementos da linha 3:%d\n",soma1);
      printf(" Soma dos elementos da linha 2:%d\n",soma2);
      printf(" Soma dos elementos da diagonal principal: %d\n",dia_pr);
      printf(" Soma dos elementos da diagonal secundaria: %d\n",dia_s);
      getch();
} 
                
                      
                   
                            
                            
                            
                                            
                                                  
