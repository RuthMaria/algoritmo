/*
e.Para classificar um triângulo de lados de comprimentos dados em: escaleno 
(os três lados de comprimentos diferentes), isósceles (dois lados de comprimentos iguais) 
ou equilátero (os três lados de comprimentos iguais).
*/

#include<stdio.h>
#include<conio.h>

main(){
       int a, b, c;
       
       printf("\n Lados do triangulo: ");
       scanf("%d%d%d", &a, &b, &c);
                      
       if(a==b && b==c && c==a)
                      printf("\n triangulo equilatero");

       if(a!=b && b!=c && c!=a )
                      printf("\n triangulo escaleno");
                     
       if(a==b && c!=a || b==c && a!=c)
                      printf("\n triangulo  isosceles ");
                      
       getch();
}
