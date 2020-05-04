
#include<stdio.h>

main(){
      int unidade, dezena, centena, numero, milhar;

       
      scanf("%d",&numero);

      unidade = (numero%10);
      dezena = (numero/10)%10;
      centena = (numero/100)%10;
      milhar = (numero/100)/10;
      int soma = unidade*1000+dezena*100+centena*10+milhar;
  
            
      printf("%d",soma);

}
