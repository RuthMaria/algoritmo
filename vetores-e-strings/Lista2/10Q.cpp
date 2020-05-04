#include<stdio.h>
#include<conio.h>
#include<string.h>

main(){
       char nome[20], endereco[40], dados_pessoais[60], tel[10];
       int i, cont = 0, cont_n = 0;
       
       printf("\n Nome:");
       gets(nome);
       
       printf("\n Endereco: ");
       gets(endereco);
       
       printf("\n Telefone: ");
       gets(tel);

       strcpy(dados_pessoais, nome);                          
       strcat(dados_pessoais, endereco);            
       strcat(dados_pessoais, tel);          
     
           
       for(i = 0; i <strlen(dados_pessoais); i++){
             if(dados_pessoais[i] == ' ')
                 cont++;
                 
             if(dados_pessoais[i] >= '0' && dados_pessoais[i] <= '9')
                 cont_n++;                    
       }
            
       printf("\n Dados pessoais: %s", dados_pessoais);
       printf("\n Numeros de espacos em branco: %d", cont);
       printf("\n Numero de valores numericos: %d \n", cont_n);
       getch();
}     
                    
       
