#include<stdio.h>
#include<conio.h>

main(){
       float mat[3][3];
       int lin, col, maior = 0, menor = 999, plinha = 0, pcol = 0, plinha1 = 0, pcol1 = 0;
       maior = mat[0][0];
       
       for(lin = 0; lin < 3; lin++){
           printf("\n");
           for(col = 0; col < 3; col++){
             printf("Linha %d e coluna %d: ", lin, col);
             scanf("%f", &mat[lin][col]);
             
             if (mat[lin][col] > maior){
                    maior = mat[lin][col];
                    plinha1 = lin;
                    pcol1 = col;
             }
             
             if(mat[lin][col] < menor){
                menor = mat[lin][col];
                plinha = lin;
                pcol = col;
             }
           }
       }
       
       printf("\n Maior numero:%d, esta na linha:%d e coluna:%d", maior, plinha1, pcol1);
       printf("\n Menor numero:%d, esta na linha:%d e coluna:%d", menor, plinha, pcol);
       getch();
}
                
