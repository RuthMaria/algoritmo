/*2- Seja uma estrutura para descrever os carros de uma determinada revendedora,
contendo os seguintes campos:
marca: string de tamanho 15
ano: inteiro
cor: string de tamanho 10
pre�o: real
a) Escrever a defni��o da estrutura carro.CCCCC
b) Declarar o vetor vetcarros do tipo da estrutura defnida acima, de tamanho 20.
c) Defnir uma fun��o para ler o vetor vetcarros.
d) Defnir uma fun��o que receba um pre�o e imprima os carros (marca, cor e ano) que
tenham pre�o igual ou menor ao pre�o recebido.
e) Defna uma fun��o que leia a marca de um carro e imprima as informa��es de todos
os carros dessa marca (pre�o, ano e cor).
f) Defna uma fun��o que leia uma marca, ano e cor e informe se existe ou n�o um
carro com essas caracter�sticas. Se existir, informar o pre�o.
g) Implemente uma fun��o principal com um menu, para que o usu�rio possa
selecionar uma das fun��es acima.*/
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




































