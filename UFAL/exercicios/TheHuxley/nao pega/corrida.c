/*Descri��o
Todo ano, os habitantes da Mlog�nia, apesar das crises internas, re�nem-se em torno de um esporte que � a
paix�o nacional: as corridas de carros. A Grande Corrida anual � um enorme evento organizado pela Associa��o
de Corridas da Mlog�nia (ACM), sendo amplamente televisionado e reportado em jornais e revistas de todo o
pa�s. Os resultados da corrida s�o tema principal das rodas de conversa por semanas.
Por bastante tempo, os resultados da Grande Corrida eram compilados manualmente. Observadores especializados
iam � pista medir o tempo de cada um dos N carros, numerados de 1 a N, em cada uma das M voltas,
anotando ent�o os resultados em tabelas para posterior an�lise por parte das equipes e dos jornalistas. Muitos
erros eram introduzidos nesse processo, e a organiza��o decidiu informatizar todo o sistema.
A ACM percebeu que o esfor�o necess�rio para a constru��o do sistema seria grande, e optou por contar com a
ajuda de uma equipe de programadores. Percival foi contratado para escrever a parte do software que determina
quais foram os carros vencedores, mas est� com diculdades e pede sua ajuda. A sua tarefa, neste problema,
� determinar os tr�s carros melhor colocados, fornecidos os tempos que cada carro levou para completar cada
volta da corrida.
Demostra��o
Entrada:
5 2
3 7
2 5
1 1
15 2
2 2
Sa�da:
3
5
2
Neste exemplo, existem 5 carros numa corrida de duas voltas. Os tempos de cada carro em cada
volta foram como na tabela a seguir.

Sendo assim, o vencedor foi o carro 3 (com um tempo total de 2), seguido pelo carro 5 (com um
tempo total de 4) e pelo carro 2 (com um tempo total de 7).

Formato de entrada
A primeira linha da entrada cont�m dois inteiros N e M representando o n�mero de carros e o n�mero de voltas
da corrida, respectivamente.
Cada uma das N linhas seguintes representa um carro: a primeira linha representa o primeiro carro, a segunda
linha representa o segundo carro, e assim por diante. Cada linha cont�mM inteiros representando os tempos em
cada volta da corrida: o primeiro inteiro � o tempo da primeira volta, o segundo inteiro � o tempo da segunda
volta, e assim por diante.
Garante-se que n�o houve dois carros que gastaram o mesmo tempo para completar a corrida inteira.

Formato de sa�da
A sa�da consiste de tr�s linhas, contendo um �nico inteiro cada. A primeira linha cont�m o n�mero do carro que
ganhou a corrida, a segunda cont�m o n�mero do segundo colocado e a terceira cont�m o n�mero do terceiro
colocado.*/

#include <stdio.h>
//#include <conio.h>

main(){
       int num_carros, num_voltas, i, j, soma = 0, aux;
       
       scanf("%d%d", &num_carros, &num_voltas);
       
       int matriz[num_carros][num_voltas], array[num_carros], array2[num_carros];
       for ( i = 0; i < num_carros; i++){
           for ( j = 0; j < num_voltas; j++)
               scanf("%d", &matriz[i][j]);
       }
                
       for ( i = 0; i < num_carros; i++){
           array2[i] = i+1;
           soma = 0;
           for ( j = 0; j < num_voltas; j++){
                soma += matriz[i][j];
           }
           array[i] = soma;
       }
         
       for ( i = 0; i < num_carros; i++){
            for ( j = 0; j < num_carros-1; j++){
                if (array[j] > array[j+1]){
                    aux = array[j];
                    array[j] = array[j+1];
                    array[j+1] = aux;
                    
                    aux = array2[j];
                    array2[j] = array2[j+1];
                    array2[j+1] = aux;     
                }                                         
            }
       }  
             
       printf("%d\n", array2[0]);
       printf("%d\n", array2[1]);
       printf("%d\n", array2[2]);                    
                    
      // getch();      
       
}
