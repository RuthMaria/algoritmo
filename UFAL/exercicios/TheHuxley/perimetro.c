/*Descri��o
Seu objetivo � determinar o per�metro de um pol�gono regular inscrito numa circunfer�ncia, dados o n�mero de lados do pol�gono e o raio da 
circunfer�ncia.

Formato de entrada
Um inteiro N indicando o n�mero de lados do pol�gono regular inscrito. E um n�mero de ponto flutuante R indicando o raio do c�rculo.

Formato de sa�da
A sa�da consiste de um n�mero real com duas casas decimais representando o per�metro do pol�gono de N lados inscrito na circunfer�ncia de 
raio R.*/

#include <stdio.h>

#include <math.h>

main(){
       double raio, aux, num_lados, alfa;
       
       scanf("%lf%lf", &num_lados, &raio);        
       alfa = (180 / num_lados);
       aux = (sin ((M_PI*alfa) / 180));  
       printf("%.2f", (2 * raio * num_lados) * aux);           
}
