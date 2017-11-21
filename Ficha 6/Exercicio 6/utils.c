#include <stdio.h>
#include <string.h>
#include "utils.h"

#define MAX_CARACTERES 25

void clean_buffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int lerString(char *string, int max) {
    if (fgets(string, max, stdin) != NULL) {
        int tamanho = strlen(string) - 1;
        if (string[tamanho] == '\n') {
            string[tamanho] = '\0';
        }
        else {
            clean_buffer();
        }
        return 1;
    }
    return 0;
}

int lerChar(char caracter) {
    puts("Qual o caracter que deseja pesquisar? ");
    scanf("%c", &caracter);
    clean_buffer();
    return caracter;
}

void countChar(char array[], char caracter) {
    int i, contador = 0;
    for (i = 0; i < MAX_CARACTERES; ++i) {
        if (array[i] == caracter) {
            contador += 1;
        }
    }
    printf("%d letras correspondem ao caracter %c na frase ou palavra introduzida\n ", contador, caracter);
}