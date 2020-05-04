#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<stdlib.h>

main(){
	   int n[6], aposta[6], x, c, acertos[6], i;
	   for(i = 0; i<6; i++){
	   	  srand(time(NULL));
          x=rand()%90+10;
          n[i] = x;
       }
       
       for(i = 0; i<6; i++)
	         printf("\n %d", n[i]);
       
	   printf("\n Numeros da aposta \n ");
       for(c = 0; c<6; c++)
	  	  scanf("%d", &aposta[c]);
	  	  
       for(c = 0; c<6; c++){
             	  
          if(n[c] == aposta[c])
                  printf("\n Vc acertou o numero %d \n", n[c]);
              
          else
                  printf("\n Vc errou \n");
       }
	   getch();
}
			  			   
			 				
	   
