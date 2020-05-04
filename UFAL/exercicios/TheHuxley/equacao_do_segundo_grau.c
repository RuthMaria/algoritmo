/*Descrição
Toda vez que Ambrósio vai calcular as raízes de uma equação do segundo grau, esquece de algum detalhe e calcula errado. 
Para evitar esquecimentos, resolveu fazer um programa que calcula as raízes da equação de segundo grau.

Formato de entrada
Consiste dos números reais a, b e c, que correspondem aos coeficientes da equação de segundo grau (ax²+bx+c=0).

Formato de saída
Caso existam as raízes da equação, consiste de dois números reais formatados com duas casas decimais, representando as mesmas.
Caso as raízes não existam, o sistema deve mostrar a mensagem (não existem raízes reais): NRR
Caso não seja uma equação de segundo grau, o sistema deve mostrar a mensagem (não é uma equação do segundo grau): NEESG*/


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
