/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#define TAMANHO_ARRAY 10


// procedimento para imprimir o conteudo do vetor

void imprimirVetor(double array[]) {
    int i;
    printf("O conteudo do vetor: ");
    for (i = 0; i < TAMANHO_ARRAY; ++i) {
        printf("%.2lf ", array[i]);
    }
}

void dobroVetor(double array[]) {
    int i;
    puts("O dobro do vetor: ");
    for (i = 0; i < TAMANHO_ARRAY; ++i) {
        printf("%.2lf ", 2 * array[i]);
    }
}

void somaVetor(double array[]) {
    int i, somatorio = 0;
    puts("A soma total do vetor: ");
    for (i = 0; i < TAMANHO_ARRAY; ++i) {
        somatorio += array[i];
    }
    printf("%d\n ", somatorio);
}

void mediaVetor(double array[]) {
    int i, somatorio = 0;
    puts("A media total dos numeros introduzidos no vetor: ");
    for (i = 0; i < TAMANHO_ARRAY; ++i) {
        somatorio += array[i];
    }
    printf("%.2lf\n ", (float)somatorio / TAMANHO_ARRAY);
}

void maiorVetor(double array[]) {
    int i, numero = 0;
    puts("O maior elemento introduzido no vetor: ");
    for (i = 0; i < TAMANHO_ARRAY; ++i) {
        if (array[i] > numero) {
            numero = array[i];
        }
    }
    printf("%d\n ", numero);
}

void menorVetor(double array[]) {
    int i, numero = array[0];
    puts("O menor elemento introduzido no vetor: ");
    for (i = 0; i < TAMANHO_ARRAY; ++i) {
        if (array[i] < numero) {
            numero = array[i];
        }
    }
    printf("%d\n ", numero);
}
