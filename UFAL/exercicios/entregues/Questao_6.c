/*6. Fa�a um algoritmo que leia um n�mero e mostre uma mensagem indicando se este n�mero � par ou �mpar e se � positivo ou negativo.*/

main(){
       int num1;
       
       printf("\n\t VERIFICA SE UM NUMERO EH PAR OU IMPAR POSITIVO OU NEGATIVO \n\n");           
       printf(" informe o numero  \n");
       scanf("%d", &num1);       
   
       
       if(num1%2 == 0)
               printf("\n o numero %d eh par", num1);  
       
       else
               printf("\n o numero %d eh impar", num1); 
                          
       
       if(num1 > 0)
               printf("\n o numero %d eh positivo", num1);  
       
       else
               printf("\n o numero %d eh negativo", num1);       
      
       
       getch(); 
       
}
