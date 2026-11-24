#include <stdio.h>

int main() {
    int M = 3; // Linhas
    int N = 4; // Colunas

    int matriz[3][4] = {
        {2, 4, 6, 8},
        {1, 3, 5, 7},
        {10, 20, 30, 40}
    };

    // Vetor para armazenar a soma de cada linha
    int vetorSomas[3];

    // Calculando a soma de cada linha
    for (int i = 0; i < M; i++) {
        int soma = 0;
        for (int j = 0; j < N; j++) {
            soma += matriz[i][j];
        }
        vetorSomas[i] = soma;
    }

    // Imprimindo o vetor com as somas
    printf("Soma de cada linha:\n");
    for (int i = 0; i < M; i++) {
        printf("Linha %d: %d\n", i, vetorSomas[i]);
    }

    return 0;
}