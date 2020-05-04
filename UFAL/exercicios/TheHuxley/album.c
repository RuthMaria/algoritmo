/*
Descrição
Clara está organizando as fotos da sua última viagem num álbum de fotos. Como ela tem muitas fotos, para economizar páginas do álbum ela quer
colar duas fotos por página do álbum.
Como as fotos são retangulares, as fotos podem ser coladas giradas (mas sempre com lados paralelos aos da página do álbum, para preservar o
equilíbrio estético do álbum), mas elas devem sempre ficar inteiramente contidas no interior da página, e não devem se sobrepor.
Em geral, das muitas formas de posicionar as fotos do álbum só algumas (ou nenhuma) satisfazem estas restrições, então pode ser difícil
decidir se é possível colar as duas fotos em uma mesma página do álbum, e por isso Clara pediu a sua ajuda para escrever um programa que,
dadas as dimensões da página e das fotos, decide se é possível colar as fotos na página.
Por exemplo, cada página pode ser 5 X 7, e duas fotos são 3 X 4. Nesse caso, é possível colar as duas fotos:

Formato de entrada
A primeira linha da entrada contém dois inteiros X e Y , indicando a largura e a altura da página do álbum.
Cada uma das duas linhas seguintes contém dois inteiros L e H, indicando a largura e a altura das fotos.
Suponha:

1 <= X,Y <= 1000
1 <= L,H <= 1000

Formato de saída
Imprima uma única linha, contendo um único caractere: ‘S’, se é possível colar as duas fotos na página do álbum, e ‘N’, caso contrário.*/

#include <stdio.h>
//#include <conio.h>

main()
{
    int largura_album, altura_album, altura1_foto, altura2_foto, largura1_foto, largura2_foto;
    int area_quadrado, area1, area2;

    scanf("%d %d", &largura_album, &altura_album);
    scanf("%d%d\n%d%d", &largura1_foto, &altura1_foto, &largura2_foto, &altura2_foto);
    
    area_quadrado = largura_album*altura_album;
    area1 = largura1_foto*altura1_foto;
    area2 = largura2_foto*altura2_foto;

    if ( area1 + area2 <= area_quadrado)
            printf("S\n");

    else
            printf("N\n");
    
    //getch();
}
