/*Descri��o
Jo�o fez uma pesquisa em seu site de busca predileto, e encontrou a resposta que estava
procurando no terceiro link listado. Al�m disso, ele viu, pelo site, que t pessoas j� haviam
clicado neste link antes. Jo�o havia lido anteriormente, tamb�m na Internet, que o n�mero
de pessoas que clicam no segundo link listado � o dobro de n�mero de pessoas que clicam
no terceiro link listado. Nessa leitura, ele tamb�m descobriu que o n�mero de pessoas que
clicam no segundo link � a metade do n�mero de pessoas que clicam no primeiro link.
Jo�o est� intrigado para saber quantas pessoas clicaram no primeiro link da busca, e, como
voc� � amigo dele, quer sua ajuda nesta tarefa.

Formato de entrada
Cada caso de teste possui apenas um n�mero, t, que representa o n�mero de pessoas
que clicaram no terceiro link da busca.
Considere:
1 <= t <= 1000

Formato de sa�da
Para cada caso de teste imprima apenas uma linha, contendo apenas um inteiro,
indicando quantas pessoas clicaram no primeiro link, nessa busca.
 */
 
#include <stdio.h>
//#include <conio.h>

main(){
       int num_pessoas, primeiro, segundo;
       
       scanf("%d", &num_pessoas);
       
       segundo = 2 * num_pessoas;
       primeiro = 2 * segundo;
       
       printf("%d\n", primeiro);
       
      // getch();
}
