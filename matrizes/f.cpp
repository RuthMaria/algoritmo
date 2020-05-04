#include<stdio.h>
#include<conio.h>

main(){
       float n[4][2] = {{2,1}, {3,6}, {9,4}, {5,3}};
       float soma = 0, diferenca = 0;
       int l,c;
       
       for(l = 0; l<4; l++){
           for(c = 0; c<2; c++){
              soma+= n[l][c];
              diferenca-= n[l][c];
           }
       }
       
       printf("%f\n", soma);
       printf("%f", diferenca);
       getch();
}
              
