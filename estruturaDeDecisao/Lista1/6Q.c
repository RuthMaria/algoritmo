

#include<stdio.h>
#include<stdlib.h>

main(){
       int cap_maxima, a, b, soma;
       char  op;
       
       printf("\n Capacidade maxima do computador e a expressao de soma: ");
       fflush(stdin);
       scanf("%d%d%d", &cap_maxima, &a,&b);
       
       soma = a+b;
       
       if(soma <= cap_maxima)
                   printf("\n OK");
                   
       else
                   printf("\n overflow");
                   
       getch();
}
       
       
