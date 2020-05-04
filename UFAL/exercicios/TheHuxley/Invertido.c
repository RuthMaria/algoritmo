
#include<stdio.h>


main(){
      int unidade, dezena, centena, numero;

      scanf("%d", &numero);

      unidade = (numero%10);
      dezena = (numero/10)%10;
      centena = (numero/100)%10;
      printf("%d%d%d", unidade, dezena, centena);

}
