/*Descrição 
TeX é uma linguagem de formatação de texto desenvolvida por Donald Knuth. Ela pega o texto fonte junto com algumas instruções de formatação e 
produz, espera-se, um bonito documento. Documentos bonitos usam `` e '' para delimitar citações, ao invés do mundano " o qual é provido pela
maioria dos teclados. Teclados tipicamente não têm que ter aspas duplas, mas têm que ter aspas simples à esquerda (`), e aspas simples à 
direita (').

TeX deixa o usuário escrever duas aspas simples à esquerda `` para criar o aspas duplas à esquerda  e duas aspas simples à direita ''
para criar o aspas duplas à direita .

A maioria dos digitadores, no entanto, estão acostumados a delimitar suas citações com o não-orientado aspas-duplas " Se o texto fonte contém 
"Ser ou nao ser", citou o bardo, "esta e a questão." Então o documento formatado produzido pelo TeX não conteria a forma desejada
Ser ou nao ser, citou o bardo, esta e a questao.
Para produzir a forma desejada, o texto fonte deve conter a seqüência ``Ser ou não ser'', citou o bardo, ``esta e a questão.'' Isto é feito 
através de um tradutor que recebe a String que substitui cada seqüência de aspas simples pelas respectivas aspas duplas.
Você deve escrever um programa análogo Seu programa deve converter o texto-fonte em um texto idêntico, exceto que os caracteres "+"
devem ser substituídos por "*" caso o "+" inicie a sentença ou "#" caso "+" a termine.

o primeiro + deve ser reposto por *, o próximo por # o segundo por *, o próximo por # e assim por diante...

Formato de entrada 
Entrada ira consitir de várias linhas de texto contendo um número par de +. A entrada é terminada por uma linha contendo o caractere "_"
(sem as aspas), a qual não deve ser processada.

Formato de saída 
O texto deve ser impresso exatamente como na entrada exceto que:
O primeiro + em cada par é reposto por * e
O segundo + em cada par é reposto por #*/


#include <stdio.h>
//#include <conio.h>
#include <string.h>

main (){
     char nome[4000][150], ult = 'c';
     int aux[200], k = 0, i = 0, l, j, m;
     
     
     for ( ; ; ){         
         
         gets(nome[k]);
         
         if ( strcmp(nome[k], "_") == 0 ){
              
               j = 0;
               
               for (l = 0; l < k; l++){
                   j = 0;
                   for (i = 0; nome[l][i] != '\0'; i++){             
                       if (nome[l][i] == '+'){
                             aux[j] = i;  // pega a posição de onde está o +
                             j++;         // conta qts + tem
                       }
                   }
                   
                   if (ult == 'c'){ // entra só na primeira linha da string
                        for (m = 0; m < j; m++){                     
                            
                           if (m % 2 != 0){   
                                nome[l][aux[m]] = '#'; // se o i for impar coloca o # na posição onde está o +, o aux tem a posição onde tava o +
                                ult = '#';                // pega o ultimo simbolo digitado pra usar na alternação                      
                           }    
                                          
                           else{
                                nome[l][aux[m]] = '*'; // se o i for par coloca o * na posição onde está o +
                                ult = '*';
                           }  
                       }
                       printf("%s\n", nome[l]);
                   }
                   
                   else{ 
                         for (m = 0; m < j; m++){                     
                            
                               if (m % 2 != 0){
                                     if (ult == '#') {  // ver qual foi o ultimo simbolo digitado pra ficar alternando
                                            nome[l][aux[m]] = '*';
                                            ult = '*';  // guarda o ultimo simbolo digitado pra usar na alternação
                                     }
                                     else{
                                            nome[l][aux[m]] = '#';
                                            ult = '#';
                                     }
                               }
                               
                               else if (ult == '#'){
                                            nome[l][aux[m]] = '*';
                                            ult = '*';
                                    }
                                    else{
                                            nome[l][aux[m]] = '#';
                                            ult = '#';
                                    }
                         }
                         printf("%s\n", nome[l]);
                  }
                 
               }
               
          break;    
         }
         
         k++;
     }
     
    // getch();
}
