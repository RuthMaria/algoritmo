/* 1. Faça um algoritmo que leia 2 valores e mostre as quatro operações matemáticas básicas entre estes 2 números.*/

#include<stdio.h>
#include<conio.h>

main(){
       float num1, num2;
       int opcao;
       
       
       do{
            printf("\n\n\t\t\t CALCULADORA \n\n");
            printf("1. adicao \n");
            printf("2. subtracao \n");
            printf("3. multiplicacao \n");
            printf("4. divisao \n");
            printf("5. Sair \n");
            printf("\n Opcao:  \n");
            scanf("%d", &opcao);
            
            switch(opcao){
                   case 1:
                        printf("\n digite os 2 numeros  \n");
                        scanf("%f%f", &num1, &num2);
                        printf("\n A soma eh %.2f", num1+num2);
                        break;
                        
                   case 2:
                        printf("\n digite os 2 numeros  \n");
                        scanf("%f%f", &num1, &num2);
                        printf("\n A subtracao eh %.2f", num1-num2);
                        break;
                        
                  case 3:
                        printf("\n digite os 2 numeros  \n");
                        scanf("%f%f", &num1, &num2);
                        printf("\n A multiplicacao eh %.2f", num1*num2);
                        break;
                        
                  case 4:
                        printf("\n digite os 2 numeros  \n");
                        scanf("%f%f", &num1, &num2);
                        printf("\n A divisao eh %.2f", num1/num2);
                        break;
                        
                  case 5:
                        exit(1);
            }         
       }while(opcao != 5);
       
       getch();                        
                        
}
