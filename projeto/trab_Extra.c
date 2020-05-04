/*Mayara Rysia nº 35  921-A */
#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<stdlib.h>
main()
{
       
       int n1 = 0, n2 = 0,op; //op = opção
       float result, foot;
       int quant_res_certa=0, quant_res_errada=0, c,e;//c =certo e = errado
       int N;//n_ = nível 1,2,3
       char resp_c[3][50]={"\t\tMuito bom!\n","Exelente!\n","Bom trabalho!\n"};
       char resp_e[3][50]={"Nao. Tente de novo.\n","Errado. Tente mais uma vez.\n","Nao desista.\n"}; 
       float cent;//GUARDARÁ A PORCENTAGEM
       char operacao;
       
       srand(time(NULL));
       
       do{  
       
         
          printf("\n\nDigite:\n\n 1 = NIVEL 1\n 2 = NIVEL 2\n 3 = NIVEL 3\n");
          scanf ("%d", &N);
       
          printf("Escolha a operacao que vc deseja estudar:\n");
          printf("\t'+'\n");
          printf("\t'-'\n");
          printf("\t'*'\n");
          printf("\t'/'\n");       
          fflush(stdin);
          scanf("%c", &operacao);
          
          op=1;
          
          do{
                      
              if(op==1){
       
                  switch(N){
                         
                          case 1: 
                                n1=rand()%9+1;
                                n2=rand()%9+1;                 
                                break;
                          case 2:
                                n1=rand()%90+10;
                                n2=rand()%90+10;
                                break;
                          case 3:
                                n1=rand()%900+100;
                                n2=rand()%900+100;
                                break;
                  }
                          
                  switch (operacao){
                          
                          case '+':
                              result=n1+n2;                    
                              break;
                          
                          case '-':
                              result=n1-n2;
                              break;
                          case '*':
                              result=n1*n2;
                              break;
                          
                          case '/':
                              result=n1/n2;
                              break;
                         
                  }
                
                }
                printf("\n\nQual o resultado de %d %c %d?\n\n ",n1,operacao,n2);
                scanf("%f", &foot);         
                                            
                if (foot==result){
                    quant_res_certa++;
                    
                    c=rand()%3;
                    printf("%s",resp_c[c]);
                        
                    printf("\n\tDeseja outro desafio?\n\n");
                    printf("\t\t\tDigite 1=sim ou 2=nao.\n");          
                    scanf("%d",&op);
                    
                    if(op!=1 && op!=2){
                        printf("Caractere invalido.");
                        break;
                    }
                }
                 
                if (foot!=result){
                   quant_res_errada++;
                             
                   e=rand()%3;
                   printf("%s",resp_e[e]);
               }
               
               
          }while((quant_res_certa+quant_res_errada)<10 && op!=2);
                     
          if((quant_res_certa+quant_res_errada)==10){
                   cent=quant_res_certa*10;
                   
                   if(cent<75&&op!=2){
                                      printf("\n\n\"PECA AJUDA A SEU PROFESSOR\"");
                                      getch();
                                      exit(0);
                   }
          }                                 
    
      
             
             
                                     
       }while(op!=2);
    
       printf("\tQuantidade de respostas corretas:%d\n", quant_res_certa); 
       printf("\tQuantidade de respostas erradas:%d\n",  quant_res_errada);
       printf("\n\nObrigada.\n\n");                 
       getch();
}       
