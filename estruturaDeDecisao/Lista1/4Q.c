/*
4.Dada uma letra, escrever na tela se essa letra é ou não uma vogal.
*/

#include<stdio.h>
#include<stdlib.h>

main(){
       char letra;
       
       printf("\n Letra: ");
       scanf("%c", &letra);
       
       if(letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u')
                    printf("\n A letra eh uma vogal \n");
                    
       else
                    printf("\n A letra nao eh uma vogal \n");
                    
       getch();
}
        
