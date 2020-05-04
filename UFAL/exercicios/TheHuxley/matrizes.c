/*
Descri��o 
Isquesildo � um rapaz muito criativo e inventou um novo jogo para ensinar matem�tica aos seus filhos. Ele desenha em uma folha de papel um 
tabuleiro de
dimens�es n X m. Depois numera cada um das c�lulas do tabuleiro da esquerda para a direita, de cima para baixo, come�ando com o valor 1. 
Ent�o ele pede ao seus filhos que executem as seguintes opera��es:
 
Some todos os valores de todas as c�lulas do tabuleiro, chame esse valor de t;
Some todos os valores da diagonal superior direita da c�lula 1, incluindo a pr�pria c�lula, chame esse valor de x;
Some os valores da primeira e da �ltima coluna do tabuleiro e chame-os de a e b, respectivamente;
Some todos os valores da primeira e da �ltima linha e chame-os de c e d, respectivamente;
Some todos os valores da diagonal superior esquerda da ultima c�lula da �ltima linha (linha mais abaixo) do tabuleiro , chame esse valor de y;

Qual o resultado da express�o ( t - (x+y) + (a *b) - (c*d) ) / (n*m) ?
 

Formato de entrada 
Consiste de 02 n�meros inteiros n e m (n>=0, m>=0) representando, respectivamente, o n�mero de linhas e colunas do tabuleiro. A entrada acaba 
quando n=0 e m = 0.

Formato de sa�da 
Consiste de um n�mero real, arredondado para duas casas decimais, resultado da express�o destacada na descri��o.
Para o caso onde n = 0 ou m = 0 a resposta deve ser 0.00

*/

#include <stdio.h>
//#include <conio.h>

main(){
       int n, m, i, j, cont = 1,  s_total, prim_colum, ult_colum, ult_linha, prim_linha, diag_sup_esquerda_pri, diag_sup_esquerda_ult, k, f;
       
       double result;
       
       for (; ;){
           
            s_total = prim_colum = ult_colum = ult_linha = prim_linha = diag_sup_esquerda_pri = diag_sup_esquerda_ult = 0;
            result = 0.00;
            cont = 1;
            scanf("%d%d", &n, &m);
           
           k = n-1;
           f = m-1;
           
           int mat[n][m];
           
           if (n == 0 && m == 0)
                   exit(1);
              
           if (n == 0 || m == 0)
                   printf("%.2f\n", result);
                   
           else {
                for( i = 0; i < n; i++){
                    for( j = 0; j < m; j++){
                        mat[i][j] = cont;
                       cont++;                            
                    }
                }
           
               for( i = 0; i < n; i++){
                   for( j = 0; j < m; j++){
                      s_total += mat[i][j];
                     
                      if (i == 0)
                            prim_linha += mat[0][j];
                            
                      if (i == n-1)
                            ult_linha += mat[n-1][j];
                         
                      if (i == j)
                            diag_sup_esquerda_pri += mat[i][i];
                     
                      if ( k >=0 && f >=0){
                            diag_sup_esquerda_ult += mat[k][f];
                            k--;
                            f--;  
                      }
                      
                      if (j == 0)      
                           prim_colum += mat[i][0];   
                           
                      if (j == m-1)   
                            ult_colum += mat[i][m-1];    
                 }
           }

           result = (double)(s_total - (diag_sup_esquerda_pri + diag_sup_esquerda_ult) + ( prim_colum * ult_colum) - (prim_linha * ult_linha))/(n * m);
           printf("%.2lf\n", result);   
         }
       }      
       
      // getch();
}
