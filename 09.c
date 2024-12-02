#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define LIN 3
#define COL 3

int matriz[LIN][COL];

int main () {
    srand(time(NULL));

    for(int i = 0; i < COL; i++){
        for(int k = 0; k < COL; k++){
            printf("Digite um valor para LIN %d e COL %d.\n",i+1,k+1);
            scanf("%d",&matriz[i][k]);
        }
    }
    printf("Elementos da diagonal:\n");
    for(int i = 0; i < LIN; i++){
        printf("%d\n",matriz[i][i]);
    }
}