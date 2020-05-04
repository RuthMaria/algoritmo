

main(){
      int num1, num2, num3, maior, menor, meio;

      scanf("%d%d%d", &num1, &num2, &num3);

      menor = num1;
      maior = num1;

      if(num2 > maior)
             maior = num2;

      if(num3 > maior)
             maior = num3;

      if(num2 < menor)
             menor = num2;

      if(num3 < menor)
             menor = num3;

      if(menor < num1 && num1 < maior)
              meio = num1;

      if(menor < num2 && num2 < maior)
              meio = num2;

      if(menor < num3 && num3 < maior)
              meio = num3;

      printf("%d", meio);

}
