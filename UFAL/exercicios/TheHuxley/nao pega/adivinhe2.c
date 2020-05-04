/*Formato de entrada
A primeira linha da entrada consiste de um n�mero K representando o n�mero de jogos que ser�o realizados.
A pr�xima linha consiste de um n�mero N, [0 < N < 8], representando o tamanho da senha a ser utilizada no pr�ximo jogo.
A pr�xima linha cont�m uma senha contendo d�gitos, entre 1 e 7, com exatamente N caracteres que ser� utilizada no jogo em quest�o.
As pr�ximas linhas cont�m os chutes dados pelo segundo jogador e, portanto, consistem de uma sequ�ncia de d�gitos, entre 1 e 7,
com exatamente N caracteres. Cada jogo termina quando a senha � acertada ou quando o jogador desiste de tentar digitando uma seq��ncia de 
N caracteres '0'. Ap�s cada jogo, o pr�ximo jogo tem inicio a partir da leitura de uma nova senha.

Formato de sa�da
Para cada chute, seu programa deve imprimir (E,B), correspondendo ao n�mero de excelentes e bons respectivamente.

*/

#include <stdio.h>
#include <string.h>

int main()
  {
      int register i, j, l, mesma_posicao, posicao_diferentes;
      int  num_jogos, tam_senha;
      

      scanf("%d%d", &num_jogos, &tam_senha);

      char  senha[tam_senha+1], senha_adiver[tam_senha+1], aux2, aux[tam_senha+1];

      for( i = 0; i < num_jogos; i++){
             scanf("%s", &senha);
             fflush(stdin);
             
             scanf("%s", &senha_adiver);
             mesma_posicao = posicao_diferentes = 0;
            
             while(strcmp(senha_adiver, "0000") != 0){                  
                                 
                 strcpy (aux, senha_adiver);
                 mesma_posicao = posicao_diferentes = 0;                      
                           
                 int quant = strlen(senha), l ; 
                 
                 for ( j = 0; j < quant; j++){                 
                       if ( senha[j] == senha_adiver[j]){
                            senha_adiver[j] = '0'; // pra n�o contar novamente
                            mesma_posicao++;
                       }
                            
                       aux2 = senha_adiver[j];
                       if (strrchr(senha, aux2) && aux2 != ' ')                              
                              posicao_diferentes++;
                 }
                 
                 strcpy (senha_adiver, aux);
                   
                 if ( strcmp(senha, senha_adiver) == 0 ){
                          printf("(%d,%d)\n", mesma_posicao, posicao_diferentes);
                          break;
                 }
                 
                 else
                          printf("(%d,%d)\n", mesma_posicao, posicao_diferentes);
                          
                 scanf("%s", &senha_adiver);
            }
       }
}
