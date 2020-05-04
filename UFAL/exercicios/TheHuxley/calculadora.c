/*Descri��o
Ambr�sio est� ficando craque em matem�tica e para provar suas habilidades resolveu fazer uma calculadora. A calculadora deve ser capaz de
efetuaras 04 opera��es aritm�ticas (adi��o, subtra��o, multiplica��o e divis�o).

Formato de entrada
Consiste de 02 n�meros reais, um em cada linha, seguidos de um caractere representando a opera��o a ser executada. Depois, consiste de uma
sequ�ncia de um n�mero real seguido de um caractere, tamb�m um em cada linha. A entrada termina quando o caractere & for lido.

Formato de sa�da
Consiste em uma sequencia de n�meros reais, um em cada linha, representando o resultado da opera��o escolhida. A partir do terceiro n�mero
lido, o resultado deve ser obtido utilizando-se o valor da opera��o anterior. Caso a opera��o n�o seja poss�vel, deve ser impresso "operacao
nao pode ser realizada". Os n�meros devem ser impressos com 03 casas decimais.*/

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
