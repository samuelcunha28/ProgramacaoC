/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex3.c
 * Author: samue
 *
 * Created on 20 de Outubro de 2017, 15:10
 */

#include <stdio.h>
#include <stdlib.h>

#define media1 0.25
#define media2 0.35
#define media3 0.40

/*
 * 
 */
int main(int argc, char** argv) {
    float nota1, nota2, nota3, media;

    puts("Indique a sua primeira nota. (Vale 25% da media final).");
    scanf("%f", &nota1);
    puts("Indique a sua segunda nota. (Vale 35% da media final).");
    scanf("%f", &nota2);
    puts("Indique a sua terceira nota. (Vale 40% da media final).");
    scanf("%f", &nota3);

    media = (nota1 * media1) + (nota2 * media2) + (nota3 * media3);

    printf("A media final das notas e de: %0.1f valores\n", media);

    if (media < 9.5) {
        puts("Voce esta reprovado! ");
    } else {
        puts("Parabens voce esta aprovado! ");
    }

    return (EXIT_SUCCESS);
}

