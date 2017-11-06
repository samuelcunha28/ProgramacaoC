/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#define SIMBOLO "*"

int lerInteiro(int min, int max) {
    int valor;
    while(1) {
        printf("Introduza o numero de asteriscos que pretende imprimir: ");
        scanf("%d", &valor);
        if ( valor >= min & valor <= max ) {
            break;
        }
        else {
            printf("O numero que introduziu nao esta entre o valor minimo e maximo! ");
        }
    }
    return valor;
}

void Impressao(int valor) {
    int i = 0;
    for (i; i < valor; ++i) {
        printf(SIMBOLO);
    }
}
