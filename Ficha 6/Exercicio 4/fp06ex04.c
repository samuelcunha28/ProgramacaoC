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

/* EXERCICIO 4 FICHA 6 */
int main(int argc, char** argv) {
    
    char frase_palavra1[MAX_CARACTERES];
    char frase_palavra2[MAX_CARACTERES];
    
    puts("Introduza o seu texto para copiar: ");
    lerString(frase_palavra1, MAX_CARACTERES);
    
    strcpy(frase_palavra2, frase_palavra1);
    
    printf("Conteudo copiado: %s\n ", frase_palavra2);
    
    return (EXIT_SUCCESS);
}

