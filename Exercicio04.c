#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int line,colune,bigger=0;
    int coluneP=0,lineP=0;

    for(line=0;line<4;line++){
        for(colune=0;colune<4;colune++){
            printf("%d ",matriz[line][colune]);
        }
            printf("\n");
    }
    for(line=0;line<4;line++){
        for(colune=0;colune<4;colune++){
            if(matriz[line][colune]>bigger){
                bigger=matriz[line][colune];
                lineP=line+1;
                coluneP=colune+1;
            }
       }
    }
    printf("\nO maior valor da matriz e %d, e esta na linha %d e coluna %d",bigger,lineP,coluneP);


    return 0;
}