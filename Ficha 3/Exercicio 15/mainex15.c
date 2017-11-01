/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex15.c
 * Author: samue
 *
 * Created on 1 de Novembro de 2017, 15:55
 */

#include <stdio.h>
#include <stdlib.h>

#define min_salario_nacional 558

void limparBufferEntrada() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

/*
 * 
 */
int main(int argc, char** argv) {
    int idade, estado_civil, i, contador = 1, contador_salario, contador_salariofinal, casados, f_sal1500, m_18_35_casado;
    char sexo;
    double salario;

    while (1) {
        printf("Pesquisa numero %d\n ", contador);

        puts("ATENCAO! PARA TERMINAR O PROGRAMA INTRODUZA UMA IDADE NEGATIVA ");
        puts("Introduza a sua idade (entre 16 e 150): ");
        scanf("%d", &idade);


        if (idade >= 16 && idade <= 150) {
            printf("Introduziu a idade: %d\n ", idade);
            ++idade;
        } else if (idade < 0) {
            puts("Introduziu uma idade negativa, o programa ira encerrar ");
            break;
        } else {
            puts("Introduziu uma idade fora dos parametros validos! ");
            contador = contador - 1;
        }

        limparBufferEntrada();

        puts("Introduza o seu sexo (M ou F): ");
        scanf("%c", &sexo);


        if (sexo == 'M') {
            puts("Introduziu o sexo masculino! ");
            ++sexo;
        } else if (sexo == 'F') {
            puts("Introduziu o sexo feminino! ");
            ++sexo;
        } else {
            puts("Introduziu um sexo invalido! ");
            break;
        }


        limparBufferEntrada();

        puts("Introduza o seu estado civil (Solteiro - 1, Casado - 2, Divorciado - 3, Viuvo - 4): ");
        scanf("%c", &estado_civil);

        limparBufferEntrada();

        switch (estado_civil) {
            case '1': puts("Introduziu o estado civil solteiro(a) ");
                break;
            case '2': puts("Introduziu o estado civil casado(a) ");
                ++casados;
                break;
            case '3': puts("Introduziu o estado civil divorciado(a) ");
                break;
            case '4': puts("Introduziu o estado civil viuvo(a) ");
                break;
            default: puts("Introduziu um estado civil incorreto! ");
                break;
        }

        limparBufferEntrada();

        puts("Introduza o seu salario (maior que o salario nacional): ");
        scanf("%lf", &salario);

        if (salario > min_salario_nacional) {
            printf("Introduziu o salario %.1lf e este e maior que o salario nacional\n ", salario);
            ++contador_salario;
            contador_salariofinal += contador_salario;
        } else {
            puts("Introduziu um salario invalido! ");
        }
        ++contador_salariofinal;
        limparBufferEntrada();

        ++contador;
    }

    printf("A media dos salarios e de %d\n ", contador_salario / contador_salariofinal);


    // feminino com salario ate 1500
    for (i = 0; i <= contador - 1; ++i) {
        if (sexo == 'F' && salario <= 1500) {
            f_sal1500 = f_sal1500 + 1;
        }
    }
    printf("Existe(m) %d pessoa(s) do sexo feminino com ordenados até 1500 euros\n", f_sal1500);

    // masculino idade entre 18 e 35 casados
    for (i = 0; i <= contador - 1; ++i) {
        if (sexo == 'M' && idade <= 35 && idade > 18 && estado_civil == 2) {
            m_18_35_casado = m_18_35_casado + 1;
        }
    }
    printf("Existe(m) %d pessoa(s) do sexo masculino entre os 18 e 35 anos e que tambem sejam casados\n", m_18_35_casado);



    return (EXIT_SUCCESS);
}