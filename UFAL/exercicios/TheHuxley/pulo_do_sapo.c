/*Descri��o 
Sebasti�o Bueno Coelho, apelidado de SBC pelos familiares e amigos, passou as f�rias de janeiro de 2011 no
s�tio de seus av�s. Durante sua estadia, uma das atividades prediletas do SBC era nadar no rio que havia no
fundo da casa onde morava.

Uma das caracter�sticas do rio que mais impressionava SBC era um belo caminho, feito inteiramente com
pedras brancas. H� muito tempo, o av� de SBC notara que os habitantes do s�tio atravessavam o rio com
grande frequ�ncia e, por isso, construiu um caminho no rio com pedras posicionadas em linha reta; ao faz�-lo,
tomou muito cuidado para que o espa�amento das pedras fosse de exatamente um metro.

Hoje em dia, a �nica utilidade do caminho � servir de divers�o para os sapos que vivem no rio, que pulam de uma
pedra a outra agitadamente. Um certo dia, enquanto descansava e nadava nas �guas, SBC assistiu atentamente
�s acrobacias dos bichos e notou que cada sapo sempre pulava (zero, uma ou mais vezes) uma quantidade fixa
de metros.
SBC sabe que voc� programa e, chegando na escola, resolveu desafiar-te com o seguinte
problema: Dado o n�mero de pedras no rio, o n�mero de sapos, a pedra inicial sobre a qual cada sapo est�
(cada pedra � identificada por sua posi��o na sequ�ncia de pedras) e a dist�ncia que cada sapo pula, determinar
as posi��es onde pode existir um sapo depois que SBC chega no rio.
Seguindo o formato de entrada e sa�da descrito abaixo temos o seguinte exemplo:
Entrada
8 3
3 3
2 2
6 2
Sa�da
0
1
1
1
0
1
0
1
 
Neste exemplo, SBC indicou a exist�ncia de 8 pedras no rio e 3 sapos. Os sapos estavam inicialmente
nas pedras 3, 2 e 6. SBC tamb�m lhe disse que o primeiro sapo da entrada sempre pula 3 metros,
o segundo e terceiro sempre pulam 2 metros. Dessa forma, o primeiro sapo pode estar nas pedras
3 ou 6; o segundo sapo pode estar nas pedras 2, 4, 6 ou 8; e o terceiro sapo pode estar nas pedras
6, 4, 2 e 8. A figura a seguir ilustra as poss�veis pedras que podem ser ocupadas pelos sapos quando
eles come�am a pular.

Formato de entrada 
A primeira linha da entrada cont�m dois inteiros N e M representando o n�mero de pedras no rio e o n�mero de
sapos, respectivamente. Cada uma das M linhas seguintes possui dois inteiros P e D representando a posi��o
inicial de um sapo e a dist�ncia fixa de pulo, respectivamente.

Formato de sa�da 
A sa�da cont�m N linhas. A i-�sima linha indica a possibilidade ou n�o de ter um sapo na i-�sima pedra.
Para as pedras que podem ter um sapo voc� deve imprimir 1, e para as pedras que com certeza n�o podem ter
nenhum sapo voc� deve imprimir 0.*/

#include <stdio.h>
//#include <conio.h>

main(){
       int num_pedras, num_sapos, i, posicao_ini, distancia_p, j;
       
       
       scanf("%d%d", &num_pedras, &num_sapos);
       
       
       int  pos_inicial[num_pedras];
       
       
       for ( i = 0; i < num_pedras; i++)
             pos_inicial[i] = 0;
             
       
       for ( i = 0; i < num_sapos; i++){
           
            scanf("%d%d", &posicao_ini, &distancia_p);
            
            for ( j = posicao_ini-1; j < num_pedras; j += distancia_p){   
                          pos_inicial[j] = 1;
            }
            
            for ( j = posicao_ini-1; j >= 0; j -= distancia_p){  
                          pos_inicial[j] = 1;
            }
       }
       
       for ( i = 0; i < num_pedras; i++)
           printf("%d\n", pos_inicial[i]);

       //getch();
}
