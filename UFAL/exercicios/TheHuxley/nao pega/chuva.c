/*Descri��o
Bob trabalha no OBM (�rg�o Brasileiro de Metereologia), que � a organiza��o respons�vel
pela medi��o dos �ndices pluviom�tricos (quantidade de chuva acumulada) em todo o pa�s.
Eles s�o muito eficientes no que fazem, mas est�o com um problema: eles n�o sabem
como proceder para calcular a quantidade acumulada de chuva que caiu em cada regi�o
em dois per�odos consecutivos, muito embora eles saibam os dados de cada per�odo
separadamente.
Como a chefia do �rg�o estava muito ocupada, acabou ficando a cargo de Bob, o estagi�rio,
a tarefa de implementar um programa que some, para cada regi�o, a quantidade de chuva
acumulada em dois per�odos consecutivos.
O mapa que o OBM usa � dividido em N�N regi�es, sendo que para cada regi�o, a cada 
per�odo, � determinado um n�mero inteiro indicando a quantidade de chuva acumulada.
A quantidade de chuva acumulada total em cada regi�o em dois per�odos consecutivos
� a soma das quantidades de chuva em cada um dos per�odos.
Mas como Bob � s� um estagi�rio e n�o est� acostumado a fazer nada mais do que tirar
c�pias de documentos, ele pediu sua ajuda para implementar o programa que calcula a
quantidade de chuva acumulada total nos dois per�odos para cada uma das regi�es, dadas
as quantidades de chuva acumulada em cada per�odo para cada regi�o.

Formato de entrada
A primeira linha da entrada cont�m um inteiro N indicando a dimens�o dos dois mapas que
devem ser lidos. Nas pr�ximas 2N linhas s�o dados os dois mapas, cada mapa indicando a
quantidade de chuva acumulada nas regi�es em um per�odo. Cada mapa � descrito em N
linhas consecutivas, cada linha contendo N inteiros, sendo que cada inteiro indica a quantidade
de chuva acumulada, no per�odo, em uma regi�o.
Considere:
� 1 <= N <= 100.
� 0 <= quantidade de chuva acumulada em cada regi�o de cada mapa <= 100.

Formato de sa�da
A sa�da dever� conter N linhas, com N inteiros em cada linha, indicando a quantidade de
chuva acumulada total em cada uma das regi�es nos dois per�odos considerados.*/

#include <stdio.h>
//#include <conio.h>

main(){
       int tam_matriz, i, j;
       
       scanf("%d", &tam_matriz);
       
       int matriz1[tam_matriz][tam_matriz], matriz2[tam_matriz][tam_matriz], soma[tam_matriz][tam_matriz];
       
       for ( i = 0; i < tam_matriz; i++){
           for ( j = 0; j < tam_matriz; j++)
                scanf("%d", &matriz1[i][j]);
       }
       
       for ( i = 0; i < tam_matriz; i++){
           for ( j = 0; j < tam_matriz; j++)
                scanf("%d", &matriz2[i][j]);
       }
       
       for ( i = 0; i < tam_matriz; i++){
           for ( j = 0; j < tam_matriz; j++)
                soma[i][j]= matriz1[i][j] + matriz2[i][j];
       }
       
        for ( i = 0; i < tam_matriz; i++){
           for ( j = 0; j < tam_matriz; j++){
                     printf("%d ", soma[i][j]);
           }
           printf("\n");
        }
       
      // getch();
}
