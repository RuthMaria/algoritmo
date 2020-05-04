#include <stdio.h>

int checar(int altura, int largura, int qtd, int tabua_altura, int *tabuas){
    int i, j, soma_altura = 0, tabuas_usadas = 0;
    int copia[qtd];
    for(i = 0; i < qtd; i++){
        copia[i] = tabuas[i];
    }
    
     for (i = qtd - 1; i >= 0; i--){
            if (soma_altura == altura){
                return tabuas_usadas;
            }else if (soma_altura > altura){
                return 999999;
            }
            if (copia[i] == largura){
                soma_altura += tabua_altura;
                copia[i] = 0;
                tabuas_usadas++;
            }
            if (soma_altura == altura){
                return tabuas_usadas;
            }
            for (j = 0; j < i; j++){
                if (copia[j] == largura){
                    soma_altura += tabua_altura;
                    copia[j] = 0;
                    tabuas_usadas++;
                    break;
                }else if (copia[i] + copia[j] == largura){
                    soma_altura += tabua_altura;
                    copia[i] = copia[j] = 0;
                    tabuas_usadas += 2;
                    break;
                }
            }
        }
        if (soma_altura == altura){
            return tabuas_usadas;
        }
        return 999999;
}
main(){
    int salao_altura, salao_largura, tabua_altura, qtd_tabuas, i, j, aux, tabuas_usadas1, tabuas_usadas2;

    scanf("%d %d", &salao_altura, &salao_largura);
    salao_altura *= 100; salao_largura *= 100;

    while((salao_altura != 0) || (salao_largura != 0)){
        scanf("%d %d", &tabua_altura, &qtd_tabuas);
        int tabuas[qtd_tabuas];

        for (i = 0; i < qtd_tabuas; i++){
            scanf("%d", &tabuas[i]);//lendo as tabuas
            tabuas[i] *= 100;
        }

        //ORDENANDO AS TABUAS EM ORDEM CRESCENTE
        for (i = 0; i < qtd_tabuas-1; i++){
            for (j = i+1; j < qtd_tabuas; j++){
                if (tabuas[i] > tabuas[j]){
                    aux = tabuas[i];
                    tabuas[i] = tabuas[j];
                    tabuas[j] = aux;
                }
            }
        }

        tabuas_usadas1 = checar(salao_altura,salao_largura,qtd_tabuas,tabua_altura,tabuas);
        
        tabuas_usadas2 = checar(salao_largura,salao_altura,qtd_tabuas,tabua_altura,tabuas);
  
        if ((tabuas_usadas1 == 999999) && (tabuas_usadas2 == 999999)){
            printf("impossivel\n");
        }else if (tabuas_usadas1 <= tabuas_usadas2){
            printf("%d\n", tabuas_usadas1);
        }else if (tabuas_usadas2 < tabuas_usadas1){
            printf("%d\n", tabuas_usadas2);
        }

        scanf("%d %d", &salao_altura, &salao_largura);
        salao_altura *= 100; salao_largura *= 100;
    }
}
