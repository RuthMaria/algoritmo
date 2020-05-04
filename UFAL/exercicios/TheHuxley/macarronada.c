/*Descri��o 
A tia de lucas estava fazendo uma macarronada quando de repente deixou cair o macarr�o no ch�o, para n�o jogar no lixo lucas pegou o 
macarr�o para fazer esculturas de macarr�o.
Lucas precisa de tri�ngulos para fazer sua constru��o. Na queda algum dos peda�os de macarr�o se partiram e lucas quer saber com quais 
peda�os de macarr�o ele pode fazer tri�ngulos.
Escreva um programa que dada as coordenadas de tr�s peda�os de macarr�o diga se lucas pode fazer um tri�ngulo com eles.

Formato de entrada 
A primeira linha cont�m um inteiro N que indica o n�mero de casos de teste.
Para cada caso de teste haver�o tr�s linhas, cada qual com quatro n�meros inteiros Xi, Yi, Xf, Yf representando as coordenadas dos pontos que
 definem o macarr�o no ch�o.

Formato de sa�da 
Para cada caso de teste escreva SIM se lucas puder fazer um tri�ngulo ou NAO em caso contr�rio
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
