/*
Descrição
O candidato a um cargo eletivo contratou um instituto de pesquisa de opinião para acompanhar seu desempenho durante a campanha eleitoral. 
Esse instituto realizou n pesquisas ao longo da campanha, em cada uma das quais verificou o percentual de intenções de voto no candidato e
em seu principal concorrente.
Escreva uma função que receba como parâmetros o vetor com os percentuais de intenções de voto no candidato (candidato[ ]), o vetor com os
percentuais de intenções de voto no seu concorrente (concorrente[ ]) e o tamanho desses vetores (n), e determine qual o valor da maior 
vantagem percentual que o candidato teve sobre seu concorrente em uma pesquisa, isto é, a maior diferença entre os percentuais de intenções
de voto para um mesmo índice, considerando apenas quando o candidato esteve na frente do concorrente. Se o candidato nunca esteve em 
vantagem, a função deve retornar 0.00. O protótipo da função é: 
float vantagem(float candidato[], float concorrente[], int n);  (Linguagem C)
def vantagem(candidato, concorrente, n) (Python)
 
Formato de entrada
Você receberá um número inteiro n correspondente a quantidade de pesquisas realizadas, um final de linha, um conjunto de n números reais 
correspondente aos percentuais de intenções de voto no candidato, um final de linha e um conjunto de n números reais correspondente aos
percentuais de intenções de voto do concorrente.

Formato de saída
Um número real formatado com duas casas decimais correspondendo ao valor da maior vantagem percentual que o candidato teve em uma pesquisa.*/

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
