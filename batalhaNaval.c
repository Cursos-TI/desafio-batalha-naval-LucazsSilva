#include <stdio.h>


int main() {
    int tabuleiro[10][10];
    int soma = 0;
    int cone[5][5];
    int cruz[5][5];
    int octaedro[5][5];

    // Inicializa o tabuleiro com 0
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = soma;
        }
    }

    // Posiciona navio horizontal
    for (int i = 0; i < 3; i++) {
        tabuleiro[1][3 + i] = 3;
    }

    // Posiciona navio vertical
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
        {
            tabuleiro[5 + i][j] = 3;
        }   
    }


    // diagonal principal
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == j) {
                tabuleiro[i][j] = 3;
            }
        }
    }

    // diagonal secundaria
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i + j == 9) {
                tabuleiro[i][j] = 3;
            }
        }
    }

    // Matriz cone 
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j >= 2 - i && j <= 2 + i) {
                tabuleiro[i][j] = 1;
            } else {
                tabuleiro[i][j] = 0;
            }
        }
    }

    // Matriz cruz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 2 || j == 2) {
                tabuleiro[3 + i][5 + j] = 3;
            }
        }
    }

    // Matriz octaedro
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int dist_i = i - 2;
            if (dist_i < 0) dist_i = -dist_i;
            int dist_j = j - 2;
            if (dist_j < 0) dist_j = -dist_j;

            if (dist_i + dist_j <= 2) {
                tabuleiro[5 + i][j] = 5; 
            }
        }
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
