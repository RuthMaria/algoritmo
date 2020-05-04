/*
2.Desenvolva uma calculadora que realize as 4 operações básicas (+,-, *,/) sobre dois números
quaisquer.
*/

#include<stdio.h>
#include<stdlib.h>

main(){
       float a, b;
       int op;
       
       printf("\n\n\t\t\t\t CALCULADORA \n\n");
       printf("1. Adicao \n");
       printf("2. subtracao \n");
       printf("3. Multiplicacao \n");
       printf("4. Divisao \n\n");

       printf(" Opcao:");
       scanf("%d", &op);
           
       switch(op){
                  case 1:
                        system("cls");
                        printf("\n Numeros: ");
                        scanf("%f%f", &a, &b);
                              
                        printf("\n Resultado: %.2f", a+b);
                        getch();
                        break;
                              
                  case 2:
                        system("cls");
                        printf("\n Numeros: ");
                        scanf("%f%f", &a, &b);
                              
                        printf("\n Resultado: %.2f", a-b);
                        getch();
                        break;
                              
                  case 3:
                        system("cls");
                        printf("\n Numeros: ");
                        scanf("%f%f", &a, &b);
                              
                        printf("\n Resultado: %.2f", a*b);
                        getch();
                        break;
                              
                  case 4:
                        system("cls");
                        printf("\n Numeros: ");
                        scanf("%f%f", &a, &b);
                              
                        if(b != 0)
                                 printf("\n Resultado: %.2f", a/b);
                                      
                        else
                                 printf("\n Nao ha divisao por zero");
                                        
                        getch();
                        break;
                              
                  case 5:
                        system("cls");
                        printf("\n Numeros: ");
                        scanf("%f%f", &a, &b);
                              
                        printf("\n Resultado: %.2f", pow(a, b));
                        getch();
                        break;
                              
                  case 6:
                        system("cls");
                        printf("\n Numero: ");
                        scanf("%f", &a);
                              
                        printf("\n Resultado: %.2f", sqrt(a));
                        getch();
                        break;
                              
                  case 7: 
                        exit(1);
                              
                  default:
                         printf("opcao invalida");
                         break;
           }
               
       getch();
}
                          
                       
                  
