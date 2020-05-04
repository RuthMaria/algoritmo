/*3. Faça um algoritmo que através de quatro notas calcule as médias aritmética, harmônica e geométrica. */

#include<stdio.h>
#include<conio.h>

main(){
       float nota1, nota2, nota3, nota4;
        
       printf("\n\t\t\t CALCULO DA MEDIA \n\n");           
       printf(" informe as 4 notas  \n");
       scanf("%f%f%f%f", &nota1, &nota2, &nota3, &nota4);
       
       printf("\n\n A media aritmetica das notas eh %.2f", (nota1+nota2+nota3+nota4)/4);
       printf("\n A media harmonica das notas eh %.2f", 4/(1/nota1 + 1/nota2 + 1/nota3 + 1/nota4));
       printf("\n A media geometrica das notas eh %.2f", pow(nota1*nota2*nota3*nota4,0.25));       
       
       getch(); 
       
}
