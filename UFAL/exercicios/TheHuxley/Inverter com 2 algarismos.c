#include<stdio.h>


main(){
       int unidade, dezena, centena, numero;
       
      scanf("%d", &numero);
       
      unidade = numero%10;
      dezena = (numero/10)%10;
            
      if(unidade == 0)
              printf("%d", dezena);
      else
              printf("%d%d",unidade, dezena);

}
