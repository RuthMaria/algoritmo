#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>



typedef struct pilha{
        int topo;
        char operadores[100];
}Pilha;


Pilha* inicializar();
void push(Pilha *p, float operador);
float pop(Pilha *p);
char* varredura(Pilha *p, char infixa[]);
char* infixa();
void calcular(Pilha *p, char posfixa[]);
void imprime(char posfixa[]);


main(){
       
       system("title Mayara e Victor @@");
       Pilha *p;
       char *expressao=NULL;
       char x;
      
       p = inicializar();
       
       expressao = infixa();
       
       expressao = varredura(p, expressao);
       printf("%s", expressao);
       
       calcular(p, expressao);
      // printf("%c",x);
       getch();
}



/*função inicializar: inicializa a pilha.*/ 
Pilha* inicializar(){
       
       Pilha*p=(Pilha*)malloc(sizeof(Pilha));
       p->topo=-1;
       return p;
}

/*função push: empilha os operadores.*/
void push(Pilha *p, float operador){
     
                   p->topo++;
                  
                   p->operadores[p->topo]=operador;
}

/*função pop: retira o elemento do topo e o retorna.*/
float pop(Pilha *p){
     
    float auxiliar;
    
    auxiliar = p->operadores[p->topo];
    p->topo--;
    
    return auxiliar;    
}

/*função infixa: o usuário insere a expressão dentro da função.*/
char* infixa(){
      
       char *infixa=NULL;
       infixa=(char*)malloc(sizeof(char)*100);
       
       printf("\n\n\t\tInsira uma express%co: "  ,198);
       gets(infixa);
       
       return infixa;
}

/*função prioridade: verifica a prioridade dos operadores.*/
int prioridade(char operador){
    
    switch(operador){
                     
      case '^':
      case '#':
      case '%':
            return 3;
      case '*':
      case '/':
            return 2;
            break;
      case '+':
      case '-':
            return 1;
            break;
      default:
            return 0;
            break;
    }

}

/*função varredura: varre a infixa e coloca devidamente na posfixa.*/
char* varredura(Pilha *p, char infixa[]){
  
     int i, posicao=-1, verificacao;
     int v, j=0;
     char topo;
     char *posfixa=NULL;
     
     posfixa=(char*)malloc(sizeof(char)*strlen(infixa));
     
                
     for(i=0; i<strlen(infixa); i++){
              
       if(infixa[i]>='A'&& infixa[i]<='Z' ||infixa[i]>='a'&& infixa[i]<='z'){
                                  
                          posicao++;
                          
                          posfixa[posicao] = infixa[i];
       }
                 
       else{
                              
            if(p->topo==-1)                           
                push(p, infixa[i]); 
     
            else{
                 
                if(infixa[i] == '(')
                           push(p, infixa[i]);
                
                else{
                     
                  if(infixa[i] == ')'){
                                    
                     do{
                         topo=pop(p);
                                 
                         if(topo != '('){
                                                                                
                               posicao++;
                               posfixa[posicao]  = topo;
                         }
                         if(topo=='(')
                             break;
                                       
                      }while(topo != '(');
                  }

                /*Essa condição foi feita para não verificar os parênteses:*/
                  if(infixa[i]!= '(' && infixa[i] != ')')
                  {
                  
                     verificacao = prioridade(infixa[i]);
                     v = prioridade(p->operadores[p->topo]);   
                           
                     if(verificacao > v )                     
                          push(p, infixa[i]);
                
                     if(v > verificacao){
                       
                          while(v >= verificacao && p->topo != -1){
                                            
                                 topo = pop(p);
                                
                                 posicao++;
                                 posfixa[posicao] = topo;
                                    
                                 if(p->topo != -1)
                                   v = prioridade(p->operadores[p->topo]);
                                   
                          } 
                          if(p->operadores[p->topo]=='(')
                              push(p, infixa[i]);
                     }
                    
                     
                     if(verificacao == v && p->topo != -1)
                     {
                         topo = pop(p);
                         posicao++;
                         posfixa[posicao] = topo;
                         push(p, infixa[i]);
                     }
                     
                     if(p->topo == -1)
                          push(p, infixa[i]);
                  }//if 1
                }//else 3
                             
            }//else 2
       }//else 1                   
     }//for 

   while(p->topo!= -1)
   {                    
            topo=pop(p);
            posicao++;
            posfixa[posicao] = topo;
   }
        
    /*posicao+1 para inserir no final do vetor '\0'*/
    posfixa[posicao+1] = '\0';
    
    return posfixa;
   
}
/*função imprime: imprime o vetor posfixa*/
void imprime(char posfixa[]){
      
      printf("\n\n\n\n");
      printf("\t\tPOSFIXA: ");
      printf("%s", posfixa);
    
}

/*função calcular: atribui valores para letras e calcula o valor da posfixa.*/
void calcular(Pilha *p, char posfixa[]){
      
      int i;
      int valor;
      int cont=0;
      char guarda1, guarda2;
      char resolucao;
            
      for(i=0; i<strlen(posfixa); i++){
               
               if((posfixa[i]>='A' && posfixa[i]<='Z') || (posfixa[i]>='a' && posfixa[i]<='z')){
                                  printf("\nInforme um valor para %c: ",posfixa[i]);
                                  fflush(stdin);
                                  scanf("%d", &valor);
                                  push(p, valor);                            
                                  
               }
               else{
                  
                    switch(posfixa[i]){
                                       
                         case '+':
                              guarda2=pop(p);
                              guarda1=pop(p);
                              resolucao = guarda1+guarda2;
                              push(p,resolucao);
                              break;
                              
                          case '-':
                              guarda2=pop(p);
                              guarda1=pop(p);
                              resolucao = guarda1-guarda2;
                              push(p,resolucao);
                              break;
                              
                          case '*':
                              guarda2=pop(p);
                              guarda1=pop(p);
                              resolucao = guarda1*guarda2;
                              push(p,resolucao);
                              break;
                              
                          case '/':
                              guarda2=pop(p);
                              guarda1=pop(p);
                              resolucao = guarda1/guarda2;
                              push(p,resolucao);
                              break;
                          
                          case '#':
                              guarda1=pop(p);
                              resolucao = sqrt(guarda1);
                              push(p,resolucao);
                              break;
                    }
               }
      }
      
      valor=pop(p); /*resultado da expressão*/
      printf("%d",valor);
      
      
}

                        
