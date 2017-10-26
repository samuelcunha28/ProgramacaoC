/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex2.c
 * Author: samue
 *
 * Created on 26 de Outubro de 2017, 14:15
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero = 2;
    
    while (numero >= 1 && numero <= 300) {
        printf("%d\n", numero);
        numero += 2;
    }
    return (EXIT_SUCCESS);
}

