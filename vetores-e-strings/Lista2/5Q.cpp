#include<string.h>
#include<stdio.h>
#include<conio.h>

main(){
       char nome[3][20];
       
       float nota[3], soma = 0.0, media = 0, media_aluno = 0, somat = 0;
       int i, c;
       
       for(i = 0; i<3; i++){
          printf("\n Nome do aluno %d: ", i+1);
          scanf("%s", nome[i]);
               
          printf("Nota do aluno %d: ", i+1);
          scanf("%f",&nota[i]);
          soma+= nota[i];
       }
       
       media = soma/5;
           
       printf("\n Media da turma: %.2f\n\n", media);
       printf("Notas superiores a media da turma \n ");        
       for(i = 0; i<3; i++){
             if(nota[i] > media)
                   printf("\nALUNO:%s com nota: %.2f\n", nome[i], nota[i]);
               
             }              

               
               getch();
               }
