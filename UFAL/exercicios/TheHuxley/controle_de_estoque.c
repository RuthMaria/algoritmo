/*Descrição
Em um estoque são dados os códigos das mercadorias e as respectivas quantidades existentes. A seguir, são fornecidos os pedidos dos clientes. 
O seu objetivo  é fazer um programa de controle do estoque que:
Leia o estoque inicial (máximo de 100 mercadorias);
Leia os pedidos dos clientes, constituído, cada um, de: número do cliente; código da mercadoria e quantidade desejada;
Seja verificado, para cada pedido, se ele pode ser atendido integralmente. Caso possa ser atendido, imprima OK, caso contrário ESTOQUE 
INSUFICIENTE;
Ao final da execução do programa, imprima o estoque final;

Formato de entrada
Uma lista de inteiros n e m, indicando o código da mercadoria e a quantidade dessa mercadoria disponível no estoque, respectivamente.
Essa lista se encerra quando n for igual a 9999.
Depois será dada uma lista de inteiros i, j e k, onde i corresponde ao número do cliente, j é o código da mercadoria sendo solicitada e k a 
quantidade pedida.
Os pedidos se encerram quando i for igual a 9999.

Formato de saída
Para cada pedido, a saída deve imprimir OK ou ESTOQUE INSUFICIENTE, seguida de um final de linha.
Ao final dos pedidos, deve ser impresso uma lista de inteiros x, y correspondendo ao código e ao estoque restante das mercadorias.
Cada par x, y dever ser impresso em uma linha.*/

#include <stdio.h>
//#include <conio.h>

main(){
       long int array1[100], array2[100], num_cliente, cod_merc, quant_ped, i = 0, j, l = 0, achou;
       
       for( ; ; ){
             scanf("%d", &array1[i]); 
             
             if (array1[i] == 9999)
                 break;   
                 
            scanf("%d", &array2[i]);             
             i++;        
       }
       
      for( ; ; ){
                         
             achou = 0;
             scanf("%d", &num_cliente); 
             
             if (num_cliente == 9999)
                  break;
                   
             scanf("%d%d", &cod_merc, &quant_ped); 
             
             for (j = 0; j < i; j++){
                     if (cod_merc == array1[j] && quant_ped <= array2[j]){
                                  printf("OK\n");
                                  array2[j] -= quant_ped;
                                  achou = 1;
                                  break;
                     }
             }
             if (achou == 0)
                     printf("ESTOQUE INSUFICIENTE\n");
       }
       
       for (j = 0; j < i; j++)
                printf("%d %d\n",  array1[j], array2[j]);   
     //  getch();
             
}

