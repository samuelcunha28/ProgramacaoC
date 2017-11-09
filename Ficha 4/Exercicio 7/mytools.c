#define SIMBOLO "*"

int lerInteiro(int min, int max) {
    int valor;
    while (1) {
        puts("Introduza o numero de asteriscos que pretende imprimir: ");
        scanf("%d", &valor);
        if (valor >= min & valor <= max) {
            break;
        } else {
            puts("O numero que introduziu nao esta entre o valor minimo e maximo! ");
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