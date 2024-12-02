#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 30
#define COL 30
#define MAX 100

int matriz[LIN][COL], num = 0, qnt_rep = 0;

int main () {
srand(time(NULL));

for (int i = 0; i < COL; i++){
    for (int k = 0; k < LIN; k++){
        matriz[i][k] = rand()%MAX;
    }
}
for (int i = 0; i < COL; i++){
    for (int k = 0; k < LIN; k++){
        printf("%d ",matriz[i][k]);
        if(matriz[i][k] < 10){
            printf(" ");
        }
    }
    printf("\n");
}
    printf("Escolha o número que deseja checar repetições:\n");
    scanf("%d",&num);
    
    for (int i = 0; i < COL; i++){
        for (int k = 0; k < LIN; k++){
            if (matriz[i][k] == num){
                qnt_rep++;
            }
        }
    }
    printf("O número %d se repete %d vezes na matriz.\n",num,qnt_rep);


    }