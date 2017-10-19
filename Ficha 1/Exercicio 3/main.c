/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: samue
 *
 * Created on 12 de Outubro de 2017, 22:09
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int comp, larg, area, perimetro;
    
    puts("Insira o comprimento do retangulo");
    scanf("%d", &comp);
    puts("Insira a largura do retangulo");
    scanf("%d", &larg);
    
    area = (comp * larg);
    perimetro = (comp + comp + larg + larg);
    
    printf("A area do retangulo e de: %d\n", area);
    printf("O perimetro do retangulo e de: %d\n", perimetro);
    
    
    return (EXIT_SUCCESS);
}

