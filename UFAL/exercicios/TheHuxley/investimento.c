/*Descrição
Uma pessoa aplicou seu capital a juros e deseja saber, trimestralmente, a posição de seu investimento C inicial. Chamando de i a taxa de juros
do trimestre, escreva uma tabela que, para cada trimestre, dê o rendimento auferido e o saldo acumulado durante um período de X anos, supondo-se que nenhuma 
retirada tenha sido feita.

Formato de entrada
Dois números de ponto flutuante separados por espaço contendo o investimento inicial, a taxa de juros trimestral e um inteiro indicando o 
período em anos.

Formato de saída
Uma tabela, cada linha é escrita na forma:
Rendimento: R Montante: M

onde R e M são números de ponto flutuante formatado com duas casas decimais.*/

#include <stdio.h>
//#include <conio.h>

main(){
       double invest_inicial, juros;
       int ano, i;
       
       scanf ("%lf%lf%d", &invest_inicial, &juros, &ano);
       
       for ( i = 0; i < ano*4; i++){
           printf ("Rendimento: %.2lf Montante: %.2lf\n", invest_inicial * juros, (invest_inicial * juros) + invest_inicial);
           invest_inicial = (invest_inicial * juros) + invest_inicial;
       }
       
       //getch();
}
