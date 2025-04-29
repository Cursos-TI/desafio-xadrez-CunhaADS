#include <stdio.h>

int main() {

    // Definição de variaveis e constantes;
    int i; // contador para os loops;
    const int bispo = 5, torre = 5, rainha = 8;

    printf(">>> MOVIMENTAÇÃO DE PEÇAS DE XADREZ <<<\n\n");

    // Movimento do Bispo: Diagonal superior direita;
    printf("Bispo, cinco casas para diagonal superior direita:\n\n");

    for (i = 0; i < bispo; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");

    // Movimento da Torre: Apenas para a direita;
    printf("Torre, cinco casa para direita:\n\n");
    i = 0;
    while (i < torre) {
        printf("Direita\n");
        i++;
    }
    printf("\n");

    // Movimento da Rainha: Apenas para a esquerda;
    printf("Rainha, oito casas para esquerda:\n\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < rainha);

     printf("\n");

    // Movimento do cavalo: duas casa para cima e uma para direita;
    printf("cavalo, duas casa para cima e uma para direita:\n\n");

    for (i = 0; i < 2; i++) {
        printf("cima\n");

        while (j < 1 && i == 1) {
            printf("direita\n");
            j++;
        }  
    }
    
    return 0;
}
