/*Receber uma hora e mostrar o equivalente em minutos*/

#include<stdio.h>


main(){
       int hora, minutos;
       
       scanf("%d",&hora);
       scanf("%d",&minutos);

       printf("%d minutos.", (hora*60)+minutos);

}
