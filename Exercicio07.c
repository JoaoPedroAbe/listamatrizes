#include <stdio.h>
#include <stdlib.h>


int main()
{
    int matriz[10][10];
    int line,colune;

    for(line=0;line<10;line++){
        for(colune=0;colune<10;colune++){
            if(line<colune){
                matriz[line][colune]= (2*line)+(7*colune)-2;
            }
            if(line==colune){
                matriz[line][colune] = ((3*line)*(3*line))-1;
            }
            if(line>colune){
                matriz[line][colune] = ((4*line)*(4*line)*(4*line)) - ((5*colune)*(5*colune));
            }
        }
    }

    printf("\t\t\t\t\tMATRIZ\n\n");
    for(line=0;line<10;line++){
        for(colune=0;colune<10;colune++){
            printf("%d",matriz[line][colune]);
        }
        printf("\n\n");
    }

        return 0;
}