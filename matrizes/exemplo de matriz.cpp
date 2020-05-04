#include<stdio.h>
#include<conio.h>
#define LIN 2
#define COL 3

main(){
       float mat[LIN][COL], soma = 0, soma2 = 0, maior = 0;
       int i, j;
      
             
       for(i = 1; i <= LIN; i++){
           printf("\n");
           for(j = 1; j <= COL; j++){
              printf("Linha %d e coluna %d: ", i, j);
              scanf("%f",&mat[i][j]);   
                
              if(mat[i][j] > maior)
                   maior = mat[i][j];
                                
              if(i == j)
                       soma2+= mat[i][j];
              
              if(i == 2)
                 soma+= mat[2][j];
           }
       }
       
       printf("\n\n Soma dos elementos da linha 2: %.0f", soma);
       printf("\n Soma das linha e colunas iguais: %.0f", soma2);
       printf("\n Maior de todos os numeros: %.0f", maior);                 
                 
                             
       getch();
}                 
