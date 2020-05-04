/*Descrição 
Faça um programa para corrigir provas de múltipla escolha. Cada prova tem 10 questões, cada questão valendo um ponto. O primeiro conjunto de 
dados a ser lido é o gabarito para a correção da prova. Depois serão dados os números dos alunos e suas respectivas respostas. O programa 
encerra a entrada quando o número de um aluno dado for igual a 9999

Formato de entrada 
Uma sequência de 10 caracteres correspondendo ao gabarito. Depois é dada uma sequência de números inteiros representando o aluno e a uma 
sequencia de caracteres correspondendo a sua resposta.

Formato de saída 
Para cada aluno lido, na mesma ordem de leitura, deve ser impresso seu número e sua nota. A nota deve ser formatada com uma casa decimal.
Ao final, deve ser impresso a porcentagem de aprovação, sabendo-se que a nota mínima para aprovação é de 6. O percentual deve ser impresso 
com uma casa decimal seguido do caractere %.
Por fim, deve ser impressa a nota que teve a maior frequência absoluta, ou seja, a nota que apareceu o maior número de vezes 
(supondo a inexistência de empates).*/


#include <stdio.h>
//#include <conio.h>
#include <string.h>


main (){
     char gabarito[11], gab_aluno[2000][11];
     int k = 0, i, j,  aluno[2000], cont3 = 0,  aux = 0, troca = 0;
     double pontuacao, cont2, quant_pessoas = 0.00, percentual, repetida,  aux2 = 0.00, notas_alunos[50];
     
     gets(gabarito);
     
     for ( ; ; ){
         
         pontuacao = 0.00;    
                  
         scanf("%d", &aluno[k]);         
         
         if (aluno[k] == 9999){
             for ( i = 0; i < quant_pessoas; i++)
                          printf("%d %.1lf\n", aluno[i], notas_alunos[i]);
                   
              for ( i = 0; i < k; i++){
                   if (notas_alunos[i] >= 6.00)                                     
                          cont2++;            
              }
              
              printf("%.1lf%c\n", (cont2 * 100.00) / quant_pessoas, 37); // calcula o percentual de notas maiores que 6
              
              for(i = 0; i < k; i++){   // ordena as notas dos lunos
                    
                    troca = 0;
                    
                    for(j = 0; j < k-1; j++){
                          
                         if( notas_alunos[j] > notas_alunos[j+1] ){
                             aux2 = notas_alunos[j];
                             notas_alunos[j] = notas_alunos[j+1];
                             notas_alunos[j+1] = aux2;
                             troca = 1;
                         }
                     }

                   if(troca == 0)
                         break;
             }
                                     
             for ( i = 0; i < quant_pessoas; i++ ){
                   cont3 = 0;
                    for ( j = i+1; j < quant_pessoas; j++ ){
                          if ( notas_alunos[i] == notas_alunos[j] ){ // ver qts notas tem iguais
                                 cont3++;
                          }
                          
                    }
                    
                    if (cont3 > aux){       // verifica se tem uma nota que apareceu mais que a anterior guardada
                           aux = cont3;
                           repetida = notas_alunos[i];
                    }
             }
              
              printf("%.1lf\n", repetida);
            //  exit(1);
             break;            
         }
         
         getchar();    
         gets(gab_aluno[k]);
         
         for ( i = 0; gab_aluno[k][i] != '\0'; i++){
              if (gab_aluno[k][i] == gabarito[i])
                        pontuacao++; // soma qts questoes o aluno acertou
         } 
         
         notas_alunos[k] = pontuacao;  // tem todas as notas dos alunos
         k++;
         
         quant_pessoas++;         
     }
     
    // getch();
     
}
