/*

6. Escrever um algoritmo que lê o público total de futebol e forneça a renda do jogo, sabendo-se
que havia 4 tipos de ingressos, assim distribuídos: popular - 10% sobre o total a R$ 1,00,
geral - 50% a R$ 5,00, arquibancada - 30% a R$ 10,00 e cadeiras - 10% a R$ 20,00

*/

#include<stdio.h>
#include<conio.h>

main(){
       int num_publico;
       float popular, geral, arquibancada, cadeiras, renda;
       
       printf("\n Quant. de Publico: ");
       scanf("%d", &num_publico);
       
       popular = num_publico*0.1;
       geral = (num_publico*0.5)*5;
       arquibancada = (num_publico*0.3)*10;
       cadeiras = (num_publico*0.1)*20;
       
       renda = popular + geral + arquibancada + cadeiras;
       
       printf("\n\n Renda do jogo: %.2f", renda);
       
       getch();
}
