/*Descrição
Marilda é uma menina bem desorganizada, avessa aos computadores mas bastante festeira. Por isso, toda festa que Marilda organiza é uma 
confusão, não sabe direito quem convidou, uma bagunça só. Seu irmão, aluno do curso de computação está tentando convencê-la que ela deve se 
organizar melhor e deve utilizar um computador para registrar a lista de convidados da sua festa. Porém, os convidados podem chegar a 300 
pessoas e achar um nome dentre esses trezentos pode ser complicado.
Então a sua função é escrever um programa que receba a lista de convidados de Marilda e a imprima em ordem alfabética.

Formato de entrada
Consiste de um inteiro n, indicando quantos convidados devem ser lidos e uma sequencia de n nomes, representando os convidados. A entrada 
termina quando n=0

Formato de saída
A lista de convidados impressa em ordem alfabética*/

#include <stdio.h>
//#include <conio.h>
#include <string.h>

main(){
       int quant, i, j;
       char convidados[310][800], aux[800];
       
       
       for ( ; ; ){
           
            scanf("%d", &quant);
            getchar();    
            
            if (quant == 0)
                  exit(1);   
     
            for ( i = 0; i < quant; i++)
                  gets(convidados[i]);
            
            
            
            for ( j = 0; j < quant; j++){
                 for ( i = 0; i < quant-1; i++){
                    if ( strcmp(convidados[i], convidados[i+1] ) > 0){
                          strcpy(aux, convidados[i]);
                          strcpy(convidados[i], convidados[i+1]);
                          strcpy(convidados[i+1], aux);
                    }
                 }
            }
            
            for ( i = 0; i < quant; i++)
                    printf("%s\n", convidados[i]);                   
            
     }           
      // getch();
}
