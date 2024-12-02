#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VTR 100

char string1[VTR], string2[VTR];
int resultado = 0;

int main () {
    printf("Digite a primeira string.\n");
    fgets(string1, sizeof(string1), stdin);
    printf("Digite a segunda string.\n");
    fgets(string2, sizeof(string2), stdin);

    if (strlen(string1) != strlen(string2)){
        printf("As duas strings são diferentes.\n");
    } else {
    for (int i = 0; i < strlen(string1); i++){
        if(string1[i] != string2[i]){
            printf("As duas strings são diferentes.\n");
            resultado = 1;
            break;
        }
    }
    if (resultado == 0){
    printf("As duas strings são iguais.\n");
    }
    }
}