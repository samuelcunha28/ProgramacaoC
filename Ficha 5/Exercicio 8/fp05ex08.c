/* 
 * File:   main.c
 * Author: samue
 *
 * Created on 15 de Novembro de 2017, 19:52
 */

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_ARRAY 1000

/* Ficha 5 Exercicio 2 */ 

int main(int argc, char** argv) {
    int array[TAMANHO_ARRAY], i = 0, num;

    puts("Insira um numero (que nao seja maior que 1000):");
    scanf("%d", &num);

    if (num >= 0 && num <= TAMANHO_ARRAY) {  // igualar os multiplos de 2, 3, 5, 7 a zero excluindo estes 
        for (i = 0; i < num; ++i) {
            array[i] = i;
        }

        for (i = 0; i < num; ++i) {
            array[i] = i;
        }
        //multiplos de 2
        for (i = 4; i < num; i = i + 2) {
            array[i] = 0;
        }
        //multiplos de 3
        for (i = 6; i < num; i = i + 3) {
            array[i] = 0;
        }
        //multiplos de 5
        for (i = 10; i < num; i = i + 5) {
            array[i] = 0;
        }
        //multiplos de 7
        for (i = 14; i < num; i = i + 7) {
            array[i] = 0;
        }
    } else {
        puts("Introduziu um numero maior que o limite indicado!!");
    }

    for (i = 2; i < num; ++i) {  // imprimir todos os diferentes de zero que sao os numeros primos
        if (array[i] != 0) {
            printf("%d\n ", array[i]);
        }
    }
    return (EXIT_SUCCESS);
}

