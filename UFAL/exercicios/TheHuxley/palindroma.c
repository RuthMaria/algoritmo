/*Descri��o 
Um pal�ndromo � uma palavra ou frase que tenha a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a 
direita. Por exemplo, as strings "aaaaa", "1221", "bbaabb" s�o pal�ndromos, entretanto a string "chef" n�o � um pal�ndromo porque se lermos 
da direita para a esquerda, obtemos "fehc" que n�o � a mesma coisa que "chef".
Ignore as diferen�as entre mai�sculas e min�sculas.
Para os casos onde � dada uma frase, voc� deve ignorar os espa�os. Por exemplo, a frase "A base do teto desaba" � considerada um pal�ndromo.
Ao l�-la da direita para a esquerda, voc� obter�: "abased otet od esab A". Perceba que, com exce��o do espa�o, a sequ�ncia de caracteres � 
a mesma da frase original.
Fa�a um programa que indique se uma string dada � um pal�ndromo ou n�o.
Formato de entrada 
A entrada consiste de um inteiro n seguido de n strings. Cada string cont�m no m�ximo 255 caracteres.
Formato de sa�da 
Para cada string, imprima "SIM" caso seja um pal�ndromo e "NAO" caso contr�rio.*/



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
                if (palavra[j] != ' '){                 // tira todos os espa�os da palavra  
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
