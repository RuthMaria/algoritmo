/*5. Escrever um algoritmo para ler dois valores numéricos e apresentar a diferença do maior pelo menor. */

main(){
       int num1, num2, maior, menor;
       
       printf("\n\t\t CALCULO DA DIFERENCA DO MAIOR NUMERO PELO MENOR \n\n");           
       printf(" informe os 2 numeros  \n");
       scanf("%d%d", &num1, &num2);
       
       maior = num1;
       menor = num1;
       
       if(num2 > maior)
               maior = num2;
       
       if(num2 < menor)
               menor = num2;
               
       printf("\n A diferenca eh %d", maior-menor);         
      
       
       getch(); 
       
}
