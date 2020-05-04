/*Descrição 
A UFAL está organizando uma olimpíada e precisa de sua ajuda para escrever um programa que dada à quantidade de medalhas dos países por 
modalidade, gere a lista de classificação. Os países serão identifcados por números inteiros.
A colocação é definida da seguinte forma, do país com o maior número de medalhas de ouro ao de menor número.
Se houver empate, o melhor colocado é o país que conseguiu o maior número de medalhas de prata. Se houver empate também no número de
 medalhas de prata, o melhor colocado é o país que recebeu o maior número de medalhas de bronze. Se ainda assim houver empate, o melhor 
 classifcado é o que tem o menor número de identifcação.

Formato de entrada 
A entrada contém um conjunto de testes, que deve ser lido do dispositivo de entrada padrão.
A primeira linha da entrada contém dois números inteiros N e M, separados por um espaço em branco, indicando respectivamente o número de 
países (1 <= N <= 100) e o número de modalidades esportivas envolvidas na competição (1 <= M <= 100). Os países são identificados por números 
inteiros de 1 a N.
Cada uma das M linhas seguintes contém três números inteiros O, P e B, separados por um espaço em branco, representando os países cujos 
atletas receberam respectivamente medalhas de ouro (1 <= O <= N), prata (1 <= P <= N) e bronze (1 <= B <= N).
Assim, se uma das M linhas contém os números 3 2 1, significa que nessa modalidade a medalha de ouro foi ganha pelo país 3, a de prata pelo
país 2 e a de bronze pelo país 1.

Formato de saída 
Seu programa deve imprimir na saída padrão, N linhas, cada uma contendo o número que representa o país. Os países devem ser impressos na 
ordem decrescente de classificação (o primeiro número representa o país que é o primeiro colocado, o segundo número representa o país que é o 
segundo colocado, e assim por diante).*/

#include <stdio.h>
//#include <conio.h>

void trocar (int *id, int *cont_ouro, int *cont_prata, int *cont_bronze, int i, int j){
           int aux;
           
           aux = id[i];
           id[i] = id[j];
           id[j] = aux;
                   
           aux = cont_ouro[i];
           cont_ouro[i] = cont_ouro[j];
           cont_ouro[j] = aux;
                   
           aux = cont_prata[i];
           cont_prata[i] = cont_prata[j];
           cont_prata[j] = aux;
                   
           aux = cont_bronze[i];
           cont_bronze[i] = cont_bronze[j];
           cont_bronze[j] = aux; 
}

main(){
       int  num_paises, num_modalidades, j, i, ouro, prata, bronze, aux;
       
       scanf("%d %d", &num_paises, &num_modalidades);
       
       int id[num_paises], cont_ouro[num_modalidades], cont_prata[ num_modalidades], cont_bronze[ num_modalidades];        
       
       for ( i = 0; i < num_paises; i++ ){ 
                 id[i] = i+1;              // identificadores dos paises
                 cont_ouro[i] = 0;         
                 cont_prata[i] = 0; 
                 cont_bronze[i] = 0;
       }


       for ( i = 0; i < num_modalidades; i++){
                      
            scanf("%d %d %d", &ouro, &prata, &bronze);  
                      
            cont_ouro[ouro-1] += 1;    // soma mais 1 a cada ouro de um pais. Se o pais(ouro) for 2, soma mais um na posição 2-1 de cont_ouro
            cont_prata[prata-1] += 1;  // no final cont vai ficar com a quatidade de medalhas de cada pais
            cont_bronze[bronze-1] += 1;
       }
                
                
       for ( i = 0; i < num_paises-1; i++){
           
           for ( j = i+1; j < num_paises; j++){
               
              if (cont_ouro[i] < cont_ouro[j]){ 
                               // coloca o maior elemento na primeira posição
                  trocar (&id, &cont_ouro, &cont_prata, &cont_bronze, i, j);      
              }
              
              else if ( cont_ouro[i] == cont_ouro[j]){
                   
                      if ( cont_prata[i] < cont_prata[j] ){
                           
                            trocar (&id, &cont_ouro, &cont_prata, &cont_bronze, i, j);  
                           
                      }
                      
                      else if ( cont_prata[i] == cont_prata[j] ){
                           
                               if ( cont_bronze[i] < cont_bronze[j] ){
                           
                                     trocar (&id, &cont_ouro, &cont_prata, &cont_bronze, i, j);  
                               }
                               
                               else if ( id[i] > id[j] ){
                           
                                    trocar (&id, &cont_ouro, &cont_prata, &cont_bronze, i, j);  
                               }
                      }
              }
         }
       }
       
       for ( i = 0; i < num_paises; i++)
                 printf("%d\n", id[i]);
            
       
      // getch();
       
}
