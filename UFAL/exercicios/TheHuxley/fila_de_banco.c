/*Descri��o 
Fila de banco � sempre uma dor de cabe�a. No Banco do Brasilo, existem apenas dois caixas para atender as pessoas.
por�m, toda hora do almo�o � um problema, pois existem duas filas de pessoas e um dos funcion�rios precisa ir comer. 
Ent�o, as duas filas precisam ser integradas. Sempre d� confus�o. Para minimizar o problema, o gerente do banco, muito sovina, 
ao inv�s de contratar mais um funcion�rio, prop�s a seguinte solu��o. As pessoas da fila do funcion�rio que foi almo�ar devem 
ser intercaladas com as pessoas da fila do funcion�rio que ficou trabalhando, a partir da segunda posi��o. E haja confus�o!

Formato de entrada 
Consiste dos inteiros n, m e k (0<=n <=10000, 0<=m <=10000, 1<=k<=2) correspondendo, respectivamente, a quantidade de pessoas que 
existem em cada fila e qual foi � fila que o funcion�rio foi almo�ar, sendo k=1 para a primeira fila e k=2 para a segunda fila.
Seguidos de n inteiros representando as pessoas da primeira fila e m inteiros representando as pessoas da segunda fila. 
Os inteiros nunca se repetem.

Formato de sa�da 
Consiste em uma sequ�ncia de inteiros, um em cada linha representando as pessoas da nova fila.*/

#include<stdio.h>

int main(){
       int i, j, quant1, quant2, k;
    
    
       scanf("%d%d%d", &quant1, &quant2, &k);       
       
       int fila1[quant1], fila2[quant2], result[quant1+quant2];           
    

        for(i = 0; i<quant1; i++)
            scanf("%d", &fila1[i]);
        
        for(j = 0; j<quant2; j++)
            scanf("%d", &fila2[j]);
            
            
        if(k == 1){
              j = 0;
                if(quant1 < quant2){
                    for(i = 0; i<quant2; i++){
                       if(i <= (quant1-1)){ 
                           result[j] = fila2[i];
                           j++; 
                       }
                      result[j] = fila1[i];                      
                      j++;    
                    }                                    
                }
                else{
                   for(i = 0; i<quant1; i++){  
                        if(i <= (quant2-1)){                    
                             result[j] = fila2[i];
                             j++;   
                        }
                      result[j] = fila1[i];                     
                      j++;                                        
                   }
                }
        }
        else{
            j = 0;
             if(quant1 < quant2){
                for(i = 0; i<quant2; i++){    
                      if(i <= (quant1-1)){          
                            result[j] = fila1[i];                      
                            j++;
                      }
                      
                      result[j] = fila2[i];                     
                      j++;                                        
                }
             }
             else{
                   for(i = 0; i<quant1; i++){  
                        if(i <= (quant2-1)){                    
                             result[j] = fila1[i];
                             j++;   
                        }
                      result[j] = fila2[i];                     
                      j++;                                        
                   }
             }
        }
       for(j = 0; j<quant2+quant1; j++)
              printf("%d\n", result[j]);
              
   }
