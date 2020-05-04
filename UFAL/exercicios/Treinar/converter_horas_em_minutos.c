/*Receber uma hora e mostrar o equivalente em minutos*/

#include<stdio.h>
#include<conio.h>

main(){
       int hora, minutos, quant_minutos;
       
       printf("digite a hora e o minuto");
       scanf("%d%d", &hora, &minutos);
       
       quant_minutos = (hora*60)+minutos;
       
       printf("A hora %d:%d equivale a %d minutos",hora, minutos, quant_minutos);
       getch();
}
