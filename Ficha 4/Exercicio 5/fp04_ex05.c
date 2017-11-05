/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fp04_ex05.c
 * Author: samue
 *
 * Created on 5 de Novembro de 2017, 15:31
 */

#include <stdio.h>
#include <stdlib.h>
#include "mytool.h"

/*
 * 
 */

int main(int argc, char** argv) {
    int n;
    
    printf("Insira um valor para o qual deseja calcular seu fatorial: ");
    scanf("%d", &n);

    fatorial(n);
    
    return (EXIT_SUCCESS);
}

