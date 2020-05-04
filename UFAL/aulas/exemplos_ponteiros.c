#include <stdio.h>
#include <stdlib.h>

main()
{
    int x = 7 ;
    int *px ;

    px = &x ;
    *px = 8 ;

    printf( "%d\n" , x ) ;
    printf( "%d\n" , &x ) ;
    printf( "%d\n" , px ) ;
    printf( "%d\n" , *px ) ;
}

void exemplo2()
{

    int firstvalue, secondvalue;
    int * mypointer;

    mypointer = &firstvalue;
    *mypointer = 10;
    mypointer = &secondvalue;
    *mypointer = 20;
    printf("%d\n",firstvalue);
    printf("%d\n",secondvalue);
}


int exemplo3()
{
    int firstvalue = 5, secondvalue = 15;
    int * p1, * p2;

    p1 = &firstvalue;
    p2 = &secondvalue;
    *p1 = 10;
    *p2 = *p1;
    p1 = p2;
    *p1 = 20;

    printf("%d\n",firstvalue);
    printf("%d\n",secondvalue);
    return 0;

}
