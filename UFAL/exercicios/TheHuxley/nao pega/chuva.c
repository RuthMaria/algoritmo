/*Descrição
Bob trabalha no OBM (Órgão Brasileiro de Metereologia), que é a organização responsável
pela medição dos índices pluviométricos (quantidade de chuva acumulada) em todo o país.
Eles são muito eficientes no que fazem, mas estão com um problema: eles não sabem
como proceder para calcular a quantidade acumulada de chuva que caiu em cada região
em dois períodos consecutivos, muito embora eles saibam os dados de cada período
separadamente.
Como a chefia do Órgão estava muito ocupada, acabou ficando a cargo de Bob, o estagiário,
a tarefa de implementar um programa que some, para cada região, a quantidade de chuva
acumulada em dois períodos consecutivos.
O mapa que o OBM usa é dividido em N×N regiões, sendo que para cada região, a cada 
período, é determinado um número inteiro indicando a quantidade de chuva acumulada.
A quantidade de chuva acumulada total em cada região em dois períodos consecutivos
é a soma das quantidades de chuva em cada um dos períodos.
Mas como Bob é só um estagiário e não está acostumado a fazer nada mais do que tirar
cópias de documentos, ele pediu sua ajuda para implementar o programa que calcula a
quantidade de chuva acumulada total nos dois períodos para cada uma das regiões, dadas
as quantidades de chuva acumulada em cada período para cada região.

Formato de entrada
A primeira linha da entrada contém um inteiro N indicando a dimensão dos dois mapas que
devem ser lidos. Nas próximas 2N linhas são dados os dois mapas, cada mapa indicando a
quantidade de chuva acumulada nas regiões em um período. Cada mapa é descrito em N
linhas consecutivas, cada linha contendo N inteiros, sendo que cada inteiro indica a quantidade
de chuva acumulada, no período, em uma região.
Considere:
• 1 <= N <= 100.
• 0 <= quantidade de chuva acumulada em cada região de cada mapa <= 100.

Formato de saída
A saída deverá conter N linhas, com N inteiros em cada linha, indicando a quantidade de
chuva acumulada total em cada uma das regiões nos dois períodos considerados.*/

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
