/*Descrição
Ambrósio está ficando craque em matemática e para provar suas habilidades resolveu fazer uma calculadora. A calculadora deve ser capaz de
efetuaras 04 operações aritméticas (adição, subtração, multiplicação e divisão).

Formato de entrada
Consiste de 02 números reais, um em cada linha, seguidos de um caractere representando a operação a ser executada. Depois, consiste de uma
sequência de um número real seguido de um caractere, também um em cada linha. A entrada termina quando o caractere & for lido.

Formato de saída
Consiste em uma sequencia de números reais, um em cada linha, representando o resultado da operação escolhida. A partir do terceiro número
lido, o resultado deve ser obtido utilizando-se o valor da operação anterior. Caso a operação não seja possível, deve ser impresso "operacao
nao pode ser realizada". Os números devem ser impressos com 03 casas decimais.*/

#include <stdio.h>

main() {

    double num1, num2, result;
    char op;


       scanf("%lf", &num1);
       result = num1;


    for ( ; ; ) {

       scanf("%lf %c", &num2, &op);


       switch (op) {

             case '&':
                 exit(1);


             case '+':
                 result += num2;
                 printf("%.3lf\n", result);
                 break;


             case '-':
                 result -= num2;
                 printf("%.3lf\n", result);
                 break;


             case '/':
                 if(num2 != 0){
                      result /= num2;
                      printf("%.3lf\n", result);
                 }
                 else
                      printf("operacao nao pode ser realizada\n");
                 break;


             case '*':
                 result *= num2;
                 printf("%.3lf\n", result);
                 break;
      }

    }

}
