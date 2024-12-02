#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VTR 100

char string1[VTR], string2[VTR];

int main () {
    printf("Digite a primeira string.\n");
    fgets(string1, sizeof(string1), stdin);
    printf("Digite a segunda string.\n");
    fgets(string2, sizeof(string2), stdin);

    if (strcmp(string1, string2) == 0){
        printf("As duas strings são iguais.\n");
    } else {
        printf("As duas strings são diferentes\n");
    }
}