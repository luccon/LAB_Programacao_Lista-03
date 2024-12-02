#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VTR 100

char string[VTR], caracter;
int qnt_repetido;

int main () {
    printf("Digite a string.\n");
    fgets(string, sizeof(string), stdin);
    printf("Digite o caracter para checagem.\n");
    scanf("%c",&caracter);

    for(int i = 0; i < strlen(string); i++){
        if (string[i] == caracter){
            qnt_repetido++;
        }
    }
    printf("O caracter %c se repete %d vezes na string.\n",caracter, qnt_repetido);
}