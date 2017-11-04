/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mytool.c
 * Author: samue
 *
 * Created on 4 de Novembro de 2017, 16:17
 */

#include <stdio.h>
#include "mytool.h"

void limparBufferEntrada(){
    char ch;
    while((ch = getchar()) != '\n' && ch !=EOF);
}

