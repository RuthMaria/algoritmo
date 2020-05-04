/*
Descri��o
O candidato a um cargo eletivo contratou um instituto de pesquisa de opini�o para acompanhar seu desempenho durante a campanha eleitoral. 
Esse instituto realizou n pesquisas ao longo da campanha, em cada uma das quais verificou o percentual de inten��es de voto no candidato e
em seu principal concorrente.
Escreva uma fun��o que receba como par�metros o vetor com os percentuais de inten��es de voto no candidato (candidato[ ]), o vetor com os
percentuais de inten��es de voto no seu concorrente (concorrente[ ]) e o tamanho desses vetores (n), e determine qual o valor da maior 
vantagem percentual que o candidato teve sobre seu concorrente em uma pesquisa, isto �, a maior diferen�a entre os percentuais de inten��es
de voto para um mesmo �ndice, considerando apenas quando o candidato esteve na frente do concorrente. Se o candidato nunca esteve em 
vantagem, a fun��o deve retornar 0.00. O prot�tipo da fun��o �: 
float vantagem(float candidato[], float concorrente[], int n);  (Linguagem C)
def vantagem(candidato, concorrente, n) (Python)
 
Formato de entrada
Voc� receber� um n�mero inteiro n correspondente a quantidade de pesquisas realizadas, um final de linha, um conjunto de n n�meros reais 
correspondente aos percentuais de inten��es de voto no candidato, um final de linha e um conjunto de n n�meros reais correspondente aos
percentuais de inten��es de voto do concorrente.

Formato de sa�da
Um n�mero real formatado com duas casas decimais correspondendo ao valor da maior vantagem percentual que o candidato teve em uma pesquisa.*/

#include <stdio.h>
//#include <conio.h>

float vantagem(float candidato[], float concorrente[], int n){
      float result[n], maior;
      int j = 0, i;
      
      for(i = 0; i < n; i++){
            result[j] = 0;
            if( candidato[i] > concorrente[i]){
                   result[j] += candidato[i] - concorrente[i];
                   j++;
            }
      }
    
      if(result[0] == 0)
              return 0.00;
      else{ 
             maior = result[0];
             for(i = 0; i < j-1; i++){
                   if(result[i+1] > maior)
                          maior = result[i+1];
             }
              return maior;
      }
}

main(){
       int quant_pesq, i;
       
       
       scanf("%d", &quant_pesq);
       
       float candidato[quant_pesq], concorrente[quant_pesq], result;
       
       for(i = 0; i < quant_pesq; i++)
             scanf("%f", &candidato[i]);
       
       for(i = 0; i < quant_pesq; i++)
             scanf("%f", &concorrente[i]);
             
       result = vantagem(&candidato, &concorrente, quant_pesq); 
       
       printf("%.2f\n", result);  
       
      // getch();

}
