#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[4][4];
    int line,colune;
    
    printf("Preencha a matriz com a multipliacao da linha x coluna:\n");
    printf("Exemplo: Linha 0 Coluna 0, 0 x 0 =0\n\n\n");


    for(line=0;line<5;line++){
        for(colune=0;colune<5;colune++){
            printf("Valor da LINHA %d e COLUNA %d: ",line,colune);
            scanf("%d",&matriz[line][colune]);
            }
            printf("\n");
    }
    for(line=0;line<5;line++){
        for(colune=0;colune<5;colune++){
            printf(" %d | ",matriz[line][colune]);  
        }
        printf("\n");
    }
    return 0;
}