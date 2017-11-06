/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fp04_ex07.c
 * Author: samue
 *
 * Created on 5 de Novembro de 2017, 17:04
 */

#include <stdio.h>
#include <stdlib.h>
#include "mytools.h"


int main(int argc, char** argv) {
    int num, min = 1, max = 50;

    
    num = lerInteiro(min, max);
    Impressao(num);


    return (EXIT_SUCCESS);
}

