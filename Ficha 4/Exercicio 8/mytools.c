/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

int lerNotas(int min, int max) {
    int notas;

    while (1) {
        puts("Introduza a nota do aluno: ");
        scanf("%d", &notas);
        if (notas >= min & notas <= max) {
            break;
        } else {
            puts("Nota invalida! ");
        }
    }
    return notas;
}
