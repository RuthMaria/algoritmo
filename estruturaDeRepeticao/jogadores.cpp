#include<stdio.h>
#include<conio.h>

main(){
       int idade = 0, time = 1, jogador, cont = 0;
       float altura = 0, soma = 0, soma2 = 0;
       
       
       do{
           printf("\n\n Altura e idade dos jogadores do time:%d\n",time);
       
       for(jogador=1;jogador<=4;jogador++){
             scanf("%f%d",&altura, &idade);
             
             if(idade<18)
                 cont++;
                 
             soma+= altura;
             soma2+= soma;
       } 
              
       printf("\n Media das alturas do time %d: %.2f",time, soma/4);
       soma = 0;
       time++;
       }while(time <= 3);
       
       printf("\n Numero de jogadores c/ idade inferior a 18: %d", cont);
       printf("\n Media das alturas de todos os jogadores: %.2f", soma2/12);
       
       getch();
       }
                                                                       
                                                                       
                                                                       
