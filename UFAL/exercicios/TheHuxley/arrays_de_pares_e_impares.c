/*Descri��o 
Neste problema voc� dever� ler 15 valores coloc�-los em 2 arrays conforme estes valores forem pares ou �mpares. S� que o tamanho de cada um 
dos dois arrays � de 5 posi��es. Ent�o, cada vez que um dos dois arrays encher, voc� dever� imprimir todo o array e utiliz�-lo novamente para 
os pr�ximos n�meros que forem lidos. Terminada a leitura, deve-se imprimir o conte�do que restou em cada um dos dois arrays, imprimindo 
primeiro os valores do array �mpar. Cada array pode ser preenchido tantas vezes quantas for necess�rio.

Formato de entrada 
A entrada cont�m 15 n�meros inteiros.

Formato de sa�da 
Imprima a sa�da conforme o exemplo de sa�da.*/


#include <stdio.h>
//#include <conio.h>


main(){
       int num, par[5], impar[5], j = 0, l = 0, m = 0, i = 0;
       
       
       for ( i = 0; i < 15; i++){
           scanf("%d", &num);
       
           if ( num % 2 == 0){
                 par[j] = num;
                 j++;
           }
           else{
                 impar[l] = num;
                 l++;
           }
           
           if ( l == 5 ){
                for ( l = 0; l < 5; l++ )
                    printf("impar[%d] = %d\n", l, impar[l]); 
                
                 for ( l = 0; l < 5; l++ )
                     impar[l] = 0;
                     
                 l = 0;
                
           }
           else if ( j == 5){
                for ( j = 0; j < 5; j++ )
                    printf("par[%d] = %d\n", j, par[j]);
                
                for ( j = 0; j < 5; j++ )
                    par[j] = 0;
                
                j = 0;
          }
                
       }
       for ( m = 0; m < l; m++ )
                  printf("impar[%d] = %d\n", m, impar[m]); 
                    
       for ( m = 0; m < j; m++ )
                  printf("par[%d] = %d\n", m, par[m]);
       
       //getch();
}
