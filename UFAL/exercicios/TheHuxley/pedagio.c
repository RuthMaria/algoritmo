/*
Descri��o
A inven��o do carro tornou muito mais r�pido e mais barato realizar viagens de longa dist�ncia. Realizar uma viagem rodovi�ria tem dois
tipos de custos: cada quil�metro percorrido na rodovia tem um custo associado (n�o s� devido ao consumo de combust�vel mas tamb�m devido ao 
desgaste das pe�as do carro, pneus, etc.), mas tamb�m � necess�rio passar por v�rios ped�gios localizados ao longo da rodovia. 
Os ped�gios s�o igualmente espa�ados ao logo da rodovia; o come�o da estrada n�o possui um ped�gio, mas o seu final pode estar logo ap�s um 
ped�gio (por exemplo, se a dist�ncia entre dois ped�gios consecutivos for de 37 km e a estrada tiver 111 km, o motorista deve pagar um ped�gio
aos 37 km, aos 74 km e aos 111 km, logo antes de terminar a sua viagem).
Dadas as caracter�sticas da rodovia e os custos com gasolina e com ped�gios, calcule o custo total da viagem.

Formato de entrada
A entrada consiste de duas linhas. A primeira linha da entrada cont�m dois inteiros L e D (1 <= L, D <= 10000), indicando o comprimento da 
estrada e a dist�ncia entre ped�gios, respectivamente. A segunda linha cont�m dois inteiros K e P (1 <= K, P <= 10000 ), indicando o custo por
quil�metro percorrido e o valor de cada ped�gio. O primeiro ped�gio est� localizado no quil�metro D da estrada (ou seja, a dist�ncia do in�cio
da estrada para o primeiro ped�gio � D quil�metros).

Formato de sa�da
Seu programa deve imprimir uma �nica linha contendo um �nico inteiro, indicando o custo total da viagem.
*/


#include <stdio.h>
//#include <conio.h>

main(){
       int comp_estrada, dist_pedagio, custo_km, v_pedagio, soma = 0, cont = 0; 
         
       scanf("%d%d\n%d%d", &comp_estrada, &dist_pedagio, &custo_km, &v_pedagio);
          
              printf ("%d\n", ((comp_estrada / dist_pedagio) * v_pedagio) + (comp_estrada * custo_km));
       
       //getch();          
}
