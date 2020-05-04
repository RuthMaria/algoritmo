/* Includes necess�rios */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Constantes */
#define VERDADEIRO 1
#define FALSO 0

/* Estrutura para a pilha */
typedef struct{
char dados[20]; /* Matriz para armazenar as informa��es da pilha */
int topo; /* Topo da pilha */
} PILHA;


/* Prototipa��o das fun��es */
void iniciaPilha(PILHA *pilha);

void pega_infixo(char infixo[]);

void converteParaPosfixo(char infixo[], char posfixo[]);

int eOperador(char c);

int precedencia(char operador1, char operador2);

int precedenciaNivel(char ch);

void colocaNaPilha(PILHA *pilha, char value);

char tiraDaPilha(PILHA *pilha);

char topoDaPilha(PILHA *pilha);

int estaVazia(PILHA *pilha);

int estaCheia(PILHA *pilha);

void imprimeResultado(char infixo[], char posfixo[]);

void imprimeMensagem(void);

/* Fun��o Principal */
int main(void){
    
    char infixo[20], posfixo[20]="";
    
    /* Chama a fun��o que converte de infixo para posfixo */
    converteParaPosfixo(infixo, posfixo);
    
    infixo[strlen(infixo)-2]='\0';
    /* Imprime o resultado */
    imprimeResultado(infixo, posfixo);

    return EXIT_SUCCESS;
}

/* Inicializa a pilha */
void iniciaPilha(PILHA *pilha){
     
                       pilha->topo = -1; /* Inicia vazia */
}

/* Pega a express�o infixa */
void pega_infixo(char infixo[]){
                      
                      int i;

                      printf("Digite a expressao infixa: "); 
                      fflush(stdin); /*Captura a entrada*/

                      /* Lendo os caracteres */
                      for ( i=0; i<18; ){
                          
                          if ((infixo[i]=getchar())=='\n'){ //Se no final, sai
                                                            i++;
                                                            break;
                          }
                          
                          else{ 
                             if (!(isspace(infixo[i]))) //Se n�o � espa�o, continua
                               i++;
                          }
                          
                          infixo[i] = '\0';
                      }
}

/* Converte de infixo para posfixo */
void converteParaPosfixo(char infixo[], char posfixo[]){
     
                              int i, tamanho;
                              int j=0;
                              char topo_ch;
                              PILHA pilha;

                              iniciaPilha(&pilha); /* Inicializa a pilha */
                              pega_infixo(infixo); /* Chama a fun�o que captura os caracteres */
                              tamanho = strlen(infixo);

/* Se o tamanho for maior que zero */
if (tamanho){ 
colocaNaPilha(&pilha,'(');
strcat(infixo,")"); //Concatena
tamanho++;

for (i=0;i<tamanho;i++){
/* Se � d�gito */
if (isdigit(infixo[i])){
posfixo[j++] = infixo[i];
}
/* Se � par�ntese esquerdo */
else if (infixo[i]=='('){
colocaNaPilha(&pilha,'(');
}
/* Se � operador */
else if (eOperador(infixo[i])){
while (VERDADEIRO){
/* Pega o Topo */
topo_ch = topoDaPilha(&pilha);

/* Critica */
if (topo_ch=='\0'){
printf("\nExpressao invalida\n");
imprimeMensagem();
exit(1);
}else{
if (eOperador(topo_ch)){
if (precedenciaNivel(topo_ch)>=precedenciaNivel(infixo[i]))
posfixo[j++] = tiraDaPilha(&pilha);
else
break;
}else
break;
}
}
colocaNaPilha(&pilha, infixo[i]);
}
/* Se � par�ntese direito */
else if (infixo[i]==')'){
while (VERDADEIRO){
/* Pega o topo */
topo_ch=topoDaPilha(&pilha);

/* Critica */
if (topo_ch=='\0'){
printf("\nExpressao invalida\n");
imprimeMensagem();
exit(1);
}else{
if (topo_ch!='('){
posfixo[j++] = topo_ch;
tiraDaPilha(&pilha);
}else{
tiraDaPilha(&pilha);
break;
}
}
}
continue;
}
}
}

posfixo[j] = '\0';
}

/* Verifica qual � o operador */
int eOperador(char o){
if (o=='+'||o=='-'||o=='*'||o=='/'||o=='%'||o=='^'){
return VERDADEIRO;
}else
return FALSO;
}

/* Veririca o n�vel de preced�ncia */
int precedenciaNivel(char p){
if (p=='+'||p=='-')
return 1;
else if (p=='^')
return 3;
else
return 2;
}

/* Veririca se a preced�ncia do Operador1 � Menor, Igual ou Maior que a preced�ncia
do Operador2 */
int precedencia(char operador1, char operador2){
if (precedenciaNivel(operador1)>precedenciaNivel(operador2))
return 1;
else if (precedenciaNivel(operador1)<precedenciaNivel(operador2) )
return -1;
else
return 0;
}

/* Push */
void colocaNaPilha(PILHA *pilha, char valor){
if (!(estaCheia(pilha))){ /* Se n�o est� cheia */
(pilha->topo)++;
pilha->dados[pilha->topo]=valor;
}
}

/* Pop */
char tiraDaPilha(PILHA *pilha){
char c;

if (!(estaVazia(pilha))){ /* Se n�o est� vazia */
c = pilha->dados[pilha->topo];
(pilha->topo)--;
return c;
}else
return '\0';
}

/* Retorna o topo da pilha sem retirar o elemento do topo */
char topoDaPilha(PILHA *pilha){
if (!(estaVazia(pilha))) /* Se n�o est� vazia */
return pilha->dados[pilha->topo];
else
return '\0';
}

/* Verifica se a pilha est� vazia */
int estaVazia(PILHA *pilha){
/* Vazia */
if (pilha->topo==-1)
return VERDADEIRO;
/* N�o vazia */
else
return FALSO;
}

/* Verifica se a pilha est� cheia */
int estaCheia(PILHA *pilha){
/* Cheia */
if (pilha->topo==19)
return VERDADEIRO;
/* N�o cheia */
else
return FALSO;
}

/* Mostra o resultado da Nota��o Pos-fixa */
void imprimeResultado(char infixo[], char posfixo[]){
printf("\n");
printf("Notacao Posfixa: %s\n\n", posfixo);
imprimeMensagem();
}

/* Imprime a mensagem de sa�da */
void imprimeMensagem(void){
printf("Pressione ENTER para sair");
fflush(stdin);
getchar();
}
