#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).

    // 1. Tabuleiro (Matriz 10x10)
    int tabuleiro[10][10];
    int i, j;

    // Inicializa o tabuleiro com valor 0
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2. Posicionamento do Navio #1 - Horizontal
    /* Local de início
    linha = 1
    coluna = A */
    
    for (i = 0; i < 3; i++) {
        tabuleiro[0][0 + i] = 3;
    }

    // 3. Posicionamento do Navio #2 - Vertical
    /* Local de início
    linha = 7
    coluna = J */
    
    for (i = 0; i < 3; i++) {
        tabuleiro[6 + i][9] = 3;
    }

    // 4. Impressão do tabuleiro
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    printf("TABULEIRO BATALHA NAVAL \n");
    printf("  ");

    for (int j = 0; j < 10; j++) {
        printf("%c ", linha[j]); // Imprime as letras do tabuleiro
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", i+1); // Imprime o número das linhas
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
            printf("\n");
    }


    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
