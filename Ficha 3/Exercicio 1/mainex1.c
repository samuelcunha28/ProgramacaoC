/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex1.c
 * Author: samue
 *
 * Created on 26 de Outubro de 2017, 14:08
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero =  1;
   
    while (numero >= 1 && numero <= 100) {
        printf("%d\n", numero);
        numero += 1;
    }

    return (EXIT_SUCCESS);
}

