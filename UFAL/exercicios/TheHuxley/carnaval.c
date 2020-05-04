/*
Descrição

O Carnaval é um feriado celebrado normalmente em fevereiro, em muitas cidades brasileiras,
a principal atração são os desfiles de escolas de samba. As várias agremiações desfilam ao
som de seus sambas-enredos e são julgadas pela liga das escolas de samba para determinar
a campeã do Carnaval.

Cada agremiação é avaliada em vários quesitos; em cada quesito, cada escola recebe cinco
notas que variam de 5,0 a 10,0. A nota final da escola em um dado quesito é a soma das
três notas centrais recebidas pela escola, excluindo a maior e a menor das cinco notas.

Como existem muitas escolas de samba e muitos quesitos, o presidente da liga pediu que
você escrevesse um programa que, dadas as notas da agremiação, calcula a sua nota final
num dado quesito.

Formato de entrada
A entrada contém uma única linha, contendo cinco números Ni (1 <= i <= 5), todos com uma
casa decimal, indicando as notas recebidas pela agremiação em um dos quesitos.

Considere:

5.0 <= Ni <= 10.0

Formato de saída
Seu programa deve imprimir uma única linha, contendo um único número com exatamente
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
