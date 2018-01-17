/* 
 * File:   main.c
 * Author: Samuel Cunha
 * TRABALHO PRATICO 2
 * Created on 10 de Janeiro de 2018, 19:47
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

#define MAX_JOGADORES 2
#define TAMANHO 9
#define ESPACOLIVRE -1
#define MENSAGEMVITORIA "O jogador %d e o vencedor da partida.\n"
#define MENSAGEMJOGADAS "O numero de jogadas total foi: %d\n"
#define FICHEIRO "jogadores.dat"

void ImprimirMatriz(int matriz[][TAMANHO], Jogador Jogadores[MAX_JOGADORES]) {
    int i, j;
    int A = 65; // 65 e o valor de A em ASCII

    //Imprime a primeira linha com as letras
    printf(" ");
    printf("|");
    for (i = 0; i < TAMANHO; ++i) {
        printf("%c", A);
        printf("|");
        ++A;
    }

    puts(" ");
    for (i = 0; i < TAMANHO; ++i) {
        //Imprime a primeira coluna com os numeros
        printf("%d", i + 1);
        printf("|");
        //Imprime a matriz
        for (j = 0; j < TAMANHO; ++j) {
            //Imprime as posições vazias
            if (matriz[i][j] == ESPACOLIVRE) {
                printf("-");
            }//Imprime as posições do jogador 1
            else if (matriz[i][j] == 0) {
                printf("%c", Jogadores[0].token);
            }//Imprime as posições do jogador 2
            else if (matriz[i][j] == 1) {
                printf("%c", Jogadores[1].token);
            }
            printf("|");
        }
        puts(" ");
    }
}

int verificarVencedor(int matriz[][TAMANHO], int jogador) { // funcao para verificar se algum jogador venceu
    int i, j;

    //verifica as colunas para ver se o jogador ganhou
    for (i = 0; i < TAMANHO; ++i) {
        for (j = 0; j < (TAMANHO - 2); ++j) {
            if (matriz[i][j] == jogador && matriz[i][j] == matriz[i][j + 1] && matriz[i][j] == matriz[i][j + 2] && matriz[i][j] == matriz[i][j + 3]) {
                return 1;
            }
        }
    }

    //verifica as linhas para ver se o jogador ganhou
    for (i = 0; i < (TAMANHO - 2); ++i) {
        for (j = 0; j < TAMANHO; ++j) {
            if (matriz[i][j] == jogador && matriz[i][j] == matriz[i + 1][j] && matriz[i][j] == matriz[i + 2][j] && matriz[i][j] == matriz[i + 3][j]) {
                return 1;
            }
        }
    }

    //verifica as diagonais da esquerda para a direita
    for (i = 0; i < (TAMANHO - 2); ++i) {
        for (j = 0; j < (TAMANHO - 2); ++j) {
            if (matriz[i][j] == jogador && matriz[i][j] == matriz[i + 1][j + 1] && matriz[i][j] == matriz[i + 2][j + 2] && matriz[i][j] == matriz[i + 3][j + 3]) {
                return 1;
            }
        }
    }

    //verifica as diagonais da direita para a esquerda
    for (i = 0; i < (TAMANHO - 2); i++) {
        for (j = 0; j < (TAMANHO - 2); j++) {
            if (matriz[i][j + 2] == jogador && matriz[i][j + 2] == matriz[i + 1][j + 1] && matriz[i][j + 2] == matriz[i + 2][j] && matriz[i][j + 3] == matriz[i + 3][j]) {
                return 1;
            }

        }
    }
    return 0;
} // AJUDA: https://stackoverflow.com/questions/15457796/four-in-a-row-logic

int verificarJogadas(int matriz[][TAMANHO], Jogador Jogadores[MAX_JOGADORES], int jogador, char coluna, int linha, int numero_jogadas[MAX_JOGADORES]) {
    int i, j;
    int ganhar = 0;
    int A = 65;


    // Desistencia: Verifica logo se algum jogador desiste para nao percorrer as Verificacoes para menos gastos 
    if (coluna == 'Z' || coluna == 90) {
        if (linha == 0) {
            printf("Jogador 1: %s\n", Jogadores[0].nome);
            printf("Jogador 2: %s\n", Jogadores[1].nome);
            printf(MENSAGEMVITORIA, (abs(jogador - 1) + 1));
            printf(MENSAGEMJOGADAS, numero_jogadas[abs(jogador - 1)]);
            Jogadores[abs(jogador - 1)].pontos = Jogadores[abs(jogador - 1)].pontos + 3; // Acumular mais 3 pontos para o jogador vencedor da partida
            ++Jogadores[0].jogos; // Acumular um jogo para cada jogador
            ++Jogadores[1].jogos; // Acumular um jogo para cada jogador
            return jogador + 2; // Para nao voltar pedir as jogadas novamente porque jogador + 2 > (jogador < 2)
        }
    }

    // Em caso de empate
    if (numero_jogadas[MAX_JOGADORES] == TAMANHO * TAMANHO) { // Numero maximo de jogadas possiveis
        ++Jogadores[0].jogos; // Acumular um jogo para cada jogador
        ++Jogadores[1].jogos; // Acumular um jogo para cada jogador
        ++Jogadores[0].pontos; // Acumular um ponto para cada jogador
        ++Jogadores[1].pontos; // Acumular um ponto para cada jogador
    }

    // Verificacoes: caso nenhum jogador desista percorre as seguintes verificacoes 
    for (i = 0; i < TAMANHO; ++i) {
        if (coluna == (A + i) && linha > 0 && linha <= TAMANHO) { // se tiver dentro dos parametros possiveis de jogada
            if (matriz[(linha - 1)][((A + i) - A)] == ESPACOLIVRE) { // e se tiver um espaco livre para completar a jogada
                matriz[(linha - 1)][((A + i) - A)] = jogador; // o jogador pode jogar 
                ImprimirMatriz(matriz, Jogadores);
                // Contador para o numero de jogadas para cada jogador
                ++numero_jogadas[jogador];
                puts("");
                // Verificar se qualquer jogador ganhou a partida
                ganhar = verificarVencedor(matriz, jogador);
                if (ganhar > 0) { // Se o jogador ganhar entao
                    printf("Jogador 1: %s\n", Jogadores[0].nome);
                    printf("Jogador 2: %s\n", Jogadores[1].nome);
                    printf(MENSAGEMVITORIA, jogador + 1);
                    printf(MENSAGEMJOGADAS, numero_jogadas[jogador]);
                    Jogadores[jogador].pontos = Jogadores[jogador].pontos + 3; // Acumular mais 3 pontos para o jogador vencedor da partida
                    ++Jogadores[0].jogos; // Acumular um jogo para cada jogador
                    ++Jogadores[1].jogos; // Acumular um jogo para cada jogador
                    return jogador + 2; // Para nao voltar pedir as jogadas novamente porque jogador + 2 > (jogador < 2)
                }

                return abs(jogador - 1); // fazer o absoluto para a troca de jogadores para a continuacao do jogo

            } else {
                printf("Jogada impossivel de ser realizada, a posicao esta ocupada por um token! Jogue novamente!");
                return jogador; // como a jogada nao e possivel de ser efetuada pede novamente ao jogador atual que efetue outra jogada na funcao de Jogadas
            }
        }
    }
    printf("Jogada impossivel de ser realizada, posicao nao existe! Jogue novamente!");
    return jogador; // como a jogada nao e possivel de ser efetuada pede novamente ao jogador atual que efetue outra jogada na funcao de Jogadas
}

void Jogadas1VS1(int matriz[][TAMANHO], Jogador Jogadores[MAX_JOGADORES]) {
    char coluna;
    int linha;
    int jogador = 0;
    int numero_jogadas[MAX_JOGADORES];
    numero_jogadas[0] = 0; // inicialmente cada jogador inicia o seu contador de jogadas em zero
    numero_jogadas[1] = 0; // inicialmente cada jogador inicia o seu contador de jogadas em zero

    puts("Se qualquer jogador quiser desistir tera que jogar na coluna Z e na linha 0");
    // Ciclo para a realizacao das jogadas
    do {
        clean_buffer();
        puts("");
        printf("Jogador %d introduza a coluna (letra): ", jogador + 1);
        scanf("%c", &coluna);
        clean_buffer();
        printf("Jogador %d introduza a linha(numero): ", jogador + 1);
        scanf("%d", &linha);
        // Verifica as jogadas e troca para o jogador seguinte
        jogador = verificarJogadas(matriz, Jogadores, jogador, coluna, linha, numero_jogadas); // chama a funcao VerificarJogadas
    } while (jogador < 2 && numero_jogadas[MAX_JOGADORES]); // ciclo infinito que e quebravel caso se verifique que haja um vencedor nas funcoes de verificar
}

void criarMatriz(int matriz[][TAMANHO]) {
    int i, j;

    //Prenche a matriz com o espaco livre (-1)
    for (i = 0; i < TAMANHO; ++i) {
        for (j = 0; j < TAMANHO; ++j) {
            matriz[i][j] = ESPACOLIVRE;
        }
    }
}

int ler_jogador_token(Jogador Jogadores[MAX_JOGADORES], int contador, int *tamanhoarray) { // Funcao que adiciona jogadores
    int i;
    Jogador jogador_novo;
    Jogador *ficheiro = NULL;

    // Se chegar ao limite de jogadores adicionamos mais uma posicao para o jogador que desejamos inserir
    if (contador == *tamanhoarray) {
        printf("O array de jogadores esta cheio. Foi adicionada mais uma posicao para o jogador novo!");
        ficheiro = (Jogador *) realloc(Jogadores, 1);
        *tamanhoarray = *tamanhoarray + 1;
        free(Jogadores);
        Jogadores = ficheiro;
    }
    // Dados para o novo jogador inserido
    puts(" ");
    puts("Introduza o nome do Jogador ");
    lerString(jogador_novo.nome, MAX_CARACTERES);
    clean_buffer();
    puts("Introduza o token do jogador: ");
    scanf("%c", &jogador_novo.token);

    jogador_novo.pontos = 0; // Inicialmente cada jogador inserido tem zero pontos
    jogador_novo.jogos = 0; // Inicialmente cada jogador inserido tem zero vitorias

    Jogadores[contador] = jogador_novo;

    puts("Jogador adicionado!");
    puts(" ");

    return ++contador;
}

void Jogo1VS1(int matriz[][TAMANHO], Jogador Jogadores[MAX_JOGADORES]) {
    criarMatriz(matriz);
    ImprimirMatriz(matriz, Jogadores);
    printf("Jogador 1: %s\n", Jogadores[0].nome);
    printf("Jogador 2: %s\n", Jogadores[1].nome);
    Jogadas1VS1(matriz, Jogadores);
}

int JogadasComputador(int matriz[][TAMANHO], int jogador) { // como nao consegui por o PC a jogar contra o jogador nao consegui testar as condicoes
    int i, j;

    for (i = 0; i < TAMANHO; ++i) {
        for (j = 0; j < TAMANHO; ++j) {
            if (matriz[i][j] == ESPACOLIVRE && (jogador == 1)) {
                matriz[i][j] = 1;
                return 1;
            }
        }
    }

    //verifica as colunas para colocar token
    for (i = 0; i < TAMANHO; ++i) {
        for (j = 0; j < (TAMANHO - 2); ++j) {
            if (matriz[i][j] == 0 && matriz[i][j] == matriz[i][j + 1] && matriz[i][j] == matriz[i][j + 2] && matriz[i][j] == matriz[i][j + 3]) {
                matriz[i][j] == 1; // poe o token
                return 1;
            }
        }
    }

    //verifica as linhas para colocar token
    for (i = 0; i < (TAMANHO - 2); ++i) {
        for (j = 0; j < TAMANHO; ++j) {
            if (matriz[i][j] == 0 && matriz[i][j] == matriz[i + 1][j] && matriz[i][j] == matriz[i + 2][j] && matriz[i][j] == matriz[i + 3][j]) {
                matriz[i][j] == 1;
                return 1;
            }
        }
    }

    //verifica as diagonais da esquerda para a direita para colocar token
    for (i = 0; i < (TAMANHO - 2); ++i) {
        for (j = 0; j < (TAMANHO - 2); ++j) {
            if (matriz[i][j] == 0 && matriz[i][j] == matriz[i + 1][j + 1] && matriz[i][j] == matriz[i + 2][j + 2] && matriz[i][j] == matriz[i + 3][j + 3]) {
                matriz[i][j] == 1;
                return 1;
            }
        }
    }

    //verifica as diagonais da direita para a esquerda para colocar token
    for (i = 0; i < (TAMANHO - 2); i++) {
        for (j = 0; j < (TAMANHO - 2); j++) {
            if (matriz[i][j + 2] == 0 && matriz[i][j + 2] == matriz[i + 1][j + 1] && matriz[i][j + 2] == matriz[i + 2][j] && matriz[i][j + 3] == matriz[i + 3][j]) {
                matriz[i][j] == 1;
                return 1;
            }
        }
    }
}

void JogoHumanoVSComputador(int matriz[][TAMANHO], Jogador Jogadores[MAX_JOGADORES]) {
    char coluna;
    int linha;
    int jogador = 0;
    int numero_jogadas[MAX_JOGADORES] = {0, 0}; // inicialmente cada jogador inicia o seu contador de jogadas em zero

    puts("Quem ira jogar contra o PC?");
    lerString(Jogadores[MAX_JOGADORES].nome, MAX_CARACTERES);

    printf("O %s ira jogar contra o temivel PC!", Jogadores[MAX_JOGADORES].nome);
    ImprimirMatriz(matriz, Jogadores);
    // Ciclo para a realizacao das jogadas
    do {
        clean_buffer();
        puts("");
        printf("%s introduza a coluna: ", Jogadores[MAX_JOGADORES].nome);
        scanf("%c", &coluna);
        clean_buffer();
        printf("%s introduza a linha: ", Jogadores[MAX_JOGADORES].nome);
        scanf("%d", &linha);
        //Verifica as jogadas e troca para o jogador seguinte
        jogador = verificarJogadas(matriz, Jogadores, coluna, linha, jogador, numero_jogadas); // chama a funcao VerificarJogadas
    } while (jogador < 1);
    JogadasComputador(matriz, jogador); // chama a funcao para o pc jogar o seu token
    clean_buffer();
}

void DicasJogador(int matriz[][TAMANHO], Jogador Jogadores[MAX_JOGADORES], int jogador, int numero_jogadas[]) {
    // Como nao consegui por o PC a jogar contra o jogador nao consegui implementar as condicoes
    // O jogador no jogo contra o pc pode ter dicas. O limite das dicas vao-se esgotando a medida que o jogo avanca

    if (numero_jogadas[jogador] = 0) {
        puts("Atencao jogador, na primeira jogada o pc tem a tendencia de jogar para um dos cantos");
    } else if (numero_jogadas[jogador] = 1) {
        puts("Atencao jogador, as dicas nao sao de graca. Na segunda jogada o pc tem tendencia a jogar no meio ou tentar fazer logo dois em linha");
    } else if (numero_jogadas[jogador] = 2) {
        puts("Atencao jogador, o pc nao gosta de perder. Sempre que tiver dois tokens seguidos ele preenche ao lado para nao perder!");
    } else if (numero_jogadas[jogador] > 3) {
        puts("Acabaram-se as dicas!");
    }
}

void LerFicheiro(Jogador Jogadores[MAX_JOGADORES]) {
    int i = 0;

    FILE *ficheiro = fopen(FICHEIRO, "rb");

    for (i = 0; i < MAX_JOGADORES; ++i) {
        fread(&Jogadores[i], sizeof (Jogador), 1, ficheiro);
    }

    fclose(ficheiro);
    free(ficheiro);

    puts("Ficheiro lido.");
    puts(" ");
}

void GuardarFicheiro(Jogador Jogadores[MAX_JOGADORES], int contador) {
    int i;
    FILE *ficheiro = fopen(FICHEIRO, "ab");

    for (i = 0; i < contador; ++i) {
        fwrite(&Jogadores[i], sizeof (Jogador), 1, ficheiro);
    }
    fclose(ficheiro);

    puts("Ficheiro guardado!");
    puts(" ");
}

void Estatisticas(Jogador Jogadores[MAX_JOGADORES], int contador) {
    int i;

    FILE *ficheiro = fopen(FICHEIRO, "rb");
    for (i = 0; i < MAX_JOGADORES; ++i) {
        printf("Nome do jogador: %s\n Token do jogador: %c\n Pontos: %d\n Jogos realizados: %d\n", Jogadores[i].nome, Jogadores[i].token, Jogadores[i].pontos, Jogadores[i].jogos);
    }

    fclose(ficheiro);
    puts("Estatisticas Lidas!");
    GuardarFicheiro(Jogadores, contador);
    puts("");
}

void imprimir_todos_jogadores(Jogador Jogadores[], int contador) {
    int i;

    for (i = 0; i < contador; ++i) {
        puts("");
        printf("Nome do Jogador: %s\n", Jogadores[i].nome);
        printf("Token do Jogador: %c\n", Jogadores[i].token);
    }
}

int main(int argc, char** argv) {
    char token[MAX_JOGADORES];
    int matriz[TAMANHO][TAMANHO];
    int contador = 0;
    int opcao, tamanho;

    Jogador Jogadores[MAX_JOGADORES];

    FILE *ficheiro = fopen(FICHEIRO, "rb");
    if (ficheiro != NULL) {
        LerFicheiro(Jogadores);
    }

    do {
        puts("Bem Vindos ao jogo do 4 em linha");
        puts("1. Adicionar jogadores");
        puts("2. Imprimir jogadores adicionados");
        puts("3. Modo de jogo Jogador VS Jogador");
        puts("4. Modo de jogo Jogador VS PC");
        puts("5. Abrir estatisticas");
        puts("6. Sair do programa");
        puts("Escolha uma opção valida:");
        scanf("%d", &opcao);
        clean_buffer();
        puts("");
        switch (opcao) {
            case 1: contador = ler_jogador_token(Jogadores, contador, &tamanho);
                break;
            case 2: imprimir_todos_jogadores(Jogadores, contador);
                break;
            case 3: Jogo1VS1(matriz, Jogadores);
                break;
            case 4: JogoHumanoVSComputador(matriz, Jogadores);
                break;
            case 5: Estatisticas(Jogadores, contador);
                break;
            case 6: printf("Obrigado por ter jogado. Ate a proxima!\n");
                break;
            default: printf("Opção Incorreta!");
        }
    } while (opcao != 6);

    GuardarFicheiro(Jogadores, contador);
    fclose(ficheiro);

    return (EXIT_SUCCESS);
}