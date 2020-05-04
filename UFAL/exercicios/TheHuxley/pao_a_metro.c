/*
Descri��o
P�o a metro � um tipo de sandu�che gigante que � uma excelente op��o de lanche para torneios de programa��o, embora a experi�ncia j� tenha 
mostrado que o oferecimento de sanduiches pode gerar reclama��o dos competidores. Outro grande problema � que algumas pessoas s�o mais gulosas
que outras e, dessa maneira, acabam pegando peda�os maiores que os peda�os dos outros. Para a final da OBI, a coordena��o estava pensando em
providenciar p�o a metro para os competidores, por�m tais problemas os fizeram recuar na id�ia.
Embora a id�ia tenha sido momentaneamente abandonada, uma id�ia simples surgiu: cortar previamente o p�o em fatias de tamanho iguais e 
distribu�-las entre as pessoas. O �nico problema com tal id�ia � que se o n�mero de pessoas for muito grande, fica impratic�vel ter apenas um 
p�o. Por exemplo, se quisermos que 1.000 pessoas recebam 20 cent�metros de sandu�che, seria necess�rio um sandu�che de 20.000 cent�metros, 
ou 200 metros!
Algu�m levantou a seguinte hip�tese: se houvessem N pessoas e fossem encomendados K sandu�ches de empresas diferentes, cada qual com uma 
determinada metragem (tamanho) Mi (1 <= i <= K), seria poss�vel retirar desses p�es N fatias de mesmo tamanho, possivelmente sobrando partes
nao utilizadas. A quest�o seria: qual o tamanho inteiro m�ximo que essas fatias poder�o ter?
Por exemplo, se tivermos K = 4, com os tamanhos (em cent�metros) M1 = 120, M2 = 89, M3 = 230 e M4 = 177 e N = 10, podemos retirar N fatias
iguais de tamanho m�ximo 57, pois assim conseguimos 2 fatias no primeiro p�o, 1 no segundo, 4 no terceiro e 3 no quarto, totalizando as 10 
fatias necess�rias. Se tentarmos cortar fatias de tamanho 58, s� ser� poss�vel obter 3 fatias do terceiro p�o, totalizando 9 e, portanto, 57
� realmente o melhor que podemos obter. Note que n�o podemos usar duas ou mais fatias menores de diferentes p�es para formarmos uma fatia do
tamanho selecionado. (ficaria muito deselegante dar um lanche recortado �s pessoas).
Escreva um programa que, dados os tamanhos de p�o dispon�veis (em cent�metros) e a quantidade de pessoas a serem atendidas, retorne o tamanho
inteiro m�ximo (em cent�metros) da fatia que pode ser cortada de maneira a atender todas as pessoas.
 
Formato de entrada
A entrada cont�m um �nico conjunto de testes, que deve ser lido do dispositivo de entrada padr�o (normalmente o teclado). A primeira linha 
da entrada cont�m um inteiro N que indica a quantidade pessoas (1 <= N <= 10.000). A segunda linha cont�m um inteiro K (1 <= K <= 10.000) 
que � a quantidade de sandu�ches dispon�vel. Na terceira linha h� K inteiros M (1 <= M <= 10.000) separados por um espa�o em branco 
representando o tamanho de cada p�o.

Formato de sa�da
Seu programa deve imprimir, na sa�da padr�o, uma �nica linha, contendo o tamanho inteiro m�ximo da fatia que pode ser cortada.*/


#include <stdio.h>
//#include <conio.h>

main(){
       int quant_pao, quant_pessoas, i, j, fatias = 0;
       
       scanf("%d%d", &quant_pessoas,  &quant_pao);
       
       int tamanho_pao[quant_pao];         
              
       for(i = 0; i < quant_pao; i++)                
              scanf("%d", &tamanho_pao[i]);
              
       
       for(i = 1;  ;i++){
            for(j = 0; j < quant_pao; j++) 
                   fatias += fabs(tamanho_pao[j] / i); 

        if(fatias < quant_pessoas)
                break;
        
        fatias = 0;
     }
     
     i--;
     printf("%d\n", i);
     
     //getch();
}

