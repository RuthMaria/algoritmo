#include<stdio.h>
#include<conio.h>

main(){
       int a = 6, *ponteiro;
       
       printf ("Endereco de  %d: %p\n",  a, &a); // para saber o endere�o da vari�vel a
      
       ponteiro = &a;   // pega o endere�o da vari�vel a
            
       printf("Endereco do ponteiro: %p\n", ponteiro);
         
       *ponteiro = 4; // muda o conte�do da vari�vel a
       
        printf ("Conteudo do ponteiro: %d\n", *ponteiro);
       
       getch();
}
