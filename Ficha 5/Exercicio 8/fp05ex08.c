/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: samue
 *
 * Created on 15 de Novembro de 2017, 19:15
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

int main(int argc, char** argv) {
    int i = 0, array[MAX];
    
     for (i = 0; i < MAX; ++i) {
        array[i] = i;
    }
    //multiplos de 2
    for (i = 4; i < MAX; i = i + 2) {
        array[i] = 0;
    }
    //multiplos de 3
    for (i = 6; i < MAX; i = i + 3) {
        array[i] = 0;
    }
    //multiplos de 5
    for (i = 10; i < 1000; i = i + 5) {
        array[i] = 0;
    }
    //multiplos de 7
    for (i = 14; i < 1000; i = i + 7) {
        array[i] = 0;
    }
    // imprimir array
    for (i = 2; i < MAX; ++i) {
        printf("%d\n ", array[i]);
    }
    
return (EXIT_SUCCESS);
}