/*Descrição 
A tia de lucas estava fazendo uma macarronada quando de repente deixou cair o macarrão no chão, para não jogar no lixo lucas pegou o 
macarrão para fazer esculturas de macarrão.
Lucas precisa de triângulos para fazer sua construção. Na queda algum dos pedaços de macarrão se partiram e lucas quer saber com quais 
pedaços de macarrão ele pode fazer triângulos.
Escreva um programa que dada as coordenadas de três pedaços de macarrão diga se lucas pode fazer um triângulo com eles.

Formato de entrada 
A primeira linha contém um inteiro N que indica o número de casos de teste.
Para cada caso de teste haverão três linhas, cada qual com quatro números inteiros Xi, Yi, Xf, Yf representando as coordenadas dos pontos que
 definem o macarrão no chão.

Formato de saída 
Para cada caso de teste escreva SIM se lucas puder fazer um triângulo ou NAO em caso contrário
*/

#include <stdio.h>
#include <math.h>


main(){
    int i, j, n, x1, x2, y1, y2;
    float d1, d2, d3;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
          for(j = 1; j <=3; j++){
               scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
               
               if(j == 1)
                     d1 = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
               
               if(j == 2)
                     d2 = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
                     
               if(j == 3)
                     d3 = sqrt(pow(x2-x1,2)+pow(y2-y1,2));                    
          }
   	      if (d1+d2 > d3 && d1+d3 > d2 && d3+d2 > d1)
   	             printf ("SIM\n");
			    
		  else 
                 printf ("NAO\n");  
    }    

}
