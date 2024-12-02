#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define TAM 3
#define ALE 20

int vetor[TAM], soma = 0;
float produto = 1, media_ari, media_geo;

int main () {
    srand(time(NULL));

    for(int i = 0; i < TAM; i++){
        vetor[i] = rand() % ALE;
    }
    for (int i = 0; i < TAM; i++){
        soma += vetor[i];
    }
    media_ari = soma / 3.0;
    for (int i = 0; i < TAM; i++){
        produto *= vetor[i];
    }
    media_geo = pow(produto, 1.0 / 3.0);

    printf("Números gerados:\n");
    for (int i = 0; i < TAM; i++){
        printf("%dº: %d\n",i+1,vetor[i]);
    }
    printf("Media aritmetica: %.2f\n",media_ari);
    printf("Média geometrica: %.2f\n",media_geo);
    
}
