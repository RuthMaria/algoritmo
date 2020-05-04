/*Descrição
Escreva um programa que transforme o computador numa urna eletrônica para eleição, em segundo turno, para presidente de um país chamado Ambrolândia.
Nessas eleições concorrem os candidatos 83-Alibabá e 93-Alcapone. Cada voto deve ser dado pelo número do candidato, permitindo-se ainda o voto 0
 para voto em branco. Qualquer voto diferente dos já citados é considerado nulo. No final da eleição o programa deve emitir um relatório contendo
 a votação de cada candidato, a quantidade votos em branco, a quantidade de votos nulos e o candidato eleito e os respectivos percentuais.

Em Ambrolândia, o percentual de votos é calculado considerando os votos válidos. O voto nulo não é considerado um voto válido. Entretanto,
o voto em branco é considerado um voto válido.


Formato de entrada

A entrada consiste de um conjunto de números inteiros, um por linha. A eleição termina quando o número digitado é -1.

O número de inteiros dados é maior que um e menor que cem milhões.

Considere também que cada candidato tem pelo menos um voto.


Formato de saída

A saída consiste de um relatório impresso no seguinte formato:

x

y

z

w

k

a

b



Onde, x é quantidade de votos do candidato Alibabá, y a quantidade de votos do candidato Alcapone, z a quantidade de votos em branco,
w a quantidade de votos nulos, k é o número 83 ou 93 indicando qual foi o candidato vencedor, a é o percentual de votos do candidato
Alibabá e b é o percentual de votos do candidato Alcapone.

O percentual de votos deve ser impresso com duas casas decimais e sem o sinal de porcentagem. Exemplo, para representar trinta e quatro
ponto vinte e cinco porcento você deve imprimir: 34.25


Considere também que sempre haverá um candidato vencedor, ou seja, nunca haverá um empate.

*/

#include<stdio.h>

main(){
      float voto, nulo = 0, branco = 0, cont_ali = 0, cont_alc = 0, quant_votos;

      do{         
              scanf("%f", &voto);

              if(voto == 83.00)
                     cont_ali++;

              if(voto == 93.00)
                     cont_alc++;

              if(voto == 0.00)
                     branco++;

              if(voto != 83.00 && voto != 93.00 && voto != 0.00 && voto != -1.00)
                     nulo++;

       }while(voto != -1.00);

        quant_votos = branco+cont_ali+cont_alc;

        if(cont_ali == 0.00)
              printf("%.0f\n", (cont_ali+1));
        else
              printf("%.0f\n", cont_ali);
              

        if(cont_alc == 0.00)
              printf("%.0f\n", (cont_alc+1));
        else
              printf("%.0f\n", cont_alc);
              

        printf("%.0f\n", branco);
        printf("%.0f\n", nulo);
        

        if(cont_ali > cont_alc)
                 printf("83\n");
        else
                 printf("93\n");
                 

        printf("%.2f\n", (cont_ali/quant_votos)*100);
        printf("%.2f\n", (cont_alc/quant_votos)*100);
}
