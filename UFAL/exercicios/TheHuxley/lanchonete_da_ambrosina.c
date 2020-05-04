/* Descrição
Ambrosina é de lua. Quase todo dia ela quer mudar o cardápio de sua lanchonete. Ambrósio, o programador do sistema, não agüenta mais alterar 
o código do programa todas as vezes que Ambrosina muda o humor. Então Ambrósio resolveu mudar o software de forma que Ambrosina possa cadastrar 
o cardápio todas as manhãs, ao iniciar o software.
O software lê a quantidade de produtos a serem cadastrados, e depois o código de LED instalada na lanchonete seguidos pela descrição e preço do
produto. Os clientes escolhem os produtos pelo código.
Se o cliente pede um produto não cadastrado ou uma quantidade negativa o pedido é considerado inválido.
O sistema calcula quantos itens o cliente escolheu de cada código e imprime o total da conta, sem descontos! Eita Ambrosina sovina !!

Formato de entrada
Consiste de um inteiro n, representando o número de produtos a serem cadastrados.
Depois, segue o cadastro dos n produtos, onde serão lidos para cada produto:
um inteiro representando o código de LED,
uma descrição do produto
e um número real representando o preço.
Depois, são lidos os pedidos.
O pedido consiste do código do produto e da quantidade de itens daquele produto que será pedido. O pedido se encerra quando o código lido é 
igual a 0.

Formato de saída
O valor que o cliente deve pagar, formatado com duas casas decimais. Pedidos inválidos são ignorados.*/

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
