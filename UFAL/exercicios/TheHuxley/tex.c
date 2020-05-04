/*Descri��o 
TeX � uma linguagem de formata��o de texto desenvolvida por Donald Knuth. Ela pega o texto fonte junto com algumas instru��es de formata��o e 
produz, espera-se, um bonito documento. Documentos bonitos usam `` e '' para delimitar cita��es, ao inv�s do mundano " o qual � provido pela
maioria dos teclados. Teclados tipicamente n�o t�m que ter aspas duplas, mas t�m que ter aspas simples � esquerda (`), e aspas simples � 
direita (').

TeX deixa o usu�rio escrever duas aspas simples � esquerda `` para criar o aspas duplas � esquerda  e duas aspas simples � direita ''
para criar o aspas duplas � direita .

A maioria dos digitadores, no entanto, est�o acostumados a delimitar suas cita��es com o n�o-orientado aspas-duplas " Se o texto fonte cont�m 
"Ser ou nao ser", citou o bardo, "esta e a quest�o." Ent�o o documento formatado produzido pelo TeX n�o conteria a forma desejada
Ser ou nao ser, citou o bardo, esta e a questao.
Para produzir a forma desejada, o texto fonte deve conter a seq��ncia ``Ser ou n�o ser'', citou o bardo, ``esta e a quest�o.'' Isto � feito 
atrav�s de um tradutor que recebe a String que substitui cada seq��ncia de aspas simples pelas respectivas aspas duplas.
Voc� deve escrever um programa an�logo Seu programa deve converter o texto-fonte em um texto id�ntico, exceto que os caracteres "+"
devem ser substitu�dos por "*" caso o "+" inicie a senten�a ou "#" caso "+" a termine.

o primeiro + deve ser reposto por *, o pr�ximo por # o segundo por *, o pr�ximo por # e assim por diante...

Formato de entrada 
Entrada ira consitir de v�rias linhas de texto contendo um n�mero par de +. A entrada � terminada por uma linha contendo o caractere "_"
(sem as aspas), a qual n�o deve ser processada.

Formato de sa�da 
O texto deve ser impresso exatamente como na entrada exceto que:
O primeiro + em cada par � reposto por * e
O segundo + em cada par � reposto por #*/


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
                             aux[j] = i;  // pega a posi��o de onde est� o +
                             j++;         // conta qts + tem
                       }
                   }
                   
                   if (ult == 'c'){ // entra s� na primeira linha da string
                        for (m = 0; m < j; m++){                     
                            
                           if (m % 2 != 0){   
                                nome[l][aux[m]] = '#'; // se o i for impar coloca o # na posi��o onde est� o +, o aux tem a posi��o onde tava o +
                                ult = '#';                // pega o ultimo simbolo digitado pra usar na alterna��o                      
                           }    
                                          
                           else{
                                nome[l][aux[m]] = '*'; // se o i for par coloca o * na posi��o onde est� o +
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
                                            ult = '*';  // guarda o ultimo simbolo digitado pra usar na alterna��o
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
