/* 
 * File:   fp06ex09.c
 * Author: samue
 * FICHA 6
 * Created on 21 de Novembro de 2017, 20:59
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

#define MAX_CARACTERES 25  

/* Exercicio 9 Ficha 6*/
int main(int argc, char** argv) {
    char frase_palavra1[MAX_CARACTERES];
    char frase_palavra2[MAX_CARACTERES];  
    char virgula[1] = ",";
   
    puts("Insira o seu primeiro texto: ");
    lerString(frase_palavra1, MAX_CARACTERES);
    puts("Insira o seu segundo texto: ");
    lerString(frase_palavra2, MAX_CARACTERES);
    
    strcat(frase_palavra1, virgula);
    
    printf("O seu texto: %s\n ", frase_palavra1);
    
    return (EXIT_SUCCESS);
}

