#include<stdio.h>
#include<conio.h>

main(){
       int a = 6, *ponteiro;
       
       printf ("Endereco de  %d: %p\n",  a, &a); // para saber o endereço da variável a
      
       ponteiro = &a;   // pega o endereço da variável a
            
       printf("Endereco do ponteiro: %p\n", ponteiro);
         
       *ponteiro = 4; // muda o conteúdo da variável a
       
        printf ("Conteudo do ponteiro: %d\n", *ponteiro);
       
       getch();
}
