/*a) Fazer um programa que recebe uma quantidade de tempo em segundos; declare
uma vari�vel do tipo struct time, e converta os segundos lidos em: horas, minutos e
segundos, fazendo a inicializa��o da vari�vel declarada.
b) Ler a vari�vel do tipo tempo (campos hora, min e seg) e devolver a quantidade de
horas em segundos.*/

#include<stdio.h>
#include<conio.h>

struct time {
int hora;
int min;
int seg;
};

struct tempo{
int hora;
int seg;        
};
main(){
       struct time tempo;
       
       printf("digite as segundos\n");
       scanf("%d",&tempo.seg);
       tempo.min=tempo.seg/60;
       tempo.hora=tempo.min/60;
       printf(" hora: %d para minutos: %d para segundos: %d",tempo.hora,tempo.min,tempo.seg);
       
       struct tempo time;
       printf("digite a quantidade de horas\n");
       scanf("%d",&time.hora);
       time.seg=time.hora;
     
       getch() ;
       }
       
       
       
