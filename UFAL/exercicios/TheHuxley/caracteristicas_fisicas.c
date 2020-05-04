/*Descrição 
Uma pesquisa sobre algumas características físicas da população de uma determinada região coletou os seguintes dados, referentes a cada 
habitante, para serem analisados:
Sexo (masculino (m), feminino (f));
Cor dos olhos (azuis (a), verdes (v), castanhos (c));
Cabelos (louros (l), castanhos (c), pretos(p));
Idade em anos.

Para cada habitante, foram digitadas duas linhas, a primeira com a idade e a segunda os outros dados e a última linha, que não corresponde a 
ninguém, conterá o valor igual a -1.
Escreva um programa que dê a idade do habitante mais velho e a porcentagem de mulheres que tenham entre 18 e 35 anos, sejam louras e tenham 
olhos verdes.

Formato de entrada 
Um inteiro n indicando a idade e outra linha com sexo, cabelos e cor dos olhos.

Formato de saída 
Mais velho: i
Mulheres com olhos verdes, loiras com 18 a 35 anos: p%

"onde i é o inteiro indicando a idade do habitante mais velho e p é a percentagem de mulheres louras de olhos verdes entre 18 e 35 anos"*/

#include <stdio.h>
//#include <conio.h>

typedef struct{
        char sexo;
        char cor_olhos;
        char cabelos;
        int idade;        
}Pessoa;

/*void imprimir (Pessoa *pessoa, int quant){
     int i;
     
     for (i = 0; i < quant; i++){
         printf("idade: %d \n", pessoa[i].idade);
         printf("sexo: %c\n", pessoa[i].sexo);
         printf("cabelos: %c\n", pessoa[i].cabelos);
         printf("cor dos olhos: %c\n\n", pessoa[i].cor_olhos);
     }
     
}
*/
main(){
       Pessoa *pessoa;
       
       int i = 0, mais_velho, cont = 0, tam = 2;
       
       pessoa = (Pessoa *) malloc (sizeof(Pessoa) * tam);
       
       scanf ("%d", &pessoa[i].idade);
       getchar();
       
       mais_velho = pessoa[i].idade;
       
       while(pessoa[i].idade != -1){
            
             pessoa[i].sexo = getchar();
             getchar();
             pessoa[i].cabelos = getchar();
             getchar();
             pessoa[i].cor_olhos = getchar();  
             
             if (pessoa[i].sexo == 'f' &&  
                 pessoa[i].cabelos == 'l' && 
                 pessoa[i].cor_olhos == 'v' &&
                 pessoa[i].idade >= 18 && 
                 pessoa[i].idade <= 35)
             {
                 cont++;
             }
                      
             i++;
             
             if (i == tam){
                   pessoa = (Pessoa *) realloc (pessoa, sizeof(Pessoa) * tam * 2 );
                   
                   if (pessoa == NULL){
                        printf("Memoria insuficiente\n");                        
                        exit(1);
                   }
                   
                   tam *= 2;
             }
              
             scanf ("%d", &pessoa[i].idade); 
             getchar();          
             
             if (pessoa[i].idade > mais_velho) 
                    mais_velho = pessoa[i].idade;
       }
       
      // imprimir (pessoa, i);
       printf("Mais velho: %d\n", mais_velho);
       printf("Mulheres com olhos verdes, loiras com 18 a 35 anos: %.2f%c\n", (float)cont / (float)i * 100, 37);
       
      // getch();
       
}
