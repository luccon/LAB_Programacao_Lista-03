#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QL 5
#define QC 5
#define MAX 100

int numero, auxwhile = 1, aux = 0,  auxquant = 0, opcao = 0;
float matriz[QL][QC],auxsoma = 0, auxmedia = 0;

void RepeticaoNumeros () {
    while (auxwhile != -1){
    aux = 0;
    printf("Qual número deseja saber quantas vezes se repete?\nDigite -1 para encerrar.\n");
    scanf("%d",&numero);

    if (numero == -1){
        auxwhile = -1;
    }

for (int i = 0; i < QC; i++){
    for (int k = 0; k < QL; k++){
        if (matriz[i][k] == numero){
            aux += 1;
        }
    }
}
printf("O numero %d se repete %d vezes na matriz.\n",numero,aux);
}
}
void SomaDiagonal() {
    auxsoma = 0.0;
    for (int i = 0; i < QL; i++){
        auxsoma += matriz[i][i];
    }
    printf("Soma da diagonal da matriz: %.2lf\n",auxsoma);
}

void MediaMatriz (){
    auxwhile = 1;
    auxsoma = 0;
    for (int i = 0; i < QL; i++){
        for (int k = 0; k < QL; k++){
            auxsoma += matriz[i][k];
            auxquant++;
        }
    }
    auxmedia = auxsoma / auxquant;
    printf("A média da matriz é: %.2f\n",auxmedia);
}

int main () {
srand(time(NULL));

for (int i = 0; i < QC; i++){
    for (int k = 0; k < QL; k++){
        matriz[i][k] = rand()%MAX;
    }
}
for (int i = 0; i < QC; i++){
    if (i == 0){
        for (int j = 0; j < QL; j++){
            printf("   [%d]",j+1);
        }
        printf("\n");
    }
    for (int k = 0; k < QL; k++){
        if(k == 0){
            printf("[%d] ",i+1);
        }
        printf("%.2lf ",matriz[i][k]);
        if(matriz[i][k] < 10){
            printf(" ");
        }
        
    }
    printf("\n");
}
    while (auxwhile != 0){
        auxwhile = 1;
        printf("Qual funcionalidade deseja?\n[1]Repetição de números.\n[2]Soma da diagonal\n[3]Média da matriz.\n[0]Sair.\n");
        scanf("%d",&opcao);

        switch (opcao)
        {
        case 1:
            RepeticaoNumeros();
            break;
        case 2:
            SomaDiagonal();
            break;
        case 3:
            MediaMatriz();
            break;
        case 0:
            auxwhile = 0;
            break;
        default:
            printf("Opção inválida.\n");
            break;
        }
    }
}