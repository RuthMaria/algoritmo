#include<stdio.h>

main(){
    float a, b, c;

    scanf("%f%f%f",&a, &b, &c);

    if(a == b && b == c)
             printf("equilatero\n");

    if(a != b && b != c && c != a)
             printf("escaleno\n");

    if(a == b && b != c || b == c && a != b || a == c && a != b)
             printf("isosceles\n");
}
