#include<stdio.h>
#include<conio.h>

main(){
	   int num, i = 0, j, resto[20];
	   
	   printf("Numero em decimal: ");
	   scanf("%d", &num);
	   	   
	   
	   while( num/2 != 0){
	     resto[i] = num%2;
	     num = num/2;
	     i++;	     
       }
       
       resto[i] = 1;
       
  	   for(j = i; j >= 0; j--)
		  printf("%d", resto[j]);
		  
	   getch();
}
		 
		 
	   
			 
	   
