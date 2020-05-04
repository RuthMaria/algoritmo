/*2. Faça um algoritmo que calcule a área de um triângulo. São dadas a base e a altura do triângulo.*/

#include<stdio.h>
#include<conio.h>

main(){
       float base, altura;
        
       printf("\n\t\t\t CALCULO DA AREA DO TRIANGULO \n\n");           
       printf(" informe a base e altura  \n");
       scanf("%f%f", &base, &altura);
       
       printf("A area eh %.2f", (base*altura)/2);       
       
       getch(); 
       
}
