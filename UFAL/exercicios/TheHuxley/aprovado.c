#include<stdio.h>


main(){
    float num1, num2, num3, media;
    
    scanf("%f%f%f", &num1, &num2, &num3);
    
    media = (num1+num2+num3)/3;
    
    if(media >= 7)
           printf("aprovado");
           
    if(media < 3)
           printf("reprovado");
           
    if(3 <= media && media < 7)
           printf("prova final");
}
