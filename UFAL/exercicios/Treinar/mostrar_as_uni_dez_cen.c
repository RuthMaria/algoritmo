/*mostra a unidada, a dezena e a centena de um numero fornecido*/

#include<stdio.h>
#include<conio.h>

main(){
       int unidade, dezena, centena, numero;
       
       printf("Numero: ");
       scanf("%d", &numero);
       
      unidade = numero%10;
      dezena = (numero/10)%10;
      centena = (numero/10)/10;
      
      printf(" unidade %d, dezena %d e centena %d do numero %d",unidade, dezena, centena, numero);
       getch();
}

/*
EXEMPLO ABAIXO EXPLICANDO COMO O COMPILADOR EFETUA OS CALCULOS DO C�DIGO ACIMA.
ADIMITINDO QUE O O NUMERO DIGITADO PELO USU�RIO FOSSE 123 O CALCULO SERIA ASSIM PARA:

UNIDADE
       123|_10_
       3    12
       
       123%10 = 3 pois pega o resto da divis�o. O resto da divis�o(3) ser� a unidade.
       
DEZENA
      123|_10_
       3   12
      
      123/10 = 12 pois pega o resultado da divis�o
      
      O resultado da divis�o anterior divide-se por 10. o resto deste divis�o ser� a dezena.        
      12|_10_
       2   1
       
      12%10 = 2 pois pega o resto da divis�o. O resto da divis�o(2) � a dezena.
      
CENTENA
       123|_10_
       3   12
      
      123/10 = 12 pois pega o resultado da divis�o
      
      O resultado da divis�o anterior divide-se por 10. o resultado desta divis�o ser� a centena.        
      12|_10_
       2   1
       
      12/10 = 1 pois pega o resultado da divis�o. O resultado da divis�o(1) � a centena.

*/
