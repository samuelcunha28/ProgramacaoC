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

/* EXERCICIO 6 FICHA 6 */
int main(int argc, char** argv) {
    
    char frase_palavra[MAX_CARACTERES];
    char caracter;
    
    puts("Insira o seu texto: ");
    lerString(frase_palavra, MAX_CARACTERES);
    
    puts("Qual o caracter que deseja pesquisar? ");
    scanf("%c", &caracter);
    clean_buffer();
 
    countChar(frase_palavra, caracter);
    
    return (EXIT_SUCCESS);
}


