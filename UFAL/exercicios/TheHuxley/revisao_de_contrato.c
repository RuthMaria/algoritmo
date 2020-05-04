/*
Descrição 
Durante anos, todos os contratos da Associação de Contratos da Modernolândia (ACM) foram datilografados em uma velha máquina de datilografia.
Recentemente Sr. Miranda, um dos contadores da ACM, percebeu que a máquina apresentava falha em um, e apenas um, dos dígitos numéricos. Mais
especificamente, o dígito falho, quando datilografado, não é impresso na folha, como se a tecla correspondente não tivesse sido pressionada.
Ele percebeu que isso poderia ter alterado os valores numéricos representados nos contratos e, preocupado com a contabilidade, quer saber, a
partir dos valores originais negociados nos contratos, que ele mantinha em anotações manuscritas, quais os valores de fato representados nos 
contratos. Por exemplo, se a máquina apresenta falha no dígito 5, o valor 1500 seria datilografado no contrato como 100, pois o 5 não seria 
impresso.
Note que o Sr. Miranda quer saber o valor numérico representado no contrato, ou seja, nessa mesma máquina, o número 5000 corresponde ao valor 
numérico 0, e não 000 (como ele de fato aparece impresso).

Formato de entrada 
A entrada consiste de diversos casos de teste, cada um em uma linha. Cada linha contém dois inteiros D e N (1 <= D <= 9, 1 <= N < 10¹°°), 
representando, respectivamente, o dígito que está apresentando problema na máquina e o número que foi negociado originalmente no contrato 
(que podem ser grande, pois Modernolândia tem sido acometida por hiperinflação nas últimas décadas).
O último caso de teste é seguido por uma linha que contém apenas dois zeros separados por espaços em branco.
Obs: onde se vê 10¹°°, leia-se dez elevado a cem.

Formato de saída 
Para cada caso de teste da entrada o seu programa deve imprimir uma linha contendo um único inteiro V, o valor numérico representado de fato no contrato.
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
