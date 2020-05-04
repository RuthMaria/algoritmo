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
EXEMPLO ABAIXO EXPLICANDO COMO O COMPILADOR EFETUA OS CALCULOS DO CÓDIGO ACIMA.
ADIMITINDO QUE O O NUMERO DIGITADO PELO USUÁRIO FOSSE 123 O CALCULO SERIA ASSIM PARA:

UNIDADE
       123|_10_
       3    12
       
       123%10 = 3 pois pega o resto da divisão. O resto da divisão(3) será a unidade.
       
DEZENA
      123|_10_
       3   12
      
      123/10 = 12 pois pega o resultado da divisão
      
      O resultado da divisão anterior divide-se por 10. o resto deste divisão será a dezena.        
      12|_10_
       2   1
       
      12%10 = 2 pois pega o resto da divisão. O resto da divisão(2) é a dezena.
      
CENTENA
       123|_10_
       3   12
      
      123/10 = 12 pois pega o resultado da divisão
      
      O resultado da divisão anterior divide-se por 10. o resultado desta divisão será a centena.        
      12|_10_
       2   1
       
      12/10 = 1 pois pega o resultado da divisão. O resultado da divisão(1) é a centena.

*/
