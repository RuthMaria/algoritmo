/*Descrição 
A multiplicação de duas matrizes A e B só é possível se o número de colunas da matriz A for igual ao número de linhas da matriz B. Assim, 
se A é uma matriz m X n e B, uma matriz n X p, a multiplicação será possível e o produto será uma matriz C, m X p.
O produto matricial pode ser muito útil em várias aplicações como, por exemplo, na fábrica de motores a seguir.
Uma certa fábrica produziu dois tipos de motores: M0 e M1, nos meses de janeiro a dezembro. O número de motores produzidos foi registrado na 
tabela superior esquerda.
O setor de controle de vendas tem uma tabela do custo e do lucro (em reais) obtidos com cada motor. Esta tabela é a inferior esquerda.
 
Para saber o custo e o lucro nos meses de janeiro a dezembro, basta que se faça o produto matricial das duas tabelas.
Sua missão é fazer um programa que receba as duas tabelas e imprima os custos e lucros mensais de cada motor e também os custos e lucros anuais
de cada motor.

 
Formato de entrada 
Primeiramente, serão fornecidos os dados de produção. Serão dados 12 pares de inteiros, representando a produção dos motores M0 e M1, 
respectivamente, mês a mês.
Depois são dados dois pares de números reais, representando o custo e o lucro de cada um dos motores.

Formato de saída 
Seja f um número real formatado com duas casas decimais, você deve imprimir:
Motor[0], Mes[1], custo=[f], lucro=[f]
Motor[0], Mes[2], custo=[f], lucro=[f]
...
Motor[0], Mes[12], custo=[f], lucro=[f]
Motor[1], Mes[1], custo=[f], lucro=[f]
...
Motor[1], Mes[12], custo=[f], lucro=[f]
Motor[0], anual, custo=[f], lucro=[f]
Motor[1], anual, custo=[f], lucro=[f]*/


#include <stdio.h>
#include <conio.h>
#define LIN 12
#define COL 2

main(){
       int i, j;
       double custo_lucro[2][2], mat[LIN][COL], custo, lucro, soma1_custo, soma2_custo, soma1_lucro,  soma2_lucro;
       soma1_custo = soma2_custo = soma1_lucro = soma2_lucro = 0;
       
       for (i = 0; i < LIN; i++){
            for (j = 0; j < COL; j++){
                scanf("%lf", &mat[i][j]);
            }
       }
       
        for (i = 0; i < 2; i++){
            for (j = 0; j < 2; j++){
             scanf("%lf", &custo_lucro[i][j]);
            }
        }
       
       for (i = 0; i < LIN; i++){
            for (j = 0; j < COL; j++){
                
                if (j == 0){
                     custo = mat[i][j]*custo_lucro[0][0];
                     lucro = mat[i][j]*custo_lucro[0][1];
                     soma1_custo += custo;
                     soma1_lucro += lucro;
                     
                     printf ("Motor[%d], Mes[%d], custo=[%.2lf], lucro=[%.2lf]\n", j, i+1, custo, lucro);
                }
                     
            }
       }
       
       for (i = 0; i < LIN; i++){
            for (j = 0; j < COL; j++){
                
                if (j == 1){
                     custo = mat[i][j]*custo_lucro[1][0];
                     lucro = mat[i][j]*custo_lucro[1][1];
                     soma2_custo += custo;
                     soma2_lucro += lucro;
                     printf ("Motor[%d], Mes[%d], custo=[%.2lf], lucro=[%.2lf]\n", j, i+1, custo, lucro);
                }
            }
       }
       
       printf("Motor[0], anual, custo=[%.2lf], lucro=[%.2lf]\n", soma1_custo, soma1_lucro);
       printf("Motor[1], anual, custo=[%.2lf], lucro=[%.2lf]\n", soma2_custo, soma2_lucro);
       
       
      // getch();
       
}
