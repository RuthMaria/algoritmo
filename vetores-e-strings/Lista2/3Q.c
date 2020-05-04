/*
3. Dados dois vetores de n elementos, calcule o seu produto escalar. (O produto escalar de dois
vetores v1 e v2 é dado por: produto = v1[0]*v2[0]+ v1[1]*v2[1]+... +v1[n]*v2[n]).
*/

#include<stdio.h>                   
#include<conio.h>
#include<math.h>

main(){  
         int vetor1[3], vetor2[3], i, produto = 0;
         
         printf("\n Vetor 1 \n");
         for( i = 0; i < 3; i++)
                scanf("%d", &vetor1[i]);
                
         printf("\n Vetor 2 \n");
         for( i = 0; i < 3; i++)
                scanf("%d", &vetor2[i]);
                
         for( i = 0; i < 3; i++)
                produto+= vetor1[i]*vetor2[i]; 
                
         printf("\n produto dos vetores: %d", produto);
         
         getch();
}
