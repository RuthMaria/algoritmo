/*
Descri��o 
O senhor Huxley, amigo do Ambr�sio, escreveu um texto em um peda�o de papel e quer saber quantos buracos existem no texto. 
Mas o que � um buraco? Imagine, por exemplo, que as letras "A", "D", "O", "P", "R" possuem apenas um buraco. Da mesma forma, 
a letra "B" possui dois buracos. J� as letras "C", "E", "F", "K" n�o possuem buracos. N�s devemos considerar que o n�mero de buracos 
em um texto � igual ao n�mero total de buracos nas letras do texto. Ajude o sr. Huxley a determinar quantos buracos existem no texto.

Formato de entrada 
A primeira linha cont�m um inteiro simples T <= 40 que indica o n�mero de casos de testes. Depois, seguem-se T casos de teste. 
Cada linha do caso de teste cont�m um texto n�o vazio composto somente de caracteres mai�sculos do alfabeto ingl�s. 
O tamanho de cada texto � menor que 100. N�o existem espa�os na entrada.

Formato de sa�da 
Para cada caso de teste, a sa�da consiste de uma linha contendo o n�mero de buracos encontrado no caso de teste.
*/

//#include <conio.h>
#include <stdio.h>

main (){
     
     int quant, i, j, buracos;
     char texto[101];
     
     scanf("%d", &quant);
     getchar();
     
     for ( i = 0; i < quant; i++){
         
         buracos = 0;
         
         gets(texto);
         
         for ( j = 0; texto[j] != '\0'; j++){ 
              if (texto[j] == 'A' || texto[j] == 'D' || texto[j] == 'O' || texto[j] == 'P' || texto[j] == 'Q' || texto[j] == 'R')
                    buracos++;
                    
                    
              if (texto[j] == 'B')
                    buracos += 2;
         }
         
         printf("%d\n", buracos);      
     }
     
     
     //getch();
}
