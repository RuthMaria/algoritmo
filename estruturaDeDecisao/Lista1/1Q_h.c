/*
h.Ler a idade de um nadador classifica-o em uma das seguintes categorias:
infantil A = 5 - 7 anos
infantil B = 8-10 anos
juvenil A = 11-13 anos
juvenil B = 14-17 anos
adulto = maiores de 18 anos
*/

main(){
       int idade;
       
       printf("\n Idade: ");
       scanf("%d", &idade);
       
       if(idade >=5 && idade <=7)
                      printf("\n infantil A");
                      
       if(idade >=8 && idade <=10)
                      printf("\n infantil b");
                      
       if(idade >=11 && idade <=13)
                      printf("\n Juvenil A");
                      
       if(idade >=14 && idade <=17)
                      printf("\n Juvenil B");
                      
       if(idade >=18)
                      printf("\n Adulto");
                      
       getch();
}
