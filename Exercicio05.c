#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[5][5];
    int numberX,line,colune,numberE;
    int PositionLine, PositionColune;

    for(line=0;line<5;line++) {
            printf("Digite 5 valores para a linha %d: ",line);
        for(colune=0;colune<5;colune++) {
            scanf("%d%*c",&matriz[line][colune]);
        }
        printf("\n");
    }

    for(line=0;line<5;line++) {
        for(colune=0;colune<5;colune++) {

            printf(" %d\t", matriz[line][colune]);
        }
        printf("\n");
    }
    printf("\n\tDigite um valor para procurar na matriz digitada: ");
    scanf("%d%*c",&numberX);

    for(line= 0;line< 5;line++) {
        for(colune=0;colune<5;colune++) {

            if(matriz[line][colune] == numberX) {
                PositionLine= line;
                PositionColune= colune; 
                numberE = 1;
            }   
        }
    }

    if(numberE == 1){
        printf("\n\tValor %d encontrado na posicao: linha %d e coluna %d",numberX,PositionLine,PositionColune);
    } else {
        printf("\n\tValor nao encontrado.");
    }

        return 0;
}