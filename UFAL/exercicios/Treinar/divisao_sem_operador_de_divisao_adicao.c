/*fazer a divisão de um numero por outro sem usar a operação de divisão, mostrando o quociente e o resto*/

#include<stdio.h>
#include<conio.h>

main(){
       int dividendo, divisor, quociente, resto, i, j, k;
       
       printf("insira o dividendo e o divisor: ");
       scanf("%d%d", &dividendo, &divisor);
       
       i = 0;
       k = dividendo; 
       while(dividendo-(i+divisor) <= dividendo){
             i = divisor;
             dividendo = k;
             j++;
             printf(" i %d", i);
       }
       
       quociente = i-1;
       resto = dividendo-divisor*quociente;
      
       
       printf("o resto eh %d e o quociente eh %d", resto, quociente);

       getch();

}
