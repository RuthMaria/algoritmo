/*
11) Tendo como entrada a altura e o sexo de uma pessoa, construa um algoritmo que
calcule e apresente o seu peso ideal, utilizando as seguintes fórmulas:
? Para homens: (72.7 * altura) - 58
? Para mulheres: (62.1 * altura) - 44.7;
*/

#include<stdio.h>
#include<conio.h>

main(){
       float altura, peso_ideal;
       char sexo;
       
       printf("\n Sexo F/M: ");
       scanf("%c", &sexo);
       
       printf("\n Altura: ");
       scanf("%f", &altura);
       
       if(sexo == 'f' || sexo == 'F'){
                  peso_ideal = (62.1*altura)-44.7;
                  printf("\n Peso ideal: %.0f", peso_ideal);
       }
       
       if(sexo == 'm' || sexo == 'M'){
                  peso_ideal = (72.7*altura)-58;
                  printf("\n Peso ideal: %.0f", peso_ideal);
       }
       
       getch();
}
