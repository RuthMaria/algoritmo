#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

main(){
       char sorteio[4][50]={"Paula","Maria","Joana","Ana Lice"};
       int pessoa;
       srand(time(NULL));// pra não gerar numeros repetidos
       pessoa=rand()%4;
       printf("\n\t%s", sorteio[pessoa]);
       getch();
}
