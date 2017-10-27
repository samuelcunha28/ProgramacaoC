/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex9.c
 * Author: samue
 *
 * Created on 27 de Outubro de 2017, 14:25
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int tab, i;

    puts("Qual a tabuada que pretende fazer? ");
    scanf("%d", &tab);

    i = 1;
    while (i <= 10) {
        printf("%d x %d = %d\n ", tab, i, tab * i);
        i = i + 1;
    }
    return (EXIT_SUCCESS);
}

