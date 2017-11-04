/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fp04_ex02_variaveis_locais.c
 * Author: samue
 *
 * Created on 4 de Novembro de 2017, 16:40
 */

#include <stdio.h>
#include <stdlib.h>
#include "mytool.h"

/*
 * 
 */

int main(int argc, char** argv) {
    int numero1, numero2, operacao;
    double resultado;


    puts("Introduza o seu primeiro numero: ");
    scanf("%d", &numero1);
    puts("Introduza o seu segundo numero: ");
    scanf("%d", &numero2);

    limparBufferEntrada();

    puts("Qual a operacao que deseje efetuar? (+, -, x, /) ");
    scanf("%c", &operacao);

    switch (operacao) {
        case '+': resultado = soma(numero1, numero2);
            break;
        case '-': resultado = subtracao(numero1, numero2);
            break;
        case '*': resultado = multiplicacao(numero1, numero2);
            break;
        case '/': resultado = divisao(numero1, numero2);
            break;
        default: puts("Operacao invalida!! ");
    }

    printf("O resultado da operacao: %.1lf\n ", resultado);
}
