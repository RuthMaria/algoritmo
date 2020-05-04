/*
8) Escreva um algoritmo que leia a idade de uma pessoa e informe a sua classe eleitoral.
   Não eleitor (abaixo de 16 anos);
   Voto obrigatório (entre 18 e 65 anos);
   Eleitor facultativo (entre 16 e 18 anos e maior de 65 anos);
*/

#include<stdio.h>
#include<conio.h>

main(){
       int idade;
       
       printf("\n Idade: ");
       scanf("%d", &idade);
       
       if(idade < 16)
                    printf("\n Noo eleitor");
                 
       if(idade >= 18 && idade <= 65)
                    printf("\n Voto obrigatorio");
                
       if(idade >= 16 && idade < 18 || idade > 65)
                    printf("\n  Eleitor facultativo");
                    
       getch();
}
