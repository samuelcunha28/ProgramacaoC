/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex15.c
 * Author: samue
 *
 * Created on 22 de Outubro de 2017, 18:18
 */

#include <stdio.h>
#include <stdlib.h>

#define distancia  130
/*
 * 
 */
int main(int argc, char** argv) {
    int tempopercurso, combustivel, velmedia;
    
    puts("Introduza o total de tempo que demorou a fazer o percurso: (em minutos)");
    scanf("%d", &tempopercurso);
    
    velmedia = (distancia * 60) / tempopercurso;
    printf ("Velocidade media: %.1d\n ", velmedia);
    
    if (velmedia <= 60) {
        combustivel = (5 / distancia) * 60;
        printf("Consumo medio: %.1d\n ", combustivel);
        
    }
    
    return (EXIT_SUCCESS);
}

