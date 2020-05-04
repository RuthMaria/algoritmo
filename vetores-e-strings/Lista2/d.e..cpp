#include<string.h>
#include<stdio.h>
#include<conio.h>
main(){
       char nome[3][50];
       float nota[10][4],media=0,soma=0;
       int l,c,i;
       
       for(l=0;l<3;l++){
          printf("digite o nome do aluno\n");
          scanf("%s",nome[l]);
          }
          
       do{
          l=0;    
          for(c=0;c<3;c++){
              for(i=0;i<4;i++){             
                 printf("digite a nota:%d do aluno: %s",i+1,nome[l]);
                 scanf("%f",&nota[c][i]);
                 soma=soma+nota[c][i];
          
                 if(i==3)
                     media=soma/4;
                 }
                 if(media>=6)
                 
          
             printf("\nna media do aluno(a) %s :%.2f  situacao: APROVADO\n",nome[l],media);
          else
             printf("\nna media do aluno(a) %s  :%.2f situaçao REPROVADO\n",nome[l],media);
             soma=0;
             l++;
             }
                   
          
       }while(c<3);
       getch();  
}            
          
                  
                  
        
          

         
