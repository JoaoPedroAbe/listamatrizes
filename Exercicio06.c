#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz1[4][4],matriz2[4][4],matriz3[4][4];
    int line,colune;

    for(line=0;line<4;line++){
        for(colune=0;colune<4;colune++){
            printf("MATRIZ 1 , LINHA[%d] COLUNA[%d]= ",line,colune);
            scanf("%d",&matriz1[line][colune]);
        }
    }
    for(line=0;line<4;line++){
        for(colune=0;colune<4;colune++){
        printf("%d ",matriz1[line][colune]);
        }
        printf("\n");
    }

    printf("\n");

    for(line=0;line<4;line++){
        for(colune=0;colune<4;colune++){
            printf("MATRIZ 2 , LINHA[%d] COLUNA[%d]= ",line,colune);
            scanf("%d",&matriz2[line][colune]);
        }
    }
    for(line=0;line<4;line++){
        for(colune=0;colune<4;colune++){
            printf("%d ",matriz2[line][colune]);
        }
        printf("\n");
    }


    for(line=0;line<4;line++){
        for(colune=0;colune<4;colune++){
            if(matriz1[line][colune]>matriz2[line][colune]){
                    matriz3[line][colune]=matriz1[line][colune];
            }
            else{
                matriz3[line][colune]=matriz2[line][colune];
            }
        printf("\n");
        printf("O maior valor da posicao [%d][%d] = %d \n",line,colune,matriz3[line][colune]);
        }
    }

    for(line=0;line<4;line++){
        for(colune=0;colune<4;colune++){
            printf("%d ",matriz3[line][colune]);
        }
        printf("\n");
    }
    return 0;
}