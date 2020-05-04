#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
       char nome[20],endereco[40],dados_pessoais[60],tel[10];
       int i,cont=0,cont_n=0;
       printf("digite seu nome\n");
       gets(nome);
       printf("digite o endereco\n");
       gets(endereco);
       printf("digite o telefone\n");
       gets(tel);
       for(i=0;i<3;i++){
         if(i==0)
           
            strcpy(dados_pessoais,nome);
            strlen(dados_pessoais);               
         if(i==1)
            strcat(dados_pessoais,endereco);
             
         if(i==2){
            strcat(dados_pessoais,tel);
           
             }
             
            }
            for(i=0;i<strlen(dados_pessoais);i++){
               if(dados_pessoais[i] == ' ')
                 cont++;
               if(dados_pessoais[i]>='0'&&dados_pessoais[i]<='9')
                  cont_n++;
                 
                           
            
            }
            
            printf("dados pessoais:%s\n",dados_pessoais);
            printf("numeros de espacos em branco:%d\n",cont);
            printf("numero de valores numericos:%d\n",cont_n);
            getch();
            }     
                    
       
