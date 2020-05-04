/*
5. Escrever um algoritmo para ler duas notas de um aluno e escrever na tela a
palavra “Aprovado” se a média das duas notas for maior ou igual a 7,0. Caso a
média seja inferior a 7,0, o programa deve ler a nota do exame e calcular a
média final. Se esta média for maior ou igual a 5,0, o programa deve escrever
“Aprovado”, caso contrário deve escrever “Reprovado”.
*/

#include<stdio.h>
#include<stdlib.h>

main(){
       float nota1, nota2, media, media_final;
       
       printf("\n Notas: ");
       scanf("%f%f", &nota1, &nota2);
       
       media = (nota1+nota2)/2;
       
       if(media >= 7)
                printf("\n Aprovado \n");
                
       else{
            printf("\n Recuperacao \n");
            
            printf("\n Digite as Notas novamente: ");
            scanf("%f%f", &nota1, &nota2);
            
            media_final = nota1+nota2/2;
            
            if(media_final >= 5)
                      printf("\n Aprovado \n");
            else
                      printf("\n Reprovado \n");
       }
 
       getch();
}
