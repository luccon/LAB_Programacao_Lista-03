#include <stdio.h>
#include <stdlib.h>

#define VTR 4

float vetor[VTR], num, menor, maior, soma;

int main () {

printf("Entre com 15 números em formato float.\n");
    for(int i = 0; i < VTR; i++){
        printf("%dº número:\n",i+1);
        scanf("%f",&num);

        vetor[i] = num;

        if (i == 0){
            menor = vetor[0];
            maior = vetor[0];
        }
        if (num < menor){
            menor = vetor[i];
        } else if (num > maior) {
            maior = vetor[i];
        }
    }
    soma = menor + maior;
    printf("A soma do maior e menor número da sequencia é: %.2f",soma);
}