#include<stdio.h>
#include<conio.h>

main(){
       float soma = 0, termo;
       int num = 1, den;
       
       printf("S = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50\n"); 
       for(den = 1; den <= 50; den++){
                termo = num/den;
                soma+= termo;
                          
                num+= 2;
       }
       
       printf("a soma e:%f",soma);
       getch();
}
                                       
       
