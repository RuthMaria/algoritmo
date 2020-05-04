/*2- Seja uma estrutura para descrever os carros de uma determinada revendedora,
contendo os seguintes campos:
marca: string de tamanho 15
ano: inteiro
cor: string de tamanho 10
preço: real
a) Escrever a defnição da estrutura carro.CCCCC
b) Declarar o vetor vetcarros do tipo da estrutura defnida acima, de tamanho 20.
c) Defnir uma função para ler o vetor vetcarros.
d) Defnir uma função que receba um preço e imprima os carros (marca, cor e ano) que
tenham preço igual ou menor ao preço recebido.
e) Defna uma função que leia a marca de um carro e imprima as informações de todos
os carros dessa marca (preço, ano e cor).
f) Defna uma função que leia uma marca, ano e cor e informe se existe ou não um
carro com essas características. Se existir, informar o preço.
g) Implemente uma função principal com um menu, para que o usuário possa
selecionar uma das funções acima.*/
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

struct carro{
       char marca[15];
       int ano;
       char cor[10];
       float preco;
       };
void ler_vetcarros(struct carro vetcarro[]){
     int i;
    
     for(i=0;i<2;i++){
     printf("usuario, digite a marca do carro");
     gets(vetcarro[i].marca);
     fflush(stdin);
     printf("Agora, digite o ano:");
     scanf("%d", &vetcarro[i].ano);
     fflush(stdin);
     printf("Agora  a cor do veiculo:");
     gets(vetcarro[i].cor);
     fflush(stdin);
     printf("Usuario, digite o preco do veiculo:\n");
     scanf("%f", &vetcarro[i].preco);
     fflush(stdin);
     system("cls");
    
     }
      
};

void imprimir_vetcarros(struct carro vetcarro[]){
     int i;
	
	for (i=0; i<2; i++){
		printf("Carro :%d\n ",i+1 );
		printf("%s\n", vetcarro[i].marca);
		printf("%s\n", vetcarro[i].cor);
		printf("%d\n", vetcarro[i].ano);
		printf("%f\n", vetcarro[i].preco);
}
}
void procuramarca(char marca[],struct carro vetcarro[]){
     int i;
     i=0;
     while(i<2){
        if(strcmp(marca,vetcarro[i].marca==0){
           printf("carro %d\n");
           printf("%s\n" vetcarro[i].marca);
           printf("%s\n", vetcarro[i].ano);
           printf("%s\n",vetcarro[i].cor);
           printf("%f"\n,vetcarro[i].preco);
           }
           }                                        
     
main(){
       struct carro vetcarro[2];
       
       ler_vetcarros(vetcarro); 
       imprimir_vetcarros (vetcarro);
       
       getch();
       
       }     




































