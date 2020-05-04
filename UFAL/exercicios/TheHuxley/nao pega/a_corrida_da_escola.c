/*Descri��o
A escola de Jo�ozinho tradicionalmente organiza uma corrida ao redor do pr�dio. Como todos os alunos s�o
convidados a participar e eles estudam em per�odos diferentes, � dif�cil que todos corram ao mesmo tempo.
Para contornar esse problema, os professores cronometram o tempo que cada aluno demora para dar cada volta
ao redor da escola, e depois comparam os tempos para descobrir a classifica��o final.
Sua tarefa �, sabendo o n�mero de competidores, o n�mero de voltas de que consistiu a corrida e os tempos
de cada aluno competidor, descobrir quem foi o aluno vencedor, para que ele possa receber uma medalha
comemorativa.

Formato de entrada
A primeira linha da entrada cont�m dois inteiros N e M representando o n�mero de competidores e o n�mero
de voltas da corrida, respectivamente.
Cada uma das N linhas seguintes representa um competidor: a primeira linha representa o primeiro competidor,
a segunda linha representa o segundo competidor, e assim por diante. Cada linha cont�m M inteiros
representando os tempos em cada volta da corrida: o primeiro inteiro � o tempo da primeira volta, o segundo
inteiro � o tempo da segunda volta, e assim por diante.
Garante-se que n�o houve dois competidores que gastaram o mesmo tempo para completar a corrida inteira.
Considere:
� 2 <= N <= 100
� 1 <= M <= 100
� 1 <= qualquer n�mero da entrada que represente o tempo de uma volta <= 1000000

Formato de sa�da
A sa�da consiste de um �nico inteiro, que corresponde ao n�mero do competidor que ganhou a corrida.*/

#include <stdio.h>
//#include <conio.h>

main(){
       long int num_competidores, voltas, i, tempo, competidor = 0, menor = 999, ganhou = 0;       
       
       scanf("%d%d", &num_competidores, &voltas);
       
       for ( i = 0; i < num_competidores; i++){
           scanf("%d", &tempo);
           competidor++;
           
           if (tempo < menor){
                   menor = tempo;
                   ganhou = competidor;
           }
       }
       
       printf("%d\n", ganhou);
      // getch();
       
}
