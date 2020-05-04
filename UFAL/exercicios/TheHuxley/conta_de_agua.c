/*Descri��o
A empresa local de abastecimento de �gua, a Saneamento B�sico da Cidade (SBC), est� promovendo uma campanha de conserva��o de �gua,
distribuindo cartilhas e promovendo a��es demonstrando a import�ncia da �gua para a vida e para o meio ambiente. 
Para incentivar mais ainda a economia de �gua, a SBC alterou os pre�os de seu fornecimento de forma que, proporcionalmente, aqueles clientes 
que consumirem menos �gua paguem menos pelo metro c�bico. 
Todo cliente paga mensalmente uma assinatura de R$ 7, que inclui uma franquia de 10 m3 de �gua. Isto �, para qualquer consumo entre 0 e 10 m3 ,
o consumidor paga a mesma quantia de R$ 7 reais (note que o valor da assinatura deve ser pago mesmo que o consumidor n�o tenha consumido �gua). 
Acima de 10 m3 , cada metro c�bico subsequente tem um valor diferente, dependendo da faixa de consumo. A SBC cobra apenas por quantidades 
inteiras de metros c�bicos consumidos. 
A tabela abaixo especifica o pre�o por metro c�bico para cada faixa de consumo:

Assim, por exemplo, se o consumo foi de 120 m3 , o valor da conta �:
7 reais da assinatura b�sica;
20 reais pelo consumo no intervalo 11 � 30 m3 ;
140 reais pelo consumo no intervalo 31 � 100 m3 ;
100 reais pelo consumo no intervalo 101 � 120 m3.

Logo o valor total da conta de �gua � R$ 267. Tarefa Escreva um programa que, dado o consumo de uma resid�ncia em m3 , calcula o valor da 
conta de �gua daquela resid�ncia.

Formato de entrada
A �nica linha da entrada cont�m um �nico inteiro N, indicando o consumo de �gua da resid�ncia, em m3 (0 <= N <= 1000).

Formato de sa�da
Seu programa deve imprimir uma �nica linha, contendo o valor da conta de �gua daquela resid�ncia.*/

#include <stdio.h>
//#include <conio.h>

main(){
       int cons_agua, result = 7;
       
       scanf("%d", &cons_agua);
                      
                
       if (cons_agua >= 11 && cons_agua <= 30){  // 1
                     result = (cons_agua - 10) * 1 + 7;
       }
                            
       else if (cons_agua >= 31 && cons_agua <= 100) // 2
                     result = (cons_agua - 30) * 2 + (7 + (20*1));                    
                     
       else if (cons_agua > 101 ) // 5
                     result = (cons_agua - 100) * 5 + (7 + 20 + (70*2));
       
       printf("%d\n", result);
       
      // getch();
}
