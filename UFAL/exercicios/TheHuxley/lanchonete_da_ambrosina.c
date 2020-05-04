/* Descri��o
Ambrosina � de lua. Quase todo dia ela quer mudar o card�pio de sua lanchonete. Ambr�sio, o programador do sistema, n�o ag�enta mais alterar 
o c�digo do programa todas as vezes que Ambrosina muda o humor. Ent�o Ambr�sio resolveu mudar o software de forma que Ambrosina possa cadastrar 
o card�pio todas as manh�s, ao iniciar o software.
O software l� a quantidade de produtos a serem cadastrados, e depois o c�digo de LED instalada na lanchonete seguidos pela descri��o e pre�o do
produto. Os clientes escolhem os produtos pelo c�digo.
Se o cliente pede um produto n�o cadastrado ou uma quantidade negativa o pedido � considerado inv�lido.
O sistema calcula quantos itens o cliente escolheu de cada c�digo e imprime o total da conta, sem descontos! Eita Ambrosina sovina !!

Formato de entrada
Consiste de um inteiro n, representando o n�mero de produtos a serem cadastrados.
Depois, segue o cadastro dos n produtos, onde ser�o lidos para cada produto:
um inteiro representando o c�digo de LED,
uma descri��o do produto
e um n�mero real representando o pre�o.
Depois, s�o lidos os pedidos.
O pedido consiste do c�digo do produto e da quantidade de itens daquele produto que ser� pedido. O pedido se encerra quando o c�digo lido � 
igual a 0.

Formato de sa�da
O valor que o cliente deve pagar, formatado com duas casas decimais. Pedidos inv�lidos s�o ignorados.*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct{
        int id;
        char descricao[200];
        double preco;
}Dados;

void imprimir (Dados *dados, int quant){
     int i;
     
     for( i = 0; i < quant; i++){
            printf("id %d\n", dados[i].id);
             printf("descricao %s\n", dados[i].descricao);
              printf("preco %.2f\n", dados[i].preco);
            }
     
     
}

main(){
       int quant, i, id_produto, quant_pedida;
       double pagamento = 0.00;
       
       scanf("%d", &quant);
       
       Dados dados[quant];
       
       for ( i = 0; i < quant; i++){
           scanf("%d", &dados[i].id);
           getchar();
           gets(dados[i].descricao);
           scanf("%lf", &dados[i].preco);
       }
       
       for ( ; ; ){
              scanf("%d", &id_produto);
              
              if (id_produto == 0){
                    printf("%.2lf\n", pagamento);
                    
                    imprimir(dados, quant);
                    break;
              }
                  
              scanf("%d", &quant_pedida);  
              
              for ( i = 0; i < quant; i++){
                  if (id_produto == dados[i].id && quant_pedida > 0){
                         pagamento += quant_pedida * dados[i].preco;
                         break;
                  }
              }
       }           
       
       getch();
}
