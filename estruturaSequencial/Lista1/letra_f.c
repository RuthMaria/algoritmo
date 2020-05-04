/*
f. Receba uma hora qualquer (declare duas variáveis, uma receberá a hora e outra os
minutos), calcule e mostre:
i. A hora digitada convertida em minutos
ii. O total dos minutos
iii. O total de segundos
*/

#include<stdio.h>
#include<conio.h>

main(){
       int hora, min, seg;
       
       printf("\n Horas: ");
       scanf("%d", &hora);
       
       min = hora*60;
       seg = min*60;
       
       printf("\n Hora em minutos: %d", min);
       printf("\n Hora em segundos: %d", seg);
       
       getch();
}
       
        
       
       
