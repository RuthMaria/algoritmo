/*


Descrição

Faça um programa que leia 3 números inteiros e os imprima em ordem decrescente.


Desafio: tente utilizar apenas 4 comandos if.
Formato de entrada

Consiste de 3 números inteiros.
Formato de saída

Consiste dos 3 números de entrada ordenados do maior para o menor.


*/

#include<stdio.h>

main(){
    int n1, n2, n3;

    scanf("%d%d%d", &n1, &n2, &n3);

    if(n1 <= n2 && n1 <= n3){
        if(n2 > n3)
                printf("%d\n%d\n%d", n2, n3, n1 );
        else
                printf("%d\n%d\n%d", n3, n2, n1);

    }
    else if(n2 <= n1 && n2 <= n3){
              if(n1 > n3)
                    printf("%d\n%d\n%d", n1, n3, n2);
              else
                    printf("%d\n%d\n%d", n3, n1, n2);
    }
    else if(n3 <= n2 && n3 <= n1){
              if(n1 > n2)
                    printf("%d\n%d\n%d", n1, n2, n3);
              else
                    printf("%d\n%d\n%d", n2, n1, n3);
    }

}

