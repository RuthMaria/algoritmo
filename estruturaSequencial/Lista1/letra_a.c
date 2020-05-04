/*
a. Receba duas notas, calcule e mostre a média ponderada dessas notas, considerando peso
2 para a primeira nota e peso 3 para a segunda;
*/

#include<stdio.h>
#include<conio.h>

main(){
       float n1, n2, media = 0;
       
       printf("\n Notas: ");
       scanf("%f%f",&n1, &n2);
       
       media = (n1*2+n2*3)/2;
       
       printf("\n Media: %.2f", media);
       
       getch();
}
