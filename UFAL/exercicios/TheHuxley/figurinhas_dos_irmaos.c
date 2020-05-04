/*Descri��o
Jo�o e Maria s�o dois irm�os muito briguentos. Um belo dia, o pai deles, o Sr. Carlos, comprou v�rias figurinhas do �lbum da copa.
Jo�o disse que por ser menino tinha direito a mais figurinhas. Obviamente, Maria n�o concordou e prop�s um acordo de risco.
Eles iriam dividir as figurinhas da seguinte maneira:
Jo�o ficaria com todas as figurinhas cujo n�mero de s�rie for par e Maria com as �mpares. O Sr. Carlos gostou da id�ia e prop�s um pequeno 
b�nus:- Aquele que obtivesse o maior valor somando os n�meros de s�ries das figurinhas ganharia como b�nus mais R$10,00 reais para comprar 
figurinhas s� para ele.

Formato de entrada
Consiste de um n�mero inteiro n indicando a quantidade de figurinhas a serem lidas, seguido de n inteiros correspondendo ao n�mero de s�rie
de cada figurinha. Todas as figurinhas possuem n�meros de s�rie diferentes. Note que as figurinhas podem ser repetidas. Neste caso, s� 
devemos considerar na soma do n�mero de s�rie uma �nica vez, mas contamos na quantidade de figurinhas.

Formato de sa�da
Consiste dos n�meros inteiros J, M e S, indicando respectivamente, o n�mero de figurinhas que ficaram com o Jo�o, o n�mero de figurinhas que
ficaram com Maria e a soma dos n�meros de s�rie do irm�o que ganhou o b�nus do Sr. Carlos.*/

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
