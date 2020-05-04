/*

7. O índice de massa corporal (IMC) de uma pessoa é igual ao seu peso (kg) dividido pelo
quadrado de sua altura (m). Dados o peso e a altura de uma pessoa, informe o valor de seu
IMC.
*/


#include<stdio.h>
#include<conio.h>

main(){
       float peso, altura, imc;

       printf("Informe seu peso e altura: "); 
       scanf("%f%f", &peso, &altura);
             
       imc = peso/pow(altura, 2);
       
       printf("\n\n Seu IMC eh: %.0f", imc);
       
       getch();
}
