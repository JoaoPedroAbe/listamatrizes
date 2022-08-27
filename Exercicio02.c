#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[5][5];
    int line,colune;

    printf("\nSe o valor da LINHA for igual o valor da COLUNA, Digite 1\n");
    printf("Exemplo: Linha 0 Coluna 0, Digite=1\n\n\n");

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