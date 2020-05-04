/*Descrição
João fez uma pesquisa em seu site de busca predileto, e encontrou a resposta que estava
procurando no terceiro link listado. Além disso, ele viu, pelo site, que t pessoas já haviam
clicado neste link antes. João havia lido anteriormente, também na Internet, que o número
de pessoas que clicam no segundo link listado é o dobro de número de pessoas que clicam
no terceiro link listado. Nessa leitura, ele também descobriu que o número de pessoas que
clicam no segundo link é a metade do número de pessoas que clicam no primeiro link.
João está intrigado para saber quantas pessoas clicaram no primeiro link da busca, e, como
você é amigo dele, quer sua ajuda nesta tarefa.

Formato de entrada
Cada caso de teste possui apenas um número, t, que representa o número de pessoas
que clicaram no terceiro link da busca.
Considere:
1 <= t <= 1000

Formato de saída
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
