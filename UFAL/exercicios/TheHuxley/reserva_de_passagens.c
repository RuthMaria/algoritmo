/*Descri��o 
O cen�rio � uma terra muito distante, onde ainda ocorre o caos a�reo. Voc�, � o
desenvolvedor de software respons�vel pelos sistemas da Ambrosino Airlines.
Sua miss�o � desenvolver um sistema de reserva de passagens. A Ambrosino
Airlines possui 37 voos fixos.

Formato de entrada 
Uma sequ�ncia de 37 pares de inteiros, indicando o n�mero do voo e a
quantidade de lugares dispon�veis no respectivo voo.
Depois voc� ler� uma sequ�ncia de pedidos de reserva. Cada pedido de reserva �
representado por um par de inteiros indicando, respectivamente, o n�mero do
documento de identidade do cliente e o n�mero do voo que o cliente deseja
viajar.
A entrada se encerra quando o n�mero do documento de identidade do cliente
for igual a 9999.
Existe a possibilidade de que o cliente deseje viajar em um voo que n�o est�
sendo oferecido pela Ambrosino Airlines.

Formato de sa�da 
Caso exista disponibilidade no voo, imprima o n�mero do documento de
identidade do cliente. Caso n�o exista disponibilidade ou n�o exista o voo
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
