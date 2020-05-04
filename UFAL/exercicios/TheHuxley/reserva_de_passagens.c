/*Descrição 
O cenário é uma terra muito distante, onde ainda ocorre o caos aéreo. Você, é o
desenvolvedor de software responsável pelos sistemas da Ambrosino Airlines.
Sua missão é desenvolver um sistema de reserva de passagens. A Ambrosino
Airlines possui 37 voos fixos.

Formato de entrada 
Uma sequência de 37 pares de inteiros, indicando o número do voo e a
quantidade de lugares disponíveis no respectivo voo.
Depois você lerá uma sequência de pedidos de reserva. Cada pedido de reserva é
representado por um par de inteiros indicando, respectivamente, o número do
documento de identidade do cliente e o número do voo que o cliente deseja
viajar.
A entrada se encerra quando o número do documento de identidade do cliente
for igual a 9999.
Existe a possibilidade de que o cliente deseje viajar em um voo que não está
sendo oferecido pela Ambrosino Airlines.

Formato de saída 
Caso exista disponibilidade no voo, imprima o número do documento de
identidade do cliente. Caso não exista disponibilidade ou não exista o voo
desejado, imprima a string: INDISPONIVEL
Lembre-se que uma vez que o cliente faz a reserva em um voo, a disponibilidade
deve ser reduzida.*/

#include<stdio.h>

#define tam 37


main(){
       int i, cont = 0, voo[tam], quant[tam], rg, num_voo;
         
       for(i = 0; i < tam; i++)
               scanf("%d %d", &voo[i], &quant[i]);
                      
       do{           
          cont = 0;    
          scanf("%d", &rg); 
          
          if(rg != 9999){
               scanf("%d", &num_voo); 
                
                     
              for(i = 0; i < tam; i++){                            
                    if(num_voo == voo[i] && quant[i] > 0){
                            printf("%d\n", rg);
                            quant[i]--;
                            cont = 1;
                    }
             }
          if(cont == 0)
               printf("INDISPONIVEL\n");     
          } 
                   
       }while(rg != 9999);     
}
