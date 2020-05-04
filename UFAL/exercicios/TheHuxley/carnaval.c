/*
Descri��o

O Carnaval � um feriado celebrado normalmente em fevereiro, em muitas cidades brasileiras,
a principal atra��o s�o os desfiles de escolas de samba. As v�rias agremia��es desfilam ao
som de seus sambas-enredos e s�o julgadas pela liga das escolas de samba para determinar
a campe� do Carnaval.

Cada agremia��o � avaliada em v�rios quesitos; em cada quesito, cada escola recebe cinco
notas que variam de 5,0 a 10,0. A nota final da escola em um dado quesito � a soma das
tr�s notas centrais recebidas pela escola, excluindo a maior e a menor das cinco notas.

Como existem muitas escolas de samba e muitos quesitos, o presidente da liga pediu que
voc� escrevesse um programa que, dadas as notas da agremia��o, calcula a sua nota final
num dado quesito.

Formato de entrada
A entrada cont�m uma �nica linha, contendo cinco n�meros Ni (1 <= i <= 5), todos com uma
casa decimal, indicando as notas recebidas pela agremia��o em um dos quesitos.

Considere:

5.0 <= Ni <= 10.0

Formato de sa�da
Seu programa deve imprimir uma �nica linha, contendo um �nico n�mero com exatamente
uma casa decimal, a nota final da escola de samba no quesito considerado.
*/

#include <stdio.h>
//#include <conio.h>

main(){
       float array[5], aux;
       int troca = 0, i, j;
       
       for ( i = 0; i < 5; i++)
            scanf("%f", &array[i]);
            
        for(i = 0; i<5; i++){
             troca = 0;
             for(j = 0; j<4; j++){
                   if(array[j] > array[j+1]){
                          aux = array[j];
                          array[j] = array[j+1];
                          array[j+1] = aux;
                          troca = 1;
                   }
             }

             if(troca == 0)
                    break;
       }
       
       printf("%.1f\n", array[1] + array[2] + array[3]);
       
       //getch();
}
