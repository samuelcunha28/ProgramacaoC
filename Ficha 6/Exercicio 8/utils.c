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
        } else {
            clean_buffer();
        }
        return 1;
    }
    return 0;
}

int lastIndex(char caracter, char frase_palavra[], int fim_frase_palavra[]) {
    int i, arraypos = -1;

    for (i = 0; i < fim_frase_palavra; ++i) {
        if (frase_palavra[i] == caracter) {
            arraypos = i;
        }
    }
    return arraypos;
}