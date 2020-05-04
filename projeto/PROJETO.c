#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>



typedef struct pilha{
        int topo;
        float operadores[100];
}Pilha;




Pilha* inicializar();
void push(Pilha *p, int operador);
int pop(Pilha *p);
char* infixa();
char* varredura(Pilha *p, char infixa[]);
void imprime(char posfixa[]);
void calcular(Pilha *p, char pfxa[]);
int interface_opcao_menu();
void menu(Pilha *p);




main(){
       
       system("MODE con cols=100 lines=30");
       system("title Projeto CALC POSFIXA - Mayara e Victor @@");
       system("color 3f");
       
       Pilha *p;
       char *expressao= NULL;
       int x;
       p = inicializar();
       
       do{
         
       x = interface_opcao_menu();/*recebendo a escolha do usuário.*/
     
       switch(x){
                     
         case 1:
              
           system("cls"); 
           printf("\n\n");
           printf("\t\tMENU DE OP%c%cES %c ", 128, 229, 16);
           printf("Inserir Express%co Infixa", 198);
           expressao = infixa();/*insere infixa.*/
           getch();
           break;
           
         case 2:
           
           system("cls");     
           expressao = varredura(p, expressao);
           imprime(expressao);
           getch();
           break;
           
         case 3:
              
           system("cls");     
           calcular(p, expressao);
           getch();
           break;
           
         case 4:
           exit(1);/*aborta programa.*/
           break;
           
         default:
              system("cls");
              printf("\n\n\n\n\n\n\n\n\n\n\n");
              printf("\t\t\t\t\t");
              printf("OP%c%cO INV%cLIDA!! ", 128, 199, 181);
              getch();
        }
        
     }while(x!=4);
}




/*função interface_opcao_menu: retorna a opção do usuário.*/
int interface_opcao_menu(){
    
     system("cls");
     int i;
     int opcao;
    
     printf("\n\n");
     printf("\t\t\t\t      %c", 218);
     
     for(i=0; i<20; i++){
              printf("%c", 196);
     }
     
     printf("%c", 191);
     printf("\n");
     
     printf("\t\t\t\t");
     printf("      %c %c   ", 179, 219);
     printf("CALC POSFIXA %c %c\n", 219, 179);
     
     printf("\t\t\t\t      %c", 192);
     for(i=0; i<20; i++){
              printf("%c", 196);
     }
     printf("%c", 217);
     
     printf("\n\n\n\n\n");
     printf("\t\t\t\t\t%c MENU DE OP%c%cES %c\n\n", 17, 128, 229, 16);
     
     
     
     
     /*desenho:  início*/
     printf("\t\t%c", 218);
     
     for(i=1; i<=65; i++)                    
        printf("%c",196);
     printf("%c", 191);
     
     for(i=1; i<=4; i++)
          printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
          
          
          
          
          
     printf("\n\t\t%c\t", 179);    
     printf("1.Inserir Express%co Infixa", 198);
     printf("\t\t\t\t  %c", 179);
     
     printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
     printf("\n\t\t%c\t2.Imprimir Posfixa\t\t\t\t\t  %c", 179,179);
     printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
        
     printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
     printf("\n\t\t%c\t3.Inserir e Obter Valor da Posfixa\t\t\t  %c", 179,179);
     printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
     
     
     printf("\n\t\t%c\t4.Sair\t\t\t\t\t\t\t  %c", 179,179);
     
     
     
     
     /*desenho: fim*/
     for(i=1; i<=2; i++)
          printf("\n\t\t%c\t\t\t\t\t\t\t\t  %c", 179, 179);
     
     printf("\n\t\t%c", 192);
     
     
     for(i=1; i<=65; i++)
        printf("%c",196);
     printf("%c", 217);
     
     
     
     
     printf("\n\t\t\tQual sua Op%c%co? ",135,198);
     fflush(stdin);
     scanf("%d", &opcao);
     
     return opcao;
}

Pilha* inicializar(){
       
       Pilha*p=(Pilha*)malloc(sizeof(Pilha));
       p->topo=-1;
       return p;
}




/*função push: empilha os operadores.*/
void push(Pilha *p, int operador){
     
                   p->topo++;
                  
                   p->operadores[p->topo]=operador;
}




/*função pop: retira o elemento do topo e o retorna.*/
int pop(Pilha *p){
     
    int auxiliar;
    
    auxiliar = p->operadores[p->topo];
    p->topo--;
    
    return auxiliar;    
}




/*função infixa: o usuário insere a expressão dentro da função.*/
char* infixa(){
      
       char *infixa=NULL;
       infixa=(char*)malloc(sizeof(char)*100);
       
       printf("\n\n\t\tInsira uma express%co: "  ,198);
       fflush(stdin);
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
      
      if(posfixa==NULL){
         system("cls");
         printf("\n\n\n\n\n\n\n\n\n\n\t");
         printf("\t\t\tINSIRA UMA EXPRESS%cO PRIMEIRO! ", 199);
                        
      }
      else{
           
           printf("\n\n\n\n");
           printf("\t\tPOSFIXA: ");
           printf("%s", posfixa);
      }
}

/*função calcular: atribui valores para letras e calcula o valor da posfixa.*/
void calcular(Pilha *p, char pfxa[]){
      
      int i;
      int valor;
      char guarda1, guarda2;
      int resolucao;
        
      if(pfxa == NULL){
              system("cls");
              printf("\n\n\n\n\n\n\n\n\n\n");
              printf("\t\t\t\tINSIRA UMA EXPRESS%cO PRIMEIRO!", 199);
      }
      else{  
       for(i=0; i<strlen(pfxa); i++){
               
         if((pfxa[i]>='A' && pfxa[i]<='Z') || (pfxa[i]>='a' && pfxa[i]<='z')){
              printf("\nInforme um valor para %c: ",pfxa[i]);
              fflush(stdin);
              scanf("%d", &valor);
              push(p, valor);                          
                                  
         }
      
         else{
                  
           switch(pfxa[i]){
                                       
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
                              
               case '%':
                   guarda2=pop(p);
                   guarda1=pop(p);
                   resolucao=(int)guarda1%(int)guarda2;              
                   push(p,resolucao);
                   break;
                   
               case '^':
                    guarda2=pop(p);
                    guarda1=pop(p);
                    resolucao = pow(guarda1, guarda2);
                    break;
           }
       }
      }
      valor=pop(p); /*resultado da expressão*/ 
      printf("\n\n\t\t\t");         
      printf("%f", (float)valor);
   }
}
