/*Descrição
João e Maria são dois irmãos muito briguentos. Um belo dia, o pai deles, o Sr. Carlos, comprou várias figurinhas do álbum da copa.
João disse que por ser menino tinha direito a mais figurinhas. Obviamente, Maria não concordou e propôs um acordo de risco.
Eles iriam dividir as figurinhas da seguinte maneira:
João ficaria com todas as figurinhas cujo número de série for par e Maria com as ímpares. O Sr. Carlos gostou da idéia e propôs um pequeno 
bônus:- Aquele que obtivesse o maior valor somando os números de séries das figurinhas ganharia como bônus mais R$10,00 reais para comprar 
figurinhas só para ele.

Formato de entrada
Consiste de um número inteiro n indicando a quantidade de figurinhas a serem lidas, seguido de n inteiros correspondendo ao número de série
de cada figurinha. Todas as figurinhas possuem números de série diferentes. Note que as figurinhas podem ser repetidas. Neste caso, só 
devemos considerar na soma do número de série uma única vez, mas contamos na quantidade de figurinhas.

Formato de saída
Consiste dos números inteiros J, M e S, indicando respectivamente, o número de figurinhas que ficaram com o João, o número de figurinhas que
ficaram com Maria e a soma dos números de série do irmão que ganhou o bônus do Sr. Carlos.*/

#include<stdio.h>

main(){
    int quant, i, j = 0, pares = 0, impares = 0, soma1 = 0, soma2 = 0, troca, aux;

    scanf("%d", &quant);

    int fig[quant];

    for(i = 0; i < quant; i++){
        scanf("%d", &fig[i]);

        if(fig[i] % 2 == 0){
              pares++;
              soma1 += fig[i];
        }

        else{
              impares++;
              soma2 += fig[i];
        }
    }
    
     for(i = 0; i<quant; i++){
             troca = 0;
             for(j = 0; j<quant-1; j++){
                   if(fig[j] > fig[j+1]){
                          aux = fig[j];
                          fig[j] = fig[j+1];
                          fig[j+1] = aux;
                          troca = 1;
                   }
             }

             if(troca == 0)
                    break;
       }
       
       i = 0;
        while(i < quant){
            if(fig[i] % 2 == 0 && fig[i] == fig[i+1])
                  soma1 -= fig[i];
                  
            if(fig[i] % 2 != 0 && fig[i] == fig[i+1])
                  soma2 -= fig[i];
                  
            i++;                        
        }
           
    printf("%d\n", pares);
    printf("%d\n", impares);
    
    if(soma1 > soma2)
          printf("%d\n", soma1);
          
    else
          printf("%d\n", soma2);  
}
