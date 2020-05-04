/*Formato de entrada
A primeira linha da entrada consiste de um número K representando o número de jogos que serão realizados.
A próxima linha consiste de um número N, [0 < N < 8], representando o tamanho da senha a ser utilizada no próximo jogo.
A próxima linha contém uma senha contendo dígitos, entre 1 e 7, com exatamente N caracteres que será utilizada no jogo em questão.
As próximas linhas contêm os chutes dados pelo segundo jogador e, portanto, consistem de uma sequência de dígitos, entre 1 e 7,
com exatamente N caracteres. Cada jogo termina quando a senha é acertada ou quando o jogador desiste de tentar digitando uma seqüência de 
N caracteres '0'. Após cada jogo, o próximo jogo tem inicio a partir da leitura de uma nova senha.

Formato de saída
Para cada chute, seu programa deve imprimir (E,B), correspondendo ao número de excelentes e bons respectivamente.

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
                            senha_adiver[j] = '0'; // pra não contar novamente
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
