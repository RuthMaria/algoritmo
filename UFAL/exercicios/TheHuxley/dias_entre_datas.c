/*
Descrição
Escreva um programa que calcule o número de dias entre duas datas dadas.

Formato de entrada
Consiste de duas datas formatadas representando a data inicial e a final.

Formato de saída
Uma linha contendo o número de dias entre as duas datas.
*/

int valida_data(int dia, int mes, int ano){
      int dias = 0, i;
      
      if ((dia >= 1 && dia <= 31) && (mes >= 1 && mes <= 12) && ano >= 0){
              if ((ano % 4 == 0) && (ano % 100 != 0) || (ano % 400 == 0)){                      
                         for(i = 1; i <= mes; i++){
                              if(i == 4 || i == 6 || i == 9 || i == 11){
                                       if(i != mes)
                                            dias += 30;
                                       else
                                            dias += dia;
                              }
                                       
                              if(i == 1 || i == 3 || i == 5 || i == 7 || i ==8 || i == 10 || i == 12){
                                      if(i != mes)
                                            dias += 31;
                                       else
                                            dias += dia;
                              }
                                       
                              if(i == 2){
                                    if(i != mes)
                                           dias += 29;
                                    else
                                           dias += dia;
                             }                          
                          }
                       return dias; 
              }
               else{
                    for(i = 1; i <= mes; i++){
                          if(i == 4 || i == 6 || i == 9 || i == 11){
                               if(i != mes)
                                     dias += 30;
                               else
                                     dias += dia;
                          }
                                       
                          if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
                                    if(i != mes)
                                         dias += 31;
                                    else
                                         dias += dia;
                          }
                                       
                          if(i == 2){
                                 if(i != mes)
                                         dias += 28;
                                 else
                                         dias += dia;
                          }
                    }
                    
                    return dias;    
               }
      }                       
}

 int valida_ano(int ano1, int ano2){
      int i, dias = 0;
      
      for(i = ano1; i < ano2; i++){
           if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
                  dias += 366;
           else
                  dias += 365;
      }
       return dias;                                       
 }
 
#include<stdio.h>

main(){
       int dia1, mes1, ano1, dia2, mes2, ano2, quant1, quant2, quant3, dias;

       scanf("%d/%d/%d", &dia1, &mes1, &ano1);
       scanf("%d/%d/%d", &dia2, &mes2, &ano2);

       quant1 = valida_data(dia1, mes1, ano1);
       quant2 = valida_data(dia2, mes2, ano2);
       quant3 = valida_ano(ano1, ano2);
       dias = quant3-quant1+quant2;
       printf("%d\n", dias);
       
}
