/*Descrição
Faça um programa que calcule a média, o desvio padrão e a quantidade de números maiores que a média de n números reais dados. O número máximo
de números dados é 10000.

Formato de entrada
Uma sequência de n, onde n<=10000, números reais separados por um final de linha. A entrada se encerra quando o número lido for -1

Formato de saída
A média formatada com duas casas decimais.
O desvio padrão formatado com duas casas decimais
Um inteiro indicando a quantidade de notas maiores que a média.
Cada um dos três números acimas deve ser seguido de um final de linha.*/

#include<stdio.h>
#include<math.h>

main(){
    int i = 0, j, k = 0;
    float media[10000], soma = 0.00, media_t = 0.00, soma_d = 0.00;

    do{          
        i++;
        if(i <= 10000){
            scanf("%f", &media[i]);

            if(media[i] != -1 )
                  soma+= media[i];
        }

    }while(media[i] != -1);
    
    i--;
    
    media_t = soma/i;
    
    for(j = 1; j <= i; j++){
          if(media[j] > media_t)
                k++;
                
          soma_d += pow(media[j]-media_t, 2);
     
    }

    printf("%.2f\n", media_t);
    printf("%.2f\n", sqrt(soma_d/(i-1)));
    printf("%d\n", k);
 
}

