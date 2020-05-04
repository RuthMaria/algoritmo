/*
Descrição 
O senhor Huxley, amigo do Ambrósio, escreveu um texto em um pedaço de papel e quer saber quantos buracos existem no texto. 
Mas o que é um buraco? Imagine, por exemplo, que as letras "A", "D", "O", "P", "R" possuem apenas um buraco. Da mesma forma, 
a letra "B" possui dois buracos. Já as letras "C", "E", "F", "K" não possuem buracos. Nós devemos considerar que o número de buracos 
em um texto é igual ao número total de buracos nas letras do texto. Ajude o sr. Huxley a determinar quantos buracos existem no texto.

Formato de entrada 
A primeira linha contém um inteiro simples T <= 40 que indica o número de casos de testes. Depois, seguem-se T casos de teste. 
Cada linha do caso de teste contém um texto não vazio composto somente de caracteres maiúsculos do alfabeto inglês. 
O tamanho de cada texto é menor que 100. Não existem espaços na entrada.

Formato de saída 
Para cada caso de teste, a saída consiste de uma linha contendo o número de buracos encontrado no caso de teste.
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
