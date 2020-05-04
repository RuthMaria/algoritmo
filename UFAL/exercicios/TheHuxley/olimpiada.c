/*Descri��o 
A UFAL est� organizando uma olimp�ada e precisa de sua ajuda para escrever um programa que dada � quantidade de medalhas dos pa�ses por 
modalidade, gere a lista de classifica��o. Os pa�ses ser�o identifcados por n�meros inteiros.
A coloca��o � definida da seguinte forma, do pa�s com o maior n�mero de medalhas de ouro ao de menor n�mero.
Se houver empate, o melhor colocado � o pa�s que conseguiu o maior n�mero de medalhas de prata. Se houver empate tamb�m no n�mero de
 medalhas de prata, o melhor colocado � o pa�s que recebeu o maior n�mero de medalhas de bronze. Se ainda assim houver empate, o melhor 
 classifcado � o que tem o menor n�mero de identifca��o.

Formato de entrada 
A entrada cont�m um conjunto de testes, que deve ser lido do dispositivo de entrada padr�o.
A primeira linha da entrada cont�m dois n�meros inteiros N e M, separados por um espa�o em branco, indicando respectivamente o n�mero de 
pa�ses (1 <= N <= 100) e o n�mero de modalidades esportivas envolvidas na competi��o (1 <= M <= 100). Os pa�ses s�o identificados por n�meros 
inteiros de 1 a N.
Cada uma das M linhas seguintes cont�m tr�s n�meros inteiros O, P e B, separados por um espa�o em branco, representando os pa�ses cujos 
atletas receberam respectivamente medalhas de ouro (1 <= O <= N), prata (1 <= P <= N) e bronze (1 <= B <= N).
Assim, se uma das M linhas cont�m os n�meros 3 2 1, significa que nessa modalidade a medalha de ouro foi ganha pelo pa�s 3, a de prata pelo
pa�s 2 e a de bronze pelo pa�s 1.

Formato de sa�da 
Seu programa deve imprimir na sa�da padr�o, N linhas, cada uma contendo o n�mero que representa o pa�s. Os pa�ses devem ser impressos na 
ordem decrescente de classifica��o (o primeiro n�mero representa o pa�s que � o primeiro colocado, o segundo n�mero representa o pa�s que � o 
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
                      
            cont_ouro[ouro-1] += 1;    // soma mais 1 a cada ouro de um pais. Se o pais(ouro) for 2, soma mais um na posi��o 2-1 de cont_ouro
            cont_prata[prata-1] += 1;  // no final cont vai ficar com a quatidade de medalhas de cada pais
            cont_bronze[bronze-1] += 1;
       }
                
                
       for ( i = 0; i < num_paises-1; i++){
           
           for ( j = i+1; j < num_paises; j++){
               
              if (cont_ouro[i] < cont_ouro[j]){ 
                               // coloca o maior elemento na primeira posi��o
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
