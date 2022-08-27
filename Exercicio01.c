#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int line,colune,cont=0;
    for(line=0;line<4;line++){
        for(colune=0;colune<4;colune++){
            printf("|%d|",matriz[line][colune]);
        }
            printf("\n");
    }
    for(line=0;line<4;line++){
        for(colune=0;colune<4;colune++){
            if(matriz[line][colune]>10){
            cont++;
            printf("\nO numero %d e maior que 10",matriz[line][colune]);
            }
        }
    }
    printf("\nA matriz possui |%d| valores maiores que 10.",cont);

    return 0;
}