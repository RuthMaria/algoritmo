/*
Descri��o
A Copa do Mundo de 2010 foi realizada na Africa do Sul. Bolas de futebol s�o muito f�ceis de transportar, j� que elas saem das f�bricas 
vazias e s� s�o enchidas somente pelas lojas ou pelos consumidores finais. Infelizmente o mesmo n�o pode ser dito das bolas de boliche. 
Como elas s�o completamente s�lidas, elas s� podem ser transportadas embaladas uma a uma, em caixas separadas. 
A Ambroliche � uma f�brica de bolas de boliche que trabalha somente atrav�s de encomendas e envia todas as bolas por SEDEX. Como as bolas 
t�m tamanhos diferentes, a Ambroliche tem v�rios tamanhos de caixas diferentes para transport�-las.
Escreva um programa que, dado o di�metro de uma bola e as 3 dimens�es de uma caixa (altura, largura e profundidade), diz se a bola de boliche 
cabe dentro da caixa ou n�o. 

Formato de entrada
A primeira linha da entrada cont�m um inteiro N (1 <= N <= 10.000) que indica o di�metro da bola de boliche. A segunda linha da entrada cont�m 3
n�meros inteiros separados por um espa�o cada: a altura A (1 <= A <= 10.000), seguida da largura L (1 <= L <= 10.000) e da profundidade 
P (1 <= P <= 10.000). 

Formato de sa�da
Seu programa deve imprimir uma �nica linha, contendo a letra 'S' caso a bola de boliche caiba dentro da caixa ou 'N' caso contr�rio.

*/

#include <stdio.h>
//#include <conio.h>


main(){
       int diametro, altura, largura, profundidade;
       
       scanf("%d%d%d%d", &diametro, &altura, &largura, &profundidade);
                  
      if((diametro <= profundidade) && (diametro <= altura) && (diametro <= largura))
                 printf("S\n");
      
      else
                 printf("N\n");                        
            
                
     // getch();
}
