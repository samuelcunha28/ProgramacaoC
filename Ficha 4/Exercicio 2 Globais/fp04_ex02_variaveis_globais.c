/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fp04_ex02.c
 * Author: samue
 *
 * Created on 4 de Novembro de 2017, 15:56
 */

#include <stdio.h>
#include <stdlib.h>
#include "mytool.h"

/* Ficha 4 Exercicio 2 */
int num1, num2, operacao;
double resultado;

int main(int argc, char** argv) {
    
    puts("Introduza o seu primeiro numero: ");
    scanf("%d", &num1);
    puts("Introduza o seu segundo numero: ");
    scanf("%d", &num2);
    
    limparBufferEntrada();
    
    puts("Qual a operacao que deseje efetuar? (+, -, x, /) ");
    scanf("%c", &operacao);
    
    switch (operacao) {
        case '+': resultado = soma();
            break;
        case '-': resultado = subtracao();
            break;
        case '*': resultado = multiplicacao();
            break;
        case '/': resultado = divisao();
            break;
        default: puts("Operacao invalida!! ");
    }
    
    printf("O resultado da operacao: %.1lf\n ", resultado);
    
    return (EXIT_SUCCESS);
}

