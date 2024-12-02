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
    
    strcat(string1,string2);
    
    printf("Concatenação de String1 com String2 é: %s\n",string1);
    
    }