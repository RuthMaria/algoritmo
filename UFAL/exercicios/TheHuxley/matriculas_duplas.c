/*Descri��o
A coordena��o do curso de Ci�ncia da Computa��o da UFAL deseja saber quantos alunos est�o cursando ao mesmo tempo as cadeiras de Programa��o II
e Programa��o III. Fa�a um programa que leia os c�digos de matr�cula dos alunos de ambos os cursos e imprima os c�digos de matr�culas dos alunos
que est�o cursando ambas as disciplinas.
Sabe-se que a disciplina de Programa��o II conta com 45 alunos e a disciplina de Programa��o III conta com 30 alunos.

Formato de entrada
Uma sequ�ncia de 45 inteiros representando as matr�culas dos alunos cursando a disciplina de Programa��o II, seguida de uma sequ�ncia de 30
 inteiros representando as matr�culas dos alunos que cursam a disciplina de Programa��o III.

Formato de sa�da
Uma lista de inteiros correspondendo aos alunos que est�o matriculados em ambas as disciplinas.
Cada inteiro deve ser separado por um espa�o. Ap�s o �ltimo inteiro, deve existir um espa�o seguido de um final de linha.
As matr�culas devem ser impressas de acordo com a ordem dada na entrada da disciplina de Programa��o II.*/

#include<stdio.h>

#define tam 45
#define quant 30


int main(){
    int i, j, prog_2[tam], prog_3[quant];

        for(i = 0; i<tam; i++)
            scanf("%d", &prog_2[i]);
        
        for(j = 0; j<quant; j++)
            scanf("%d", &prog_3[j]);

        for(i = 0; i<tam; i++){
            for(j = 0; j<quant; j++){
                if(prog_3[j] == prog_2[i])
                     printf("%d ", prog_2[i]);
             }
        }
}
