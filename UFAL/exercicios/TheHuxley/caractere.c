/*
Descrição
Você deve ler uma sequência de caracteres e imprimir na ordem inversa da leitura.

Formato de entrada
Consiste de um inteiro n, indicando quantos caracteres devem ser lidos e uma sequencia de n caracteres. A entrada termina quando n=0

Formato de saída
n caracteres impressos na ordem inversa
*/

#include <stdio.h>
//#include <conio.h>
#include <math.h>

main(){
       int n, i;
       
       do{
           scanf("%d", &n);
           
           if (n == 0)
                 break;
       
           char nome[n];
       
           scanf("%s", &nome);
           
           for (i = strlen(nome)-1; i >=0; i--){
               if (i == 0)
                    printf("%c\n", nome[i]);
               else
                    printf("%c", nome[i]);
           }
       }while (n != 0);
       
      // getch();
}
