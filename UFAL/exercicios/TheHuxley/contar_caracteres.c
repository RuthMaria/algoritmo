/*Descri��o 
Voc� dever� fazer um programa que leia frases com at� 80 caracteres, incluindo espa�os em branco, letras, d�gitos, enfim, qualquer caractere.
Ap�s a leitura de cada frase, voc� deve imprimir:
Quantos espa�os em branco existem na frase;
Quantas vezes a letra a (que pode ser mai�scula ou minuscula) aparece;
O n�mero de vezes que o par de letras com maior frequ�ncia apareceu na frase e quais s�o elas;
A entrada termina quando a frase for: NAO QUERO MAIS

Formato de entrada 
Uma sequ�ncia de frases de at� 80 caracteres.

Formato de sa�da  
Os inteiros abaixo, separados por um final de linha:
b - representando o n�mero de espa�os em branco;
a - representando a quantidade de letras a;
n - representando o n�mero de vezes que do par de letras com maior frequ�ncia de aparecimento na frase aparece. Por exemplo, se a frase for 
"abad ac", os pares s�o: ab, ba, ad, ac. Caso n�o exista nenhum par de letras na frase, deve ser impresso: NENHUM PAR
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
