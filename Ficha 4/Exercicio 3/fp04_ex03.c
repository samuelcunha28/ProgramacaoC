/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fp04_ex03.c
 * Author: samue
 *
 * Created on 5 de Novembro de 2017, 16:56
 */

#include <stdio.h>
#include <stdlib.h>
#include "mytools.h"


int main(int argc, char** argv) {
    double valor, print;
    char moeda;
    
    valor=lerDouble();
    moeda=lerChar();
    print = conversao(valor, moeda);
    
    printf("O valor da conversao e de: %.1lf ", print);
    
    return (EXIT_SUCCESS);
}