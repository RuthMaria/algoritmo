/*Descri��o 
O jogo de xadrez possui v�rias pe�as com movimentos curiosos. Uma delas � a dama, que pode se mover qualquer quantidade de casas na mesma linha,
na mesma coluna, ou em uma das duas diagonais, conforme a Figura abaixo:

O grande mestre de xadrez Kary Gasparov inventou um novo tipo de problema de xadrez:

Dada a posi��o de uma dama em um tabuleiro de xadrez vazio (ou seja, um tabuleiro 8 � 8, com 64 casas), de quantos movimentos, no m�nimo, 
ela precisa para chegar em outra casa do tabuleiro?

Kary achou a solu��o para alguns desses problemas, mas teve dificuldade com outros, e por isso pediu que voc� escrevesse um programa que 
resolve esse tipo de problema.

Formato de entrada 
A entrada cont�m v�rios casos de teste. A primeira e �nica linha de cada caso de teste cont�m quatro inteiros X1, Y1, X2 e Y2 
(1 <= X1, Y1, X2, Y2 <= 8). A dama come�a na casa de coordenadas (X1, Y1), e a casa de destino � a casa de coordenadas (X2, Y2).
No tabuleiro, as colunas s�o numeradas da esquerda para a direita de 1 a 8 e as linhas de cima para baixo tamb�m de 1 a 8. 
As coordenadas de uma casa na linha X e coluna Y s�o (X, Y).

O �ltimo caso de teste � seguido por uma linha que cont�m apenas quatro n�meros zero separados por um espa�o em branco.

Formato de sa�da 
Para cada caso de teste da entrada seu programa deve imprimir uma �nica linha na sa�da, contendo um n�mero inteiro, indicando o 
menor n�mero de movimentos necess�rios para a dama chegar a sua casa de destino.*/

#include <stdio.h>
#include <math.h>

main(){
       int x1, y1, x2, y2, i, j, checar, modulo, result1, result2;
       
       for ( ; ; ){
           
             checar = modulo = result1 = result2 = 0;
             
             scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
                        
             if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)
                     exit(1);             
               
             result1 = x1 - x2;
             result2 = y1 - y2;
             
             if (result1 < 0)
                     result1 *=-1;
                     
             if (result2 < 0)
                     result2 *=-1;             
             
             if (x1 == x2 && y1 == y2)
                     checar = 0;
             
             else if (x1 == x2 || y1 == y2 || result1 == result2)
                    checar = 1;                    
             else 
                    checar = 2;

             printf("%d\n", checar);
        }           
}
