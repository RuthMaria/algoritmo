
#include <stdio.h>
#include <conio.h>

#define Q 219

void casa(int altura_casa)
{
    int largura, altura, altura_maxima;
    for (largura = 0; largura < 6 ; largura++)
    {
        if (largura == 2 || largura==3)
        {
            altura_maxima = altura_casa;
        }
        else
        {
            altura_maxima = altura_casa-2;
        }

        for (altura = 0 ; altura < altura_maxima; altura++ )
        {
            printf("%c",Q);
        }
        printf("\n");
    }
    printf("\n");
}


main(){
     
     //CASA 
    casa (3);
    casa (6);
    casa (9);
    getch();
}

