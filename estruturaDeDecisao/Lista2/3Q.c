/*
3. Escrever um algoritmo para ler cinco valores inteiros, calcular a sua média, e
escrever na tela os que são superiores à média.
*/

#include<stdio.h>
#include<stdlib.h>

main(){
       int a, b, c, d , e, media;
       
       printf("\n Numeros: ");
       scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
       
       media = (a+b+c+d+e)/5;
       
       if(a > media)
                printf("\n Maior que a media: %d", a);
                
       if(b > media)
                printf("\n Maior que a media: %d", b);
                
       if(c > media)
                printf("\n Maior que a media: %d", c);
                
       if(d > media)
                printf("\n Maior que a media: %d", d);
                
       if(e > media)
                printf("\n Maior que a media: %d", e);
        
       getch();
}
