/*Descri��o
Toda vez que Ambr�sio vai calcular as ra�zes de uma equa��o do segundo grau, esquece de algum detalhe e calcula errado. 
Para evitar esquecimentos, resolveu fazer um programa que calcula as ra�zes da equa��o de segundo grau.

Formato de entrada
Consiste dos n�meros reais a, b e c, que correspondem aos coeficientes da equa��o de segundo grau (ax�+bx+c=0).

Formato de sa�da
Caso existam as ra�zes da equa��o, consiste de dois n�meros reais formatados com duas casas decimais, representando as mesmas.
Caso as ra�zes n�o existam, o sistema deve mostrar a mensagem (n�o existem ra�zes reais): NRR
Caso n�o seja uma equa��o de segundo grau, o sistema deve mostrar a mensagem (n�o � uma equa��o do segundo grau): NEESG*/


#include<stdio.h>
#include<math.h>

main() {
       float a, b, c, delta, x1, x2;
     
       scanf("%f%f%f", &a, &b, &c);
             
       if (a != 0) {            
           delta = pow(b, 2) - (4 * a * c);
           x1 = (- b + sqrt(fabs(delta))) / (2 * a);
           x2 = (- b - sqrt(fabs(delta))) / (2 * a);
                      
           if (delta >= -0.000000001)
                 printf("%.2f\n%.2f", x1, x2);
           
           if(delta < -0.000000001)
                 printf("NRR\n");
       }                   
       else {
            printf("NEESG\n");
       } 
}
