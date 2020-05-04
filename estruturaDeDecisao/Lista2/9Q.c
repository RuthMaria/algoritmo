/*
9. Escrever um algoritmo que leia valores inteiros em duas variáveis distintas e se o
resto da divisão da primeira pela segunda for 1 mostre a soma dessas variáveis
mais o resto da divisão; se for 2 escreva se o primeiro e o segundo valor são pares
ou ímpares; se for igual a 3 multiplique a soma dos valores lidos pelo primeiro; se
for igual a 4 divida a soma dos números lidos pelo segundo, se este for diferente
de zero. Em qualquer outra situação mostre o quadrado dos números lidos.
*/

#include<stdio.h>
#include<stdlib.h>

main(){
       int num1, num2, l, z;
       
       printf("\n Numero: ");
       scanf("%d%d", &num1, &num2);
       
       if(num1%num2 == 0){
                    l = pow(num1, 2);
                    z = pow(num2, 2);
                    printf("\n Quadrado do numero %d e %d: %d e %d\n",num1, num2, l, z);
       }
                   
       if(num1%num2 == 1)
                    printf("\n Soma mais resto: %d\n",(num1+num2)+(num1%num2));
                           
       if(num1%num2 == 2){
                    
                   printf("\n Numero 1 ");
                    
                   if(num1%2 != 0)         
                              printf("\n  Impar \n");
                  else
                              printf("\n Par \n");
                         
                  printf("\n Numero 2 ");    
                    
                  if(num2%2 != 0)         
                             printf("\n Impar \n");
                  else
                             printf("\n Par \n");
       }
       
       if(num1%num2 == 3)
                     printf("\n Soma multiplicado pelo primeiro: %d\n",(num1+num2)*num1);
             
              
       if(num2 != 0 && num1%num2 == 4)              
                        printf("\n Soma dividido pelo segundo: %d\n",(num1+num2)/num2);
                        
       else
                        printf("\n A operacao nao eh valida");
       
       getch();
}
