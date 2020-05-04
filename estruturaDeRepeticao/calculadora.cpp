/* IF-AL- Instituto Federal de Educação Tecnológica
   Isabel Cristina de Lima Santos-n°:17
   Larissa Thaís Omena dos Santos-n°:25
   turma:921a  
   data: 06/08/09
   
x=>primeiro numero da operaçao.
y=>segindo numero da operaçao.
r=>resultado.
ac>=quantidade de acertos.

er>=quantidade de erros.
num=>nivel que o usuario vai digitar.
s_c=>sorteio de certas.
s_e=>sorteio de erradas.

qt_ac=>quantidade de acertos.
operacao=>caractere da operaçao.
letra =>que vai permitir que o usuario continue ou nao.
certas=>palavras que serao mostradas caso o aluno acerte.
erradas=>palavras que serao mostradas caso o aluno erre.  
*/

#include<stdio.h>                   
#include<conio.h>
#include<time.h>
#include<stdlib.h>


 main(){

              
       int x,y,r,aposta,ac=0,er=0,num,s_c=0,s_e=0, qt_ac;
       char operacao,letra;
       char certas[3][30]={"Muito bom!\n","Excelente!\n","Bom trabalho!\n"};
       char erradas[3][30]={"Não. Tente de novo.\n","Errado. Tente mais uma vez.\n","Não desista.\n"};
       
       srand(time(NULL));
       system("color f1");
       printf("\n\t\t Bem-vindo!\n\n"); 
       printf("\n\t     CALC Entertainment \n\n");

       do{
          printf("\n\n\Digite:\n\n( + )para adicao\n\n( - )para subtracao\n\n( * )para multiplicacao\n\n( / )para divisao!\n\n");  
          fflush(stdin);
          scanf ("%c", &operacao);
          printf("digite 1 para nivel 1,2 para nivel 2 e 3 para nivel 3\n\n");
          fflush(stdin);
          scanf("%d",&num);
          
          if(num==1){        
            x=rand()%9+1;
            y=rand()%9+1;
          } 
          if(num==2){
            x=rand()%90+10;
            y=rand()%90+10;
          }
          if(num==3){
            x=rand()%900+100;
            y=rand()%900+100; 
          }    
                                                                                                                                    
          if(operacao=='+'){
            r=x+y;          
          } 
          if(operacao=='-'){
            r=x-y;
          }
          if(operacao=='*'){
            r=x*y;
          }
          if(operacao=='/'){
            r=x/y;
          }
          
            printf("responda: %d %c %d: ",x,operacao,y);
            scanf("%d",&aposta);
           
          if(r==aposta){
            ac++; 
            s_c=rand()%3;                  
            printf(" %s \n",certas[s_c]);
            printf("Deseja continuar? Digite s ou n.\n");
            fflush(stdin);
            scanf("%c", &letra);
            system("cls");
            
          }
          if(r!=aposta){
            er++; 
            s_e=rand()%3;                  
            printf("%s \n",erradas[s_e]);
          }
          if (er+ac==10){
            qt_ac= ac*10;
          if(qt_ac<75)
            printf("peca ajuda ao seu professor!");
            getch();
            exit(0);
                         
          }
          }while(letra!='n'||letra!='N');
        
          
                  
          system("pause"); 
}     
        
      
             
       
             
             
           
           
           
           
           
             
           
          
          
       
       
      
       
       
       
       
       
       
                                                                      


                                                      
                                                        
                                          
                                          
       
