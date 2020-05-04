/*
Descri��o
Clara est� organizando as fotos da sua �ltima viagem num �lbum de fotos. Como ela tem muitas fotos, para economizar p�ginas do �lbum ela quer
colar duas fotos por p�gina do �lbum.
Como as fotos s�o retangulares, as fotos podem ser coladas giradas (mas sempre com lados paralelos aos da p�gina do �lbum, para preservar o
equil�brio est�tico do �lbum), mas elas devem sempre ficar inteiramente contidas no interior da p�gina, e n�o devem se sobrepor.
Em geral, das muitas formas de posicionar as fotos do �lbum s� algumas (ou nenhuma) satisfazem estas restri��es, ent�o pode ser dif�cil
decidir se � poss�vel colar as duas fotos em uma mesma p�gina do �lbum, e por isso Clara pediu a sua ajuda para escrever um programa que,
dadas as dimens�es da p�gina e das fotos, decide se � poss�vel colar as fotos na p�gina.
Por exemplo, cada p�gina pode ser 5 X 7, e duas fotos s�o 3 X 4. Nesse caso, � poss�vel colar as duas fotos:

Formato de entrada
A primeira linha da entrada cont�m dois inteiros X e Y , indicando a largura e a altura da p�gina do �lbum.
Cada uma das duas linhas seguintes cont�m dois inteiros L e H, indicando a largura e a altura das fotos.
Suponha:

1 <= X,Y <= 1000
1 <= L,H <= 1000

Formato de sa�da
Imprima uma �nica linha, contendo um �nico caractere: �S�, se � poss�vel colar as duas fotos na p�gina do �lbum, e �N�, caso contr�rio.*/

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
