/*Descrição 
Fila de banco é sempre uma dor de cabeça. No Banco do Brasilo, existem apenas dois caixas para atender as pessoas.
porém, toda hora do almoço é um problema, pois existem duas filas de pessoas e um dos funcionários precisa ir comer. 
Então, as duas filas precisam ser integradas. Sempre dá confusão. Para minimizar o problema, o gerente do banco, muito sovina, 
ao invés de contratar mais um funcionário, propôs a seguinte solução. As pessoas da fila do funcionário que foi almoçar devem 
ser intercaladas com as pessoas da fila do funcionário que ficou trabalhando, a partir da segunda posição. E haja confusão!

Formato de entrada 
Consiste dos inteiros n, m e k (0<=n <=10000, 0<=m <=10000, 1<=k<=2) correspondendo, respectivamente, a quantidade de pessoas que 
existem em cada fila e qual foi à fila que o funcionário foi almoçar, sendo k=1 para a primeira fila e k=2 para a segunda fila.
Seguidos de n inteiros representando as pessoas da primeira fila e m inteiros representando as pessoas da segunda fila. 
Os inteiros nunca se repetem.

Formato de saída 
Consiste em uma sequência de inteiros, um em cada linha representando as pessoas da nova fila.*/

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
