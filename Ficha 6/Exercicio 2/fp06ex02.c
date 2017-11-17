/* 
 * File:   fp06ex02.c
 * Author: samuel
 * FICHA 6
 * Created on 17 de Novembro de 2017, 14:27
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

#define MAX_CARACTERES 25

/* EXERCICIO 2 FICHA 6 */

int main(int argc, char** argv) {

    char palavra_frase[MAX_CARACTERES];

    puts("Introduza o seu texto: ");

    lerString(palavra_frase, MAX_CARACTERES);

    printf("%s\n", palavra_frase);

    return (EXIT_SUCCESS);
}

