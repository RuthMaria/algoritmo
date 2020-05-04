
/*

1. Qual o valor das expressões a seguir:
a) 1 > 2               (F)
b) ! ( 1 > 2)          (V)  
c) 3 == 2              (F)
d) 'j' != 'j'          (F)
e) 'j' != 'j'+2        (V)
f) 'j' != 'j' == 'j'   (F)


2. Qual o valor de k?

int k, j = 3;

k = j == 3;         =>  k = 1


3. Indique o valor de cada uma das expressões a seguir:
           
int i = 1, j = 2, k = 3, n = 2;
float x = 3.3, y = 4.4;

a) i < j + 3                       =>  1 < 5  (V)

b) 2 * i – 7 <= j – 8              =>   -5 <= -6  (V)

c) -x + y >= 2.0 * y               => 1.1 >= 8.8    (F)
  
d) x == y                          =>  3.3 == 4.4   (F)

e) x != y                          =>  3.3 != 4.4    (V)

f) i + j + k == -2 * - k           => 6 == 6  (V)

g) i < j || 2 >= k                 =>  1 < 2 || 2 >= 3      =>   v || f     (V)                     

h) i == 2 || j == 4 || k == 5      =>  1 == 2 || 2 == 4 || 3 == 5     =>  f || f || f   (F)      

i) x <= 5.0 && x != 1.0 || i>j     =>  3.3 <= 5 && 4.4 != 1 || 1 > 2   =>  v && v || f   (V)     

j) x <= 5.0 || (x != 1.0 && i>j)   =>  3.3 <= 5 || (3.3 != 1 && 1 > 2)  =>  v ||(v && f)  (V)  

k) (i || 0) && (k <= n) && (i != 0) || (n > i)   

Resp.: (1 || 0) && (3 <= 2) && (1 != 0) || (2 > 1)  => v && f && v || v    (V)


4. Diga o resultado das variáveis x, y e z depois da seguinte sequência de operações:
        
int x,y;
int a = 14, b = 3;
float z;

x = a/b;    => x = 4    pois só pega a parte inteira  

y = a%b;    => y = 2    pois só pega o resto
 
z = y/x;    => z = 0   pois só pega a parte inteira


5. Qual o valor das variáveis abaixo, após a execução dos seguintes comandos:
        
int a = 10, b = 20, c, x;

c = a++;   =>  c = 10 e a é increntado para 11;

x = ++b;   =>  x = b = 21 

*/


#include<stdio.h>
#include<conio.h>

main(){
       int k, j = 3;
 
       k = j == 3;  // O valor de k é 1 pq essa setença é verdadeira

       printf("\n k = %d", k);

       getch();
}
