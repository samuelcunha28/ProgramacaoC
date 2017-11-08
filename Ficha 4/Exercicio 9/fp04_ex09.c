/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fp04_ex09.c
 * Author: samue
 *
 * Created on 5 de Novembro de 2017, 17:18
 */

#include <stdio.h>
#include <stdlib.h>
#include "mytool.h"
/*
 * 
 */
int main(int argc, char** argv) {
    int num;
    const  int inical = 0;  
    
    printf("Insira o valor ate ao qual seja imprimido: ");
    scanf("%d", &num);
    
    const int final = num;
    
    for (inical; final >= (num - final) ; ++num) {
        printf("Numero: %d\n", num - final);
    }
    
    return (EXIT_SUCCESS);
}