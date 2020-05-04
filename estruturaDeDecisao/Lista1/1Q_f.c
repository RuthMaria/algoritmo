/*
f.Determinar as raízes reais de uma equação do 2º grau, dados os seus coeficientes.
*/


#include<stdio.h>
#include<conio.h>

main(){
        int a, b, c, delta;
        float x1,x2;
       
       printf("\n coeficientes da equacao: ");
       scanf("%d%d%d", &a, &b, &c);
       
       delta = pow(b,2)-4*a*c;
       printf("\n %c = %d\n",127, delta);
       
       if(delta == 0){
              x1 = x2 = (-b+sqrt(delta))/2*a;
              printf("\n X1:%.2f X2: %.2f", x1, x2);
       }
       
       if(delta < 0)
              printf("\n Nao ha raizes reais");
                
       if(delta > 0){
               x1 = (-b+sqrt(delta))/2*a;
               x2 = (-b-sqrt(delta))/2*a;
               printf("\n X1:%.2f     X2: %.2f", x1, x2);
       }
                
       getch();
}
               
