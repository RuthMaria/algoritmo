/*Descri��o
Dois times, Cormengo e Flaminthians, participam de um campeonato de futebol,
juntamente com outros times. Cada vit�ria conta tr�s pontos, cada empate um ponto. Fica
melhor classificado no campeonato um time que tenha mais pontos. Em caso de empate
no n�mero de pontos, fica melhor classificado o time que tiver maior saldo de gols. Se o
n�mero de pontos e o saldo de gols forem os mesmos para os dois times ent�o os dois
times est�o empatados no campeonato.
Dados os n�meros de vit�rias e empates, e os saldos de gols dos dois times, sua tarefa �
determinar qual dos dois est� melhor classificado, ou se eles est�o empatados no
campeonato.

Formato de entrada
A entrada � descrita em uma �nica linha, que cont�m seis inteiros, separados por um
espa�o em branco. Cv ,Ce, Cs, Fv, Fe, Fs, que s�o, respectivamente, o n�mero de vit�rias
do Cormengo, o n�mero de empates do Cormengo, o saldo de gols do Cormengo, o
n�mero de vit�rias do Flaminthians, o n�mero de empates do Flaminthians e o saldo de
gols do Flaminthians.
Considere:
0 <= Cv, Ce, Fv, Fe <= 100
-1000 <= Cs, Fs <= 1000

Formato de sa�da
Seu programa deve imprimir uma �nica linha. Se Cormengo � melhor classificado que
Flaminthians, a linha deve conter apenas a letra �C�, se Flaminthians � melhor classificado
que Cormengo, a linha deve conter apenas a letra �F�, e se os dois times est�o empatados
a linha deve conter apenas o caractere �=�.*/

#include<stdio.h>
//#include<conio.h>

main(){
       int Cv ,Ce, Cs, Fv, Fe, Fs;
       
       scanf("%d%d%d%d%d%d", &Cv , &Ce, &Cs, &Fv, &Fe, &Fs);
       
       if (((Cv*3)+Ce) > ((Fv*3)+Fe))
                       printf("C\n");
                       
       else if (((Cv*3)+Ce) < ((Fv*3)+Fe))
                      printf("F\n");
                      
              else if (((Cv*3)+Ce) == ((Fv*3)+Fe)){
                      if (Cs > Fs)
                            printf("C\n");
                            
                      else if (Cs < Fs)
                             printf("F\n");
                             
                            else if (Cs == Fs)
                                    printf("=\n");
              }
                            
      // getch();
}
