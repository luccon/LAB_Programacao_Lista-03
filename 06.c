#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VTR 100

char string[VTR];
int qnt_character;

int main () {
    printf("Digite a string.\n");
    fgets(string, sizeof(string), stdin);

    qnt_character = strlen(string);
    qnt_character--;

    for (int i = 0; i < qnt_character/2; i++){                
                string[i] = string[i] ^ string[qnt_character-1-i];
                string[qnt_character-1-i] = string[i] ^ string[qnt_character-1-i];
                string[i] = string[i] ^ string[qnt_character-1-i];           
    }
    printf("Invertida: %s",string);
}