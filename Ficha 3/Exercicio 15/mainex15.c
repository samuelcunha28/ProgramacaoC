/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex15.c
 * Author: samue
 *
 * Created on 30 de Outubro de 2017, 21:37
 */

#include <stdio.h>
#include <stdlib.h>

void limparBufferEntrada() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

/*
 * 
 */
int main(int argc, char** argv) {
    int idade, contador, sexom, sexof, casados;
    char sexo, estado_civil;
    double salario;

    while (1) {
        puts("ATENCAO! PARA TERMINAR O PROGRAMA INTRODUZA UMA IDADE NEGATIVA ");
        puts("Introduza a sua idade (entre 16 e 150): ");
        scanf("%d", &idade);

        limparBufferEntrada();

        if (idade >= 16 && idade <= 150) {
            printf("Introduziu a idade: %d\n ", idade);
            ++idade;
            ++contador;
        } else if (idade < 0) {
            puts("Introduziu uma idade negativa, o programa ira encerrar ");
            break;
        } else {
            puts("Introduziu uma idade fora dos parametros validos! O programa ira encerrar");
            break;
        }


        puts("Introduza o seu sexo (M ou F): ");
        scanf("%c", &sexo);

        limparBufferEntrada();

        if (sexo == 'M') {
            puts("Introduziu o sexo masculino! ");
            ++sexom;
            ++contador;
        } else if (sexo == 'F') {
            puts("Introduziu o sexo feminino! ");
            ++sexof;
            ++contador;
        } else {
            puts("Introduziu um sexo invalido! ");
            break;
        }


        puts("Introduza o seu estado civil (Solteiro - 1, Casado - 2, Divorciado - 3, Viuvo - 4): ");
        scanf("%c", &estado_civil);

        limparBufferEntrada();

        switch (estado_civil) {
            case '1': puts("Introduziu o estado civil solteiro(a) ");
                break;
            case '2': puts("Introduziu o estado civil casado(a) ");
                ++casados;
                ++contador;
                break;
            case '3': puts("Introduziu o estado civil divorciado(a) ");
                break;
            case '4': puts("Introduziu o estado civil viuvo(a) ");
                break;
            default: puts("Introduziu um estado civil incorreto! ");
                break;
        }



        puts("Introduza o seu salario (maior que o salario nacional): ");
        scanf("%lf", &salario);

        if (salario > 580) {
            printf("Introduziu o salario %.1lf e este e maior que o salario nacional\n ", salario);
            ++salario;
            ++contador;
        } else {
            puts("Introduziu um salario invalido! ");
        }

    }

    return (EXIT_SUCCESS);
}

