#include<stdio.h>

main(){
    int cod_produto, qt_comprada;
    float pagar;

    scanf("%d%d", &cod_produto, &qt_comprada);

    if(cod_produto == 1)
          pagar = qt_comprada*5.30;

    if(cod_produto == 2)
          pagar = qt_comprada*6;

    if(cod_produto == 3)
          pagar = qt_comprada*3.20;

    if(cod_produto == 4)
          pagar = qt_comprada*2.50;


    if(qt_comprada >= 15 || pagar >= 40)
          pagar -= (pagar*0.15);

    printf("R$ %.2f\n", pagar);


}

