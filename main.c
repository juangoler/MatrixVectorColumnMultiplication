#include <stdio.h>

int main() {
    int vetor[4], matriz[4][4], resultado[4] = {0};

    printf("Digite os elementos do vetor de 4 elementos:\n");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            resultado[i] += vetor[j] * matriz[j][i];
        }
    }

    printf("\nResultado da multiplicação do vetor pelas colunas da matriz:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d ", resultado[i]);
    }

    return 0;
}
