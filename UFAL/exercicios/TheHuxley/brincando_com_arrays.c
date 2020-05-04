/*Descrição
Faça um programa que leia n números inteiros dados em um array e os imprime:
a) na ordem inversa dos números dados
b) com um deslocamento para a esquerda
c) ordenado em ordem decrescente

Formato de entrada

Consiste de um número n indicando a quantidade de números a serem passados na entrada, seguido de n números separados por um espaço em branco.
Suponha que o maior n dado é 10000.

Formato de saída

Consiste de 3 sequências de números, separados por um espaço em branco. Após cada sequência, existe um final de linha.
A primeira sequência contém os números na ordem inversa, a segunda com o deslocamento para a esquerda e a terceira contém os números ordenados
em ordem decrescente.
Lembre-se que depois do último número de cada sequência não existe espaço.
 */




#include <stdio.h>

main() {
    int num, i, j, troca, aux;

    scanf("%d", &num);

    int arrays[num], arrays2[num];

    if(num <= 10000){
         for(i = 0; i<num; i++){
            scanf("%d", &arrays[i]);
            arrays2[i] = arrays[i];
         }
    }

    for( i = num-1; i >= 0; i-- ) {
          if ( i != 0 )
                 printf("%d ", arrays[i]);

          if( i == 0)
                   printf("%d\n", arrays[i]);
    }

    for ( i = 0; i<num; i++ ) {
             troca = 0;
             for ( j = 0; j<num-1; j++ ) {
                   if ( arrays[j] < arrays[j+1] ) {
                          aux = arrays[j];
                          arrays[j] = arrays[j+1];
                          arrays[j+1] = aux;
                          troca = 1;
                   }
             }

             if(troca == 0)
                    break;
       }


       for ( i = 1; i <= num; i++ ) {
               if ( i != num )
                       printf("%d ", arrays2[i]);

               if(num == 1)
                       printf("%d\n", arrays2[0]);


               if (i == num-1){
                      printf("%d\n", arrays2[0]);
                      break;
               }
       }

       for ( i = 0; i < num; i++ ) {
             if ( i != num-1 )
                 printf("%d ", arrays[i]);

             if ( i == num-1)
                   printf("%d\n", arrays[i]);
        }
       }
