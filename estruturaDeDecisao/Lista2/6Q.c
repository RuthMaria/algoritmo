/*
e.Para classificar um tri�ngulo de lados de comprimentos dados em: escaleno 
(os tr�s lados de comprimentos diferentes), is�sceles (dois lados de comprimentos iguais) 
ou equil�tero (os tr�s lados de comprimentos iguais).
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
