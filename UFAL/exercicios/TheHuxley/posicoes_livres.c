
/*Descrição


Escreva um programa que, dado um tabuleiro e uma lista de sub-partes retangulares do tabuleiro, retorna o número de posições que não pertencem
a nenhuma sub-parte.

Formato de entrada
A entrada consiste de uma série de conjuntos de teste separados por linhas em branco. Um conjunto de teste começa com uma linha com três
números W, H e N, indicando, respectivamente, a largura, a altura e o número de sub-partes do tabuleiro.

Uma sub-parte é um subconjunto de casas do tabuleiro, identificado por duas coordenadas. Os valores W, H e N satisfazem as seguintes
restrições: 1 <= W, H <= 500 e 0 <= N <= 99. Seguem N linhas, compostas de quatro inteiros X1, Y1, X2 e Y2, tais que (X1, Y1) e (X2, Y2) são
as posições de dois cantos opostos de uma sub-parte. Estes valores satisfazem as seguintes restrições: 1 <= X1, X2 <=W e 1 <= Y1, Y2 <= H.
O fim da entrada é acontece quando temos W=H=N=0.

Esta última entrada não deve ser considerada como um conjunto de teste.
Formato de saída
O programa deve imprimir um resultado por linha, seguindo o formato descrito no exemplo de saída.

Exemplo de saída
There is no empty spots.
There is one empty spot.
There are 84651 empty spots.
*/

#include <stdio.h>
//#include <conio.h>

main(){
       int quant_pao, quant_pessoas, tam_fatia, i = 0, tamanho_ideal = 0, soma_paes = 0, j, fatias, cont = 0;

       scanf("%d%d", &quant_pessoas,  &quant_pao);

       int tamanho_pao[quant_pao];

       for(i = 0; i < quant_pao; i++){
              scanf("%d", &tamanho_pao[i]);
              soma_paes += tamanho_pao[i];
       }


       tamanho_ideal = soma_paes / quant_pessoas;

       for ( ;  ; ){

             fatias = 0;
             
             for(i = 0; i < quant_pao; i++){
                   
                   for (j = tamanho_ideal; j <= tamanho_pao[i]; j += tamanho_ideal)
                                     fatias++;
                    /*if ((tamanho_pao[i] / tamanho_ideal) != 0){
                          fatias += tamanho_pao[i]/tamanho_ideal;

                    }*/
             }

             if (fatias < quant_pessoas){
              
                tamanho_ideal--;

                
             }

             else if (fatias > quant_pessoas){
                tamanho_ideal++;
             }

                  else {
                       printf("%d\n", tamanho_ideal);
                       exit(1);
                  }
       }

       //getch();
}
