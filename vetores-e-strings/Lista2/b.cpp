#include<stdio.h>
#include<conio.h>
main(){
       int pares=0, cont=0, c, l;
       float mat[2][4], media, soma=0;
       
       for(c=0;c<4;c++){
                        
          for(l=0;l<2;l++){
             printf("digite os numeros da linha: %d e coluna %d:",l,c);
                           
             scanf("%f", &mat[l][c]);
             
             if((int)mat[l][c]%2==0){
                
                pares++;
                soma += mat[l][c];
             }   
             
             if(mat[l][c] > 12 &&  mat[l][c] < 20)
               cont++;
               
             }
       }
                
      media=soma/pares;          
      printf("\n\nquant de elementos entre 12 e 20:%d",cont);
      printf("\na media dos elementos pares: %.2f", media);
      getch();
}
            
