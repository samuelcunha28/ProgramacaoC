/* 
 * File:   fp06ex08.c
 * Author: samue
 * FICHA 6
 * Created on 23 de Novembro de 2017, 10:25
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

#define MAX_CARACTERES 50

/* Exercicio 8 Ficha 6 */
int main(int argc, char** argv) {
    char frase_palavra1[MAX_CARACTERES];
    int i = 0, pos, posfinal;

    puts("Insira o seu nome: ");
    lerString(frase_palavra1, MAX_CARACTERES);

    pos = lastIndex(' ', frase_palavra1, MAX_CARACTERES);
    posfinal = strlen(frase_palavra1);

    puts("O seu Nome em formato (apelido, nome sem apelido) ");
    for (i = pos; i < (posfinal); ++i) {
        printf("%c", frase_palavra1[i]);
    }
    printf(" ");
    for (i = 0; i < pos; ++i) {
        printf("%c", frase_palavra1[i]);
    }

    return (EXIT_SUCCESS);
}

