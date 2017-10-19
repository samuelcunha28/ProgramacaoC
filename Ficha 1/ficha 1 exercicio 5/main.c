/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: samuel
 *
 * Created on 13 de Outubro de 2017, 18:02
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float c_base, c_altura, area;
    puts("Qual o comprimento da base do triangulo?");
    scanf("%f", &c_base);
    puts("Qual o comprimento da altura do triangulo?");
    scanf("%f", &c_altura);
    
        area = ((c_base * c_altura) / 2);
    
        printf("A area do triangulo e de: %0.2f\n", area);
    return (EXIT_SUCCESS);
}

