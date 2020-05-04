/*Descrição 
Um palíndromo é uma palavra ou frase que tenha a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a 
direita. Por exemplo, as strings "aaaaa", "1221", "bbaabb" são palíndromos, entretanto a string "chef" não é um palíndromo porque se lermos 
da direita para a esquerda, obtemos "fehc" que não é a mesma coisa que "chef".
Ignore as diferenças entre maiúsculas e minúsculas.
Para os casos onde é dada uma frase, você deve ignorar os espaços. Por exemplo, a frase "A base do teto desaba" é considerada um palíndromo.
Ao lê-la da direita para a esquerda, você obterá: "abased otet od esab A". Perceba que, com exceção do espaço, a sequência de caracteres é 
a mesma da frase original.
Faça um programa que indique se uma string dada é um palíndromo ou não.
Formato de entrada 
A entrada consiste de um inteiro n seguido de n strings. Cada string contém no máximo 255 caracteres.
Formato de saída 
Para cada string, imprima "SIM" caso seja um palíndromo e "NAO" caso contrário.*/



#include <stdio.h>
#include <string.h>
//#include <conio.h>

main(){
       char palavra[255], palavra2[255];
       int quant, i , j, cont, k;          
                 
       scanf("%d", &quant);
       getchar();       
           
       for ( i = 0; i < quant; i++){
            cont = k = 0;
            
            gets(palavra);           
           
            for ( j = 0; j < palavra[j] != '\0'; j++){
                if (palavra[j] != ' '){                 // tira todos os espaços da palavra  
                       palavra2[k] = toupper (palavra[j]);   //passa a palavra pra maiusculo
                       k++;
                }
            }
       
            palavra2[k] = '\0'; //  \o que significa o final da string
            
                          
            for ( j = 0; j < palavra2[j] != '\0'; j++){
                 if (palavra2[j] == palavra2[strlen(palavra2)-(j+1)]){
                               cont++; // conta as letra iguais
                 }
            }
                  
            if (cont == strlen(palavra2))
                   printf("SIM\n");
            else
                   printf("NAO\n"); 
       
       }
      // getch();
}
