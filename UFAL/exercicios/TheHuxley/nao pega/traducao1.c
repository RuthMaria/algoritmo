#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
       double dec, num, f;
       
       do{
       scanf("%f", &num);
       f = pow(num, 187);
       printf("%d", f%319);
       }while(num != 1);
       
       getch();
}
