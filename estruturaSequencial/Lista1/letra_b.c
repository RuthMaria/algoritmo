/*
b. Receba o peso de uma pessoa, calcule e mostre:
i. O novo peso, se a pessoa engordar 15% do peso digitado.
ii. O novo peso, se a pessoa emagrecer 20% do peso digitado.
*/

#include<stdio.h>
#include<conio.h>

main(){
       float peso, novo_peso1, novo_peso2;
       
       printf("\n Peso: ");
       scanf("%f", &peso);
       
       novo_peso1 = peso+(peso*0.15);
       novo_peso2 = peso-(peso*0.2);
       
       printf("\n Se engordar 15 por cento: %.2f", novo_peso1);
       printf("\n Se emagrecer 20 por cento: %.2f", novo_peso2);
       
       getch();
}
       
