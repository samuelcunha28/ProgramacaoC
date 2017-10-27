/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex10.c
 * Author: samue
 *
 * Created on 27 de Outubro de 2017, 14:35
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int tab, i;
    
    
    i = 1;
    while (i <= 10) {
        tab = 1;
        while (tab <= 10) {
            printf("%d * %d = %d\n ", i, tab, tab * i);
            tab = tab + 1;
        }
        i = i + 1;
    }

    return (EXIT_SUCCESS);
}

