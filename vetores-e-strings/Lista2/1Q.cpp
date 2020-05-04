//1.Fazer um programa que dada uma seqüência de n números fornecida pelo usuário, imprimir-la na 
//ordem inversa à da leitura.


#include<stdio.h>                   
#include<conio.h>

main(){
       int num[100], i, quant, cont;
       
       printf("\n Quantidade de numeros:");
       scanf("%d", &quant);
       
       printf("\n Numero: ");
       for(i = 0; i<quant; i++ )
               scanf("%d",&num[i]);
          
       
       printf("\n Numeros invertidos \n");
       for(i = quant-1; i>=0; i-- ) 
          printf("%d\n", num[i]);
          
          
       
       
       
       
       getch();
}
   
