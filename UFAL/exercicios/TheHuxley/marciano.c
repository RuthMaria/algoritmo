/*Estamos no ano 2048 e um dos sonhos da humanidade torna-se finalmente realidade: a coloniza��o do planeta Marte. Nossos primeiros colonizadores
 acabam de chegar, e j� come�am a fazer as prepara��es (como a instala��o de c�pulas de oxig�nio e tratamento do solo para agricultura) para 
 que mais pessoas possam tentar uma nova vida no planeta vizinho. 
Apesar dos avan�os tecnol�gicos e desafios vencidos, ainda resta um grande problema: os foguetes usados para ir a Marte ainda s�o complicados e 
caros. Com isso, fica dif�cil enviar suprimentos para os nossos colonos (enquanto a agricultura ainda n�o � poss�vel) por muito tempo. Assim, a 
ag�ncia espacial contratou o SBC (Servi�o Bal�stico C�smico), que desenvolveu um canh�o super-potente que consegue disparar esferas at� Marte,
 sem precisar gastar milh�es de d�lares em equipamento e combust�vel.
Agora, tudo o que � necess�rio fazer para enviar suprimentos a Marte � colocar uma caixa com as encomendas dentro de uma esfera e disparar a
 mesma at� seu destino. 
Dadas as dimens�es de uma caixa com suprimentos e o raio interno da esfera que � disparada pelo canh�o, seu programa dever� dizer se � poss�vel
 enviar tal caixa para Marte usando tal esfera.

Formato de entrada
Cada entrada cont�m apenas uma linha com quatro inteiros L, A, P e R, (0 <= L, A, P, R <= 1000) que representam, respectivamente, a largura, 
altura e profundidade da caixa, e o raio da esfera.
F
ormato de sa�da
Seu programa deve imprimir um �nico caractere: 'S' (sem aspas) se � poss�vel colocar a caixa dentro da esfera, ou 'N' (sem aspas) caso
contr�rio.*/

#include <stdio.h>
//#include <conio.h>


main(){
       double raio, altura, largura, profundidade, diametro, diagonal;
       
       scanf("%lf%lf%lf%lf", &largura,  &altura, &profundidade, &raio);
       
       diametro = 2*raio;
       diagonal = sqrt( pow(largura,2)+pow(altura,2)+pow(profundidade,2) );
                  
      if( (profundidade <= diametro) && (altura <= diametro) && (largura <= diametro) && (diagonal <= diametro) )
                 printf("S\n");
      
      else
                 printf("N\n");                        
            
                
     // getch();
}
