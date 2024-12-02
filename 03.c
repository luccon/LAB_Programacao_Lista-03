#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VTR 100

char string[VTR];
int qnt_character;

int main () {
    printf("Digite a string.\n");
    fgets(string, sizeof(string), stdin);

    while (string[qnt_character] != '\0'){
        qnt_character++;
    }
    if (string[qnt_character-1] == '\n'){
        qnt_character--;
    }
    printf("A string fornecida tem %d caracteres.\n",qnt_character);
    }