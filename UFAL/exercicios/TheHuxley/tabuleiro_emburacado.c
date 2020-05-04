/*Formato de entrada 
A primeira linha da entrada contém N, o número de movimentos do passeio. A segunda
linha contém N inteiros M1,M2, . . . ,MN, separados por um espaço em branco,
correspondentes aos N movimentos do cavalo no passeio. Um movimento pode levar
o cavalo a cair em um buraco, mas nunca leva o cavalo a sair do tabuleiro.
Considere:
1 <= N <= 100
1 <= Mi <= 8, para i = 1, 2, . . . ,N.

Formato de saída 
Seu programa deve imprimir uma única linha, contendo um único número inteiro, o número
de movimentos do cavalo até terminar o passeio ou o cavalo cair em um buraco.*/


#include <stdio.h>
//#include <conio.h>

main(){
       int quant_passeio, i, j, k = 0, num_movimento, lin = 3, col = 4, aux, cont = 0;
       
       scanf("%d", &quant_passeio);
       
       int array[8][8];
       
       if (1 <=  quant_passeio &&  quant_passeio <= 100){
       
          for (i = 7; i >= 0; i--){
               for (j = 0; j <= 7; j++){
                   array[i][j] = 0;
               }
               array[3][1] = 1;
               array[3][2] = 1;
               array[5][2] = 1;
               array[4][5] = 1;  
               array[3][4] = 2;
          }
        
          while ( k <  quant_passeio){
                
                scanf("%d", &num_movimento);
                        
                        if(num_movimento == 1){
                                 aux = array[lin+2][col+1];
                                 array[lin+2][col+1] = array[lin][col];
                                 array[lin][col] = 0;
                                 lin += 2;
                                 col += 1;
                                 
                                 cont++;
                        
                                 if (aux == 1){
                                      break;
                                 }
                                       
                        }
                        
                        if(num_movimento == 2){
                                 aux = array[lin+1][col+2];
                                 array[lin+1][col+2] = array[lin][col];
                                 array[lin][col] = 0;
                                 
                                 lin += 1;
                                 col += 2;
                                 
                                 cont++;
                                  
                                 if (aux == 1){
                                      break;
                                 }
                        }
                        
                        if(num_movimento == 3){
                                 aux = array[lin-1][col+2];
                                 array[lin-1][col+2] = array[lin][col];
                                 array[lin][col] = 0;
                                 
                                 lin -= 1;
                                 col += 2;
                                 
                                 cont++;
                                  
                                 if (aux == 1){
                                      break;
                                 }
                        
                        }
                        if(num_movimento == 4){
                                 aux = array[lin-2][col+1];
                                 array[lin-2][col+1] = array[lin][col];
                                 array[lin][col] = 0;
                                 
                                 lin -= 2;
                                 col += 1;
                                 
                                 cont++;
                                  
                                 if (aux == 1){
                                      break;
                                 }
                        }
                        
                        if(num_movimento == 5){
                                 aux = array[lin-2][col-1];
                                 array[lin-2][col-1] = array[lin][col];
                                 array[lin][col] = 0;
                                 
                                 lin -= 2;
                                 col -= 1;
                                 
                                 cont++;
                                  
                                 if (aux == 1){
                                      break;
                                 }
                        }
                        
                        if(num_movimento == 6){
                                 aux = array[lin-1][col-2];
                                 array[lin-1][col-2] = array[lin][col];
                                 array[lin][col] = 0;
                                 
                                 lin -= 1;
                                 col -= 2;
                                 
                                 cont++;
                                  
                                 if (aux == 1){
                                      break;
                                 }
                        }
                        
                        if(num_movimento == 7){
                                 aux = array[lin+1][col-2];
                                 array[lin+1][col-2] = array[lin][col];
                                 array[lin][col] = 0;
                                 
                                 lin += 1;
                                 col -= 2;
                                 
                                 cont++;
                                  
                                 if (aux == 1){
                                      break;
                                 }
                        }
                        
                        if(num_movimento == 8){
                                 aux = array[lin+2][col-1];
                                 array[lin+2][col-1] = array[lin][col];
                                 array[lin][col] = 0;
                                 
                                 lin += 2;
                                 col -= 1;
                                 
                                 cont++;
                                 
                                 if (aux == 1){                                      
                                      break;
                                 }
                        }

               k++;
           }

          printf("%d\n", cont);
          }
       
      // getch();
}
