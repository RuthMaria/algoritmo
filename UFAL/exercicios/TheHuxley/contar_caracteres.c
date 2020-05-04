/*Descrição 
Você deverá fazer um programa que leia frases com até 80 caracteres, incluindo espaços em branco, letras, dígitos, enfim, qualquer caractere.
Após a leitura de cada frase, você deve imprimir:
Quantos espaços em branco existem na frase;
Quantas vezes a letra a (que pode ser maiúscula ou minuscula) aparece;
O número de vezes que o par de letras com maior frequência apareceu na frase e quais são elas;
A entrada termina quando a frase for: NAO QUERO MAIS

Formato de entrada 
Uma sequência de frases de até 80 caracteres.

Formato de saída  
Os inteiros abaixo, separados por um final de linha:
b - representando o número de espaços em branco;
a - representando a quantidade de letras a;
n - representando o número de vezes que do par de letras com maior frequência de aparecimento na frase aparece. Por exemplo, se a frase for 
"abad ac", os pares são: ab, ba, ad, ac. Caso não exista nenhum par de letras na frase, deve ser impresso: NENHUM PAR
xy - representando o par de letras que mais aparece na frase
*/

#include <stdio.h>
//#include <conio.h>
#include <string.h>

main (){
     char frase[200];
     int i, espaco, letraA, j, k, contpar, achou, x, y;
     
     for ( ; ; ){
         
          espaco = letraA = j = achou = 0;
          contpar = 0;
          
          
          gets(frase);
          
          if ( strcmp(frase, "NAO QUERO MAIS") == 0 )
                    exit(1);
                    
     
          for ( i = 0; frase[i] != '\0'; i++){
              if ( frase[i] == ' ' )
                   espaco++;
              
              if ( frase[i] == 'A' || frase[i] == 'a' )
                   letraA++;
                  
              frase[i] = tolower (frase[i]);
          }
            
         
         for ( k = 0; frase[k+1] != '\0'; k++){
             
              if ( isalpha(frase[k]) && isalpha(frase[k+1])){
                   contpar = 0;
                   
                  for ( i = 0; frase[i+1] != '\0'; i++){
                       if ((frase[k] == frase[i]) && (frase[k+1] == frase[i+1])) 
                             contpar++;                                                          
                  }
                       
                  if (contpar > achou){
                           achou = contpar; 
                           x = frase[k];
                           y = frase[k+1];
                  }
                             
              }
               
         }        
     
          printf("%d\n", espaco);
          printf("%d\n", letraA);
          
                 
         if (achou == 0){                    
                printf("NENHUM PAR\n");  
         }  
                              
         else {        
                printf("%d\n", achou);  
                printf("%c%c\n", x, y);
         }
                             
     }
     
     //getch();

}
