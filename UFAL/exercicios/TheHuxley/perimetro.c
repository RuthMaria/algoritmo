/*Descrição
Seu objetivo é determinar o perímetro de um polígono regular inscrito numa circunferência, dados o número de lados do polígono e o raio da 
circunferência.

Formato de entrada
Um inteiro N indicando o número de lados do polígono regular inscrito. E um número de ponto flutuante R indicando o raio do círculo.

Formato de saída
A saída consiste de um número real com duas casas decimais representando o perímetro do polígono de N lados inscrito na circunferência de 
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
