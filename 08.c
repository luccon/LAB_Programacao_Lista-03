#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define TAM 10

int vetor[TAM];
int range = 0, range_min = 0, range_max = 0;

int main () {
    srand(time(NULL));

    printf("Escolha o range minimo:\n");
    scanf("%d",&range_min);
    printf("Escolha o range maximo:\n");
    scanf("%d",&range_max);

    range = range_max - range_min;

    for(int i = 0; i < TAM; i++){
        vetor[i] = (rand() % range) + range_min;
    }

    for (int i = 0; i < TAM; i++){
        printf("%dº = %d\n",i+1,vetor[i]);
    }
    
}