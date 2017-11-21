/* 
 * File:   fp06ex07.c
 * Author: samue
 * FICHA 6
 * Created on 21 de Novembro de 2017, 20:38
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

#define MAX_CARACTERES 25

/*
 * 
 */
int main(int argc, char** argv) {
    char frase_palavra[MAX_CARACTERES];
    int i, contador = 0;
    
    
    for (i = 0; i < MAX_CARACTERES; ++i) {  // por o array todo em "branco" 
        frase_palavra[i] = ' ';
    }
    
    puts("Insira o seu texto: ");
    lerString(frase_palavra, MAX_CARACTERES);
    
    for (i = 0; i < MAX_CARACTERES; ++i) {
        if (frase_palavra[i] == ' '){
            continue;
        }
        else {
            ++contador;
        }
    }
    
    printf("Numero de caracteres sem contar os espacos: %d\n", contador - 2);
    
    return (EXIT_SUCCESS);
}
