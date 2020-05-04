/*
Descri��o 
Durante anos, todos os contratos da Associa��o de Contratos da Modernol�ndia (ACM) foram datilografados em uma velha m�quina de datilografia.
Recentemente Sr. Miranda, um dos contadores da ACM, percebeu que a m�quina apresentava falha em um, e apenas um, dos d�gitos num�ricos. Mais
especificamente, o d�gito falho, quando datilografado, n�o � impresso na folha, como se a tecla correspondente n�o tivesse sido pressionada.
Ele percebeu que isso poderia ter alterado os valores num�ricos representados nos contratos e, preocupado com a contabilidade, quer saber, a
partir dos valores originais negociados nos contratos, que ele mantinha em anota��es manuscritas, quais os valores de fato representados nos 
contratos. Por exemplo, se a m�quina apresenta falha no d�gito 5, o valor 1500 seria datilografado no contrato como 100, pois o 5 n�o seria 
impresso.
Note que o Sr. Miranda quer saber o valor num�rico representado no contrato, ou seja, nessa mesma m�quina, o n�mero 5000 corresponde ao valor 
num�rico 0, e n�o 000 (como ele de fato aparece impresso).

Formato de entrada 
A entrada consiste de diversos casos de teste, cada um em uma linha. Cada linha cont�m dois inteiros D e N (1 <= D <= 9, 1 <= N < 10���), 
representando, respectivamente, o d�gito que est� apresentando problema na m�quina e o n�mero que foi negociado originalmente no contrato 
(que podem ser grande, pois Modernol�ndia tem sido acometida por hiperinfla��o nas �ltimas d�cadas).
O �ltimo caso de teste � seguido por uma linha que cont�m apenas dois zeros separados por espa�os em branco.
Obs: onde se v� 10���, leia-se dez elevado a cem.

Formato de sa�da 
Para cada caso de teste da entrada o seu programa deve imprimir uma linha contendo um �nico inteiro V, o valor num�rico representado de fato no contrato.
*/

#include <stdio.h>
//#include <conio.h>
#include <string.h>

main(){
       char errado, palavra[100];
       int i, j;
       
       for ( ; ; ){
           
           j = 0;
           
           scanf("%c", &errado);
           getchar();
           gets(palavra);
           
           
           if (errado == '0' && strcmp (palavra, "0") == 0)
                    exit(1);
                    
            
           char palavra1[strlen(palavra)-1];
                   
           for ( i = 0; palavra[i] != '\0'; i++){
               if (palavra[i] != errado){
                          palavra1[j] = palavra[i]; 
                          j++;
               }
           }
           
           if (j != 0 && palavra1[0] != '0'){
                 for ( i = 0; i < j; i++)
                            printf("%c", palavra1[i]);
                            
                 printf("\n");
           }
           else
                 printf("0\n");   
       }       
       
      // getch();       
}
