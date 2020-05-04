/*Descri��o
Fa�a um programa que calcule a m�dia, o desvio padr�o e a quantidade de n�meros maiores que a m�dia de n n�meros reais dados. O n�mero m�ximo
de n�meros dados � 10000.

Formato de entrada
Uma sequ�ncia de n, onde n<=10000, n�meros reais separados por um final de linha. A entrada se encerra quando o n�mero lido for -1

Formato de sa�da
A m�dia formatada com duas casas decimais.
O desvio padr�o formatado com duas casas decimais
Um inteiro indicando a quantidade de notas maiores que a m�dia.
Cada um dos tr�s n�meros acimas deve ser seguido de um final de linha.*/

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

