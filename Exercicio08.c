#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3][3];
    int line,colune,sum=0;

    for (line=0;line<3;line++) {
    printf("linha[%d] digite 3 valores:",line);
    for (colune=0;colune<3;colune++) {
            scanf("%d%*c", &matriz[line][colune]);
        }
    }

    for(line=0;line<3;line++){
        for(colune=0;colune<3;colune++){
            printf(" %d ",matriz[line][colune]);
            if(colune>line){
                sum=sum+matriz[line][colune];
            }
        }
        printf("\n");
    }
    printf("\nA soma dos elementos acima da diagonal principal sera: %d",sum);

    return 0;
}