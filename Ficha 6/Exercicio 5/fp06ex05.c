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

/* EXERCICIO 5 FICHA 6 */
int main(int argc, char** argv) {
    
    char frase_palavra[MAX_CARACTERES];
    int caracteres;
    
    puts("Insira o seu texto ou frase para ver o numero de caracteres: ");
    lerString(frase_palavra, MAX_CARACTERES);
    
    caracteres = strlen(frase_palavra);
    
    printf("Numero de caracteres: %d ", caracteres);
    
    return (EXIT_SUCCESS);
}

