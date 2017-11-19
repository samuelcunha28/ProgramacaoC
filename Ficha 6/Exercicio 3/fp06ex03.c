/* 
 * File:   fp06ex03.c
 * Author: samue
 * FICHA 6
 * Created on 17 de Novembro de 2017, 14:47
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

#define MAX_CARACTERES 25

/* EXERCICIO 3 FICHA 6 */
int main(int argc, char** argv) {
    
    char frase_palavra1[MAX_CARACTERES];
    char frase_palavra2[MAX_CARACTERES];
    int ordenar;
    
    puts("Introduza o seu texto: ");
    lerString(frase_palavra1, MAX_CARACTERES);
    puts("Introduza o seu texto: ");
    lerString(frase_palavra2, MAX_CARACTERES);
    
    ordenar = strcmp(frase_palavra1, frase_palavra2);
    
    
    if (ordenar < 0) {
        printf("%s\n", frase_palavra1);
        printf("%s\n", frase_palavra2);
    }
    else {
        printf("%s\n", frase_palavra2);
        printf("%s\n", frase_palavra1);
    }
    
    return (EXIT_SUCCESS);
}
