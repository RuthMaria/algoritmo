/*4. Fa�a um algoritmo que imprima como resposta o sucessor e o antecessor de um n�mero dado.*/

#include<stdio.h>
#include<conio.h>

main(){
       int num;
       
       printf("\n\t\t\t CALCULO DO SUCESSOR E ANTECESSOR DE UM NUMERO \n\n");           
       printf(" informe o numero  \n");
       scanf("%d", &num);
       
       printf("\n O sucesso: %d \n Antecessor: %d", num+1, num-1);       
       
       getch(); 
       
}
