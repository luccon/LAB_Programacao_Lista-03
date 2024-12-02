#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VTR 100

char string1[VTR], string2[VTR];
int len1;

int main () {
    printf("Digite a primeira string.\n");
    fgets(string1, sizeof(string1), stdin);
    printf("Digite a segunda string.\n");
    fgets(string2, sizeof(string2), stdin);
    len1 = strlen(string1);

    for(int i = 0; i < strlen(string2); i++){
        string1[len1+(i-1)] = string2[i];
    }
    printf("A concatenação das strings é: %s\n",string1);
}
