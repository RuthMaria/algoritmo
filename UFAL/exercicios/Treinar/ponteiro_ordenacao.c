#include<stdio.h>
#include<conio.h>


void ordenacao (int *x, int *y, int *z){
     
        int maior, menor, meio;
        
        
        maior = *x;
        menor = *x;
        
        
        if ( *y > maior )
               maior = *y;
        
        if ( *z > maior )
               maior = *z;
               
        
        
        if ( *y < menor )
               menor = *y;
        
        if ( *z < menor )
               menor = *z;
               
        
        
        if ( *x > menor && *x < maior )
                meio = *x;
        
        if ( *y > menor && *y < maior )
                meio = *y;
        
        if ( *z > menor && *z < maior )
                meio = *z;
                
        
        *x = menor;        
        *y = meio;
        *z = maior;      
}

main(){
       int x, y, z;
       
       scanf ("%d %d %d", &x, &y, &z);
       
       ordenacao (&x, &y, &z);
       
       printf ("%d %d %d", x, y, z);
       
       getch();
}
