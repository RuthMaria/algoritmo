#include<stdio.h>

main(){
       int segundo, hora, minuto;

       scanf ("%d", &segundo);

       hora = segundo/3600;
       segundo = segundo-(hora*3600);

       minuto = segundo / 60;
       segundo = segundo - (minuto * 60);

       printf ("%d h %d m %d s", hora, minuto, segundo);

 }
