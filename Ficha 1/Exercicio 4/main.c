/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: samuel
 *
 * Created on 13 de Outubro de 2017, 17:24
 */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.1416

/*
 * 
 */
int main(int argc, char** argv) {
  
    float raio, area, perimetro;
    puts("Qual e o raio da circunferencia? ");
    scanf("%f", &raio);
    
    area = PI * raio * raio; // (sabendo que a area e pi x raio ao quadrado) 
    perimetro = 2 * PI * raio; // (sabendo que o perimetro e 2 x pi x raio) 
    
    printf("A area da circunferencia e de: %0.2f\n", area);
    printf("O perimetro da circunferencia e de: %0.2f\n", perimetro);

    return (EXIT_SUCCESS);
}

