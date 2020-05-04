/*

Descrição

Faça um programa que leia 3 números inteiros e os imprima em ordem crescente.
Formato de entrada

03 números inteiros separados por um final de linha.
Formato de saída

Os 03 números lidos impressos em ordem crescente, cada um em uma linha

*/

#include<stdio.h>

main(){
    int n1, n2, n3;

    scanf("%d%d%d", &n1, &n2, &n3);

    if(n1 <= n2 && n1 <= n3){
        if(n2 > n3)
                printf("%d\n%d\n%d", n1, n3, n2 );
        else
                printf("%d\n%d\n%d", n1, n2, n3);

    }
    else if(n2 <= n1 && n2 <= n3){
              if(n1 > n3)
                    printf("%d\n%d\n%d", n2, n3, n1);
              else
                    printf("%d\n%d\n%d", n2, n1, n3);
    }
    else if(n3 <= n2 && n3 <= n1){
              if(n1 > n2)
                    printf("%d\n%d\n%d", n3, n2, n1);
              else
                    printf("%d\n%d\n%d", n3, n1, n2);
    }

}

