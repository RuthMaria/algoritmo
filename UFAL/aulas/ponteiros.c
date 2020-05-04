#include <stdio.h>

void alterar(int x, int *resp)
{
    (*resp) = (x) *2;
}

int main()
{
    int a;
    int b;
    int resposta;

    int *ponteiro;

    a = 5;
    b= 10;

    ponteiro = &b;

    printf("%d\n",*ponteiro);

    alterar(a,&resposta);

    printf("%d\n",resposta);


    return 0;
}
