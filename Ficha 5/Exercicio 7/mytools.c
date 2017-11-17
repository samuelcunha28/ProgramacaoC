#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_ARRAY 10

// Preenchimento do array A pelo utilizador

void vetorA(int arrayA[]) {
    int i;

    for (i = 0; i < TAMANHO_ARRAY; ++i) {
        puts("Array A: insira um numero ");
        scanf("%d", &arrayA[i]);
    }
}

// Preenchimento do array B pelo utilizador

void vetorB(int arrayB[]) {
    int i;

    for (i = 0; i < TAMANHO_ARRAY; ++i) {
        puts("Array B: insira um numero ");
        scanf("%d", &arrayB[i]);
    }
}

// União dos vetores A e B

void vetorC(int arrayA[], int arrayB[], int arrayC[]) {
    int i, j;

    for (i = 0; i < TAMANHO_ARRAY; ++i) {
        arrayC[i] = arrayA[i];
        printf("Posicao %d: %2d\n", i, arrayC[i]);
    }
    puts("-------------- ");
    for (j = 0; j < TAMANHO_ARRAY; ++j) {
        arrayC[j] = arrayB[j];
        printf("Posicao %d: %2d\n", j, arrayC[j]);
    }
}

// Elementos do vetor A que não estão no vetor B

void vetorD(int arrayA[], int arrayB[], int arrayD[]) {
    int i, j, contador = 0;

    for (i = 0; i < TAMANHO_ARRAY; ++i) {
        contador = 0;
        for (j = 0; j < TAMANHO_ARRAY; ++j) {
            if (arrayA[i] == arrayB[j]) { // nao pode ser igual ao de B
                break;
            } else {
                contador += 1;
            }
        }
        if (contador == TAMANHO_ARRAY) {
            arrayD[i] = arrayA[i];
            printf("Array D: %d\n ", arrayD[i]);
        }
    }
}

// Elementos comuns dos vetores A e B 

void vetorE(int arrayA[], int arrayB[], int arrayE[]) {
    int i, j, comum = 0;

    for (i = 0; i < TAMANHO_ARRAY; ++i) {
        for (j = 0; j < TAMANHO_ARRAY; ++j) {
            if (arrayA[i] == arrayB[j]) {

                arrayE[comum] = arrayA[i];
                ++comum;
                break;
            }
        }
    }
    for (i = 0; i < comum; ++i) {
        printf("%d\n ", arrayE[i]);
    }
}