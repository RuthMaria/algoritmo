/*Descrição 

Dadas duas string em caixa-baixa, a e b, imprima a maior string x de letras minúsculas tais que:
existe uma permutação de x que é uma subsequência de a e
existe uma permutação de x que é uma subseqüência de b
Lembre-se que por permutação entende-se qualquer rearranjo dos caracteres na string, por exemplo "abc" pode ser permutado em
 "bca", "bac", "acb" e etc...
 
Formato de entrada 
O arquivo de entrada contém várias linhas de entrada.
A primeira linha contém uma string a, a segunda linha contém uma string b,cada string contém no máximo 1000 caracteres. 
A entrada termina com a = b = "fim", este caso não deve ser processado.

Formato de saída 
Para cada dupla de strings a e b,imprima uma linha contendo x. Se houver mais de um x que satisfaça o critéiro acima,
escolha o primeiro em ordem alfabética
Obs.: Se não houver x, imprima uma linha em branco*/

#include<stdio.h>
//#include<conio.h>
#include<string.h>

main(){
       char string_a[1100], string_b[1100], string_d[500], aux, string1[1100], string2[1100];
       int i, j, troca, k, l;
       
       for ( ; ; ){
           
           troca = k = l = 0;
           string_d[0] = 0;
                   
           gets(string_a);
           gets(string_b);        
           
           strcpy(string1, string_a);
           strcpy(string2, string_b);
           
           if ( strcmp(string_a, "fim") == 0 &&  strcmp(string_b, "fim") == 0)
                   exit(1);
           
                  
           for(i = 0; string1[i] != '\0'; i++){       // conta a quantidade de letras iguais
                 for(j = 0; string2[j] != '\0'; j++){ 
                       if ( string1[i] == string2[j] ){
                                string2[j] = '1';
                                k++;
                                break;
                       }
                 }
           }                                 
         
           char  string_c[k], string_d[k];
       
           for(i = 0; string_a[i] != '\0'; i++){       // pega as letras iguais das duas strings e add em um array
               for(j = 0; string_b[j] != '\0'; j++){ 
                     if ( string_a[i] == string_b[j] ){                            
                            string_c[l] = string_a[i];  
                            l++;
                            string_b[j] = '1';
                            break;
                     }
               }
           }      
                 
           for(i = 0; i < k; i++){   // ordena a string que contem as letras iguais
                troca = 0;
                for(j = 0; j < k-1; j++){                      
                     if(string_c[j] > string_c[j+1]){
                          aux = string_c[j];
                          string_c[j] = string_c[j+1];
                          string_c[j+1] = aux;
                          troca = 1;
                     }
                }

                if(troca == 0)
                    break;
           }
                  
           for(i = 0; i < k; i++)
                    printf("%c", string_c[i]);

           printf("\n");
           
          
      }
      //getch();
}
