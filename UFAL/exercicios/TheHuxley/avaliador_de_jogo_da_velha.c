/*Descri��o
Est� ocorrendo o campeonato mundial de jogo da velha em nerderlands, participantes do mundo inteiro est�o jogando e h� muitos jogos a avaliar,
para tornar as coisas mais r�pidas o comit� organizador do campeonato pediu sua ajuda Voc� deve escrever um programa que, dada a configura��o
do jogo.

identifique se:
O jogo est� em andamento
A Jogada � Ilegal
'X' venceu
'O' venceu
O X sempre come�a. Uma jogada � considerada ilegal se algu�m jogou mais de uma vez, ou continuou jogando depois que algu�m venceu.

Formato de entrada
A primeira linha indica o n�mero jogos a serem analisados. Para cada jogo haver�o tr�s linhas identificando cada linha contendo 3 caracteres
separados por espa�o que mostram a configura��o do tabuleiro. Onde '_' significa que ningu�m jogou nessa casa

Formato de sa�da
Para cada jogo o programa deve imprimir EM_ANDAMENTO se o jogo estiver em andamento ILEGAL se for uma configura��o ilegal X_VENCEU se
X venceu e O_VENCEU se O venceu.
em caso de empate considere que o jogo est� em andamento*/

#include <stdio.h>
//#include <conio.h>

main(){
       int quant, i, j, k = 0, cont_x, cont_o, ganhou;
       char array[3][3];

       scanf("%d", &quant);
       getchar();

       while ( k < quant){
            
            cont_x = cont_o = ganhou = 0;

           for(i = 0; i < 3; i++){
                  for(j = 0;j<3;j++){
                      scanf("%c",&array[i][j]);
                      getchar();
                  
                      if (array[i][j] == 'X')
                          cont_x++;
                          
                      if (array[i][j] == 'O')
                          cont_o++;
                 }
                
            }            
            for ( i = 0; i < 3; i++){
                   if ((array[i][0] == 'X' && array[i][1] == 'X' && array[i][2] == 'X')){ // verifica linhas    
                                               
                          if ( ganhou == 0 )
                               ganhou = 1;
                                                      
                          else {
                               ganhou = 3;
                               break;
                          }
                    }
                    
                    else if ((array[i][0] == 'O' && array[i][1] == 'O' && array[i][2] == 'O')){ // verifica linhas   
                          if ( ganhou == 0 )
                               ganhou = 2;
                                                      
                          else {
                               ganhou = 3;
                               break;
                          }
                   }
            }
            if (ganhou != 3){
                for ( i = 0; i < 3; i++){
  
                     if ((array[0][i] == 'X' && array[1][i] == 'X' && array[2][i] == 'X')){ // verifica colunas
            
                          if ( ganhou == 0 )
                               ganhou = 1;
                                                      
                          else {
                               ganhou = 3;
                               break;
                          }
                     }
                    
                     else if ((array[0][i] == 'O' && array[1][i] == 'O' && array[2][i] == 'O')){ // verifica colunas
                       
                         if ( ganhou == 0 )
                               ganhou = 2;
                                                      
                          else {
                               ganhou = 3;
                               break;
                          }
                   }
               }
            }
              
            if (ganhou != 3){                       
                 if ( (array[0][0] == 'X' && array[1][1] == 'X' && array[2][2] == 'X') ){ // verifica diagonal principal
  
                       if ( ganhou == 0 )
                               ganhou = 1;
                                                      
                       else {
                               ganhou = 3;
                               break;
                       }
                 }
 
                 else if ( (array[0][0] == 'O' && array[1][1] == 'O' && array[2][2] == 'O') ){ // verifica diagonal principal
                      
                          if ( ganhou == 0 )
                               ganhou = 2;
                                                      
                          else {
                               ganhou = 3;
                               break;
                          }
                }      
            }           
            
            if (ganhou != 3){
                 if ( (array[0][2] == 'X' && array[1][1] == 'X' && array[2][0] == 'X')){  // verifica diagonal secundaria
                     if ( ganhou == 0 )
                           ganhou = 1;
                                                      
                     else {
                           ganhou = 3;
                            break;
                     }
                 }       
            
                 else if ( (array[0][2] == 'O' && array[1][1] == 'O' && array[2][0] == 'O')){ // verifica diagonal secundaria
                     if ( ganhou == 0 )
                           ganhou = 1;
                                                      
                     else {
                           ganhou = 3;
                            break;
                     }
                } 
            }       
        
         if (ganhou == 1){
               if ((cont_x-1) == cont_o)    
                      printf("X_VENCEU\n");
               else
                      printf("ILEGAL\n");
         }
         else if (ganhou == 2) {
                 if (cont_x == cont_o)   
                     printf("O_VENCEU\n");
                     
                 else
                     printf("ILEGAL\n");
         }
                 
         else if (ganhou == 3)    
                 printf("ILEGAL\n");
                 
              else
                    printf("EM_ANDAMENTO\n");
                    
            k++;
        }
        
      

       // getch();
}
