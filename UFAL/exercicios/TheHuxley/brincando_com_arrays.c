/*Descri��o
Fa�a um programa que leia n n�meros inteiros dados em um array e os imprime:
a) na ordem inversa dos n�meros dados
b) com um deslocamento para a esquerda
c) ordenado em ordem decrescente

Formato de entrada

Consiste de um n�mero n indicando a quantidade de n�meros a serem passados na entrada, seguido de n n�meros separados por um espa�o em branco.
Suponha que o maior n dado � 10000.

Formato de sa�da

Consiste de 3 sequ�ncias de n�meros, separados por um espa�o em branco. Ap�s cada sequ�ncia, existe um final de linha.
A primeira sequ�ncia cont�m os n�meros na ordem inversa, a segunda com o deslocamento para a esquerda e a terceira cont�m os n�meros ordenados
em ordem decrescente.
Lembre-se que depois do �ltimo n�mero de cada sequ�ncia n�o existe espa�o.
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
