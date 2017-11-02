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
    int idade, estado_civil, contador = 1, f_sal1500, m_18_35_casado, idademaior = 0, idademenor = 150;
    char sexo;
    double salario, contador_salario, contador_salariofinal;

    while (1) {
        printf("Pesquisa numero %d\n ", contador);

        puts("ATENCAO! PARA TERMINAR O PROGRAMA INTRODUZA UMA IDADE NEGATIVA ");
        puts("Introduza a sua idade (entre 16 e 150): ");
        scanf("%d", &idade);


        if (idade >= 16 && idade <= 150) {
            printf("Introduziu a idade: %d\n ", idade);
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
        } else if (sexo == 'F') {
            puts("Introduziu o sexo feminino! ");
        } else {
            puts("Introduziu um sexo invalido! ");
            break;
        }


        limparBufferEntrada();

        puts("Introduza o seu estado civil (Solteiro - 1, Casado - 2, Divorciado - 3, Viuvo - 4): ");
        scanf("%d", &estado_civil);

        if (estado_civil >= 1 && estado_civil <= 4) {
            if (estado_civil == 1) {
                puts("Introduziu o estado civil solteiro ");
            } else if (estado_civil == 2) {
                puts("Introduziu o estado civil casado ");
            } else if (estado_civil == 3) {
                puts("Introduziu o estado civil divorciado ");
            } else if (estado_civil == 4) {
                puts("Introduziu o estado civil viuvo ");
            }
        }

        limparBufferEntrada();

        puts("Introduza o seu salario (maior que o salario nacional): ");
        scanf("%lf", &salario);

        
        // calculo salario
        
        if (salario > min_salario_nacional) {
            printf("Introduziu o salario %.1lf e este e maior que o salario nacional\n ", salario);
            ++contador_salario;
            contador_salariofinal += salario;
        } else {
            puts("Introduziu um salario invalido! ");
        }

        // idade maior e menor

        if (idade > idademaior) {
            idademaior = idade;
        }  
        if (idade < idademenor) {
            idademenor = idade;
        }
        // feminino com salario ate 1500
        
        if (sexo == 'F' && salario <= 1500) {
            f_sal1500++;
        }

        // masculino com idade entre 18 e 35 e casados
        
        if (sexo == 'M' && idade >= 18 && idade <= 35 && estado_civil == 2) {
            m_18_35_casado++;
        }
        limparBufferEntrada();
        ++contador;
    }

    printf("A idade maior e de: %d\n ", idademaior);
    printf("A idade menor e de: %d\n ", idademenor);
    printf("A media dos salarios e de %.1lf euros\n ", contador_salariofinal / contador_salario);
    printf("Existe(m) %d pessoa(s) do sexo feminino com ordenados até 1500 euros\n", f_sal1500);
    printf("Existe(m) %d pessoa(s) do sexo masculino entre os 18 e 35 anos e que tambem sejam casados\n", m_18_35_casado);

    return (EXIT_SUCCESS);
}