/*Descri��o
Uma pessoa aplicou seu capital a juros e deseja saber, trimestralmente, a posi��o de seu investimento C inicial. Chamando de i a taxa de juros
do trimestre, escreva uma tabela que, para cada trimestre, d� o rendimento auferido e o saldo acumulado durante um per�odo de X anos, supondo-se que nenhuma 
retirada tenha sido feita.

Formato de entrada
Dois n�meros de ponto flutuante separados por espa�o contendo o investimento inicial, a taxa de juros trimestral e um inteiro indicando o 
per�odo em anos.

Formato de sa�da
Uma tabela, cada linha � escrita na forma:
Rendimento: R Montante: M

onde R e M s�o n�meros de ponto flutuante formatado com duas casas decimais.*/

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
