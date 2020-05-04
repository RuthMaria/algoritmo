/*
Descri��o
Calibrar os pneus do carro deve ser uma tarefa cotidiana de todos os motoristas. Para isto, os postos de gasolina possuem uma bomba de ar.
 A maioria das bombas atuais s�o eletr�nicas, permitindo que o motorista indique a press�o desejada num teclado. Ao ser ligada ao pneu, a 
 bomba primeiro l� a press�o atual e calcula a diferen�a de press�o entre a desejada e a lida. Com esta diferen�a ela esvazia ou enche o pneu 
 para chegar na press�o correta. 
Sua ajuda foi requisitada para desenvolver o programa da pr�xima bomba da SBC � Sistemas de Bombas Computadorizadas. Escreva um programa que, 
dada a press�o desejada digitada pelo motorista e a press�o do pneu lida pela bomba, indica a diferen�a entre a press�o desejada e a press�o
 lida. 

Formato de entrada
A primeira linha da entrada cont�m um inteiro N que indica a press�o desejada pelo motorista (1 <= N <= 40). A segunda linha cont�m um inteiro
 M que indica a press�o lida pela bomba (1 <= M <= 40). 

Formato de sa�da
Seu programa deve imprimir uma �nica linha, contendo a diferen�a entre a press�o desejada e a press�o lida.
*/

#include <stdio.h>
//#include <conio.h>

main(){
       int pressao_desejada, pressao_lida;
       
       scanf("%d%d", &pressao_desejada, &pressao_lida);
       
       if (1 <= pressao_desejada && pressao_desejada <= 40){
             if (1 <=  pressao_lida &&  pressao_lida <= 40)
                   printf("%d\n", pressao_desejada - pressao_lida);     
       }                 
      // getch();
}
