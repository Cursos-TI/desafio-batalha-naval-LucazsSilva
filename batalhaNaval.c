#include <stdio.h>

int main() {
    int tabuleiro[10][10];

    // Inicializa o tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posiciona navio horizontal 
    for (int i = 0; i < 3; i++) {
        tabuleiro[1][3 + i] = 3;
    }

    // Posiciona navio vertical 
    for (int i = 0; i < 3; i++) {
        tabuleiro[5 + i][7] = 3;
    }

    // Exibe o tabuleiro
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}