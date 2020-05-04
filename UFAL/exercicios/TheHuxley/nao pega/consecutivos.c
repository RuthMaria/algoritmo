/*
Descrição
Num sorteio que distribui prêmios, um participante inicialmente sorteia um inteiro N e depois
N valores. O número de pontos do participante é o tamanho da maior sequência de valores
consecutivos iguais. Por exemplo, suponhamos que um participante sorteia N = 11 e, nesta
ordem, os valores:
30, 30, 30, 30, 40, 40, 40, 40, 40, 30, 30
Então, o participante ganha 5 pontos, correspondentes aos 5 valores 40 consecutivos. Note
que o participante sorteou 6 valores iguais a 30, mas nem todos são consecutivos.
Sua tarefa é ajudar a organização do evento, escrevendo um programa que determina o
número de pontos de um participante.

Formato de entrada
A primeira linha da entrada contém um inteiro N, o número de valores sorteados. A segunda
linha contém N valores, V1, V2, . . . , VN, na ordem de sorteio, separados por um espaço
em branco.
Considere:
1 <= N <= 10000
-2^31 <= Vi <= (2^31) - 1 , para i = 1,2, . . . , N

Formato de saída
Seu programa deve imprimir apenas uma linha, contendo apenas um inteiro, indicando o
número de pontos do participante.*/


#include <stdio.h>
//#include <conio.h>

main(){
       int tamanho, i;
       
       scanf("%d", &tamanho);
       
       int num[tamanho], quant = 1, maior = 0, entrou = 0;
       
       
       for ( i = 0; i < tamanho; i++)
           scanf("%d", &num[i]);
           
    
       for ( i = 0; i < tamanho; i++){
            if ( num[i] == num[i+1]){
                 entrou = 1;                
                 quant++;
                 // printf("num[%d]:%d num[%d]:%d quant: %d\n", i, num[i], i+1, num[i+1], quant);
            }
    
            else if (quant > maior){
                   maior = quant;
                   quant = 1;
                 //  printf("%d\n", maior);
                  
                  }
       } 
              
       if (entrou != 0) // se entrou for igual a zero os numeros são consecutivos
            printf("%d\n", maior);
            
       else
            printf("0\n");
       
       
      // getch();
}
