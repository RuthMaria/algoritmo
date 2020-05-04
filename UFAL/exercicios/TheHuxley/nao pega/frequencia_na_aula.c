/*Descri��o
Certa vez, numa aula, a professora passou um filme para os alunos assistirem. Durante
este filme, ela passou uma lista de presen�a em sua sala para verificar a presen�a dos
alunos, onde cada aluno deveria inserir apenas seu n�mero de registro. Alguns alunos
contudo, como possuem amigos que fogem da aula, decidiram ser camaradas e inseriram
os n�meros de registro de seus amigos fuj�es. O problema � que muitos alunos s�o
amigos de alunos que fogem da aula e alguns n�meros de registro acabaram sendo
repetidamente inseridos na lista de presen�a. Al�m de tudo, alguns dos alunos que se
esperava que n�o estivessem na aula de fato estavam!
A professora, ao notar que a lista de presen�a continha alguns n�meros repetidos, ficou
sem entender, mas decidiu dar um voto de confian�a e dar presen�a a todos os alunos
cujos n�meros de registro estavam na lista. Como s�o muitos alunos na sala e muitos
n�meros com repeti��o, ela pediu a sua ajuda para determinar o total de alunos que
receberam presen�a na aula.

Formato de entrada
A primeira linha da entrada cont�m um n�mero inteiro N, que informa a quantidade de
n�meros de registro que apareceram na lista de presen�a. Cada uma das N linhas
seguintes cont�m um n�mero de registro Vi que foi inserido na lista de presen�a.
Considere:
1 <= N <= 100000
Para cada elemento Vi, 0 <= Vi <= 1000000

Formato de sa�da
Seu programa deve imprimir uma �nica linha, contendo apenas um n�mero inteiro, o
n�mero de alunos que receberam presen�a.
*/


#include <stdio.h>
//#include <conio.h>

main(){
       long int register i, j, cont = 0;
       long int num_registros;
       
       scanf("%d", &num_registros);
            
       int alunos[num_registros];
       
       for ( i = 0; i < num_registros; i++){
           scanf("%d", &alunos[i]);
       }
       
       for ( i = 0; i < num_registros; i++){
           for ( j = i+1; j < num_registros; j++){               
               if ( alunos[i] == alunos[j]){
                     alunos[j] = 0;
               }
           }
           
           if ( alunos[i] != 0)
                cont++;
       }
       
       printf("%d\n", cont);
       
       //getch();
}
