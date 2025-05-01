#include <stdio.h>

// Função recursiva para a Torre (direita)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para a Rainha (esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva com loop aninhado para o Bispo (diagonal superior direita)
void moverBispo(int casas) {
    if (casas == 0) return;

    // Loop externo (vertical = Cima)
    for (int v = 0; v < 1; v++) {
        printf("Cima\n");

        // Loop interno (horizontal = Direita)
        for (int h = 0; h < 1; h++) {
            printf("Direita\n");
        }
    }
    moverBispo(casas - 1); // chamada recursiva para próxima casa
}

// Função com loops aninhados e controle de fluxo para o Cavalo (duas para cima e uma para direita)
void moverCavalo() {
        for (int cima = 1; cima <= 2; cima++) {
        printf("Cima\n");
        if (cima == 2) {
            for (int direita = 0; direita < 2; direita++) {
                if (direita == 1) {
                    break; // só se move uma vez para a direita
                }
                printf("Direita\n");
            }
        }
    }
}

int main() {
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    printf(">>> MOVIMENTAÇÃO DE PEÇAS DE XADREZ <<<\n\n");

    // Torre
    printf("Torre, cinco casas para Direita:\n");
    moverTorre(casasTorre);
    printf("\n");

    // Bispo
    printf("Bispo, cinco casas na diagonal superior Direita:\n");
    moverBispo(casasBispo);
    printf("\n");

    // Rainha
    printf("Rainha, oito casas para Esquerda:\n");
    moverRainha(casasRainha);
    printf("\n");

    // Cavalo
    printf("Cavalo, duas casa para cima e uma para Direita: \n");
    moverCavalo();
    printf("\n");

    return 0;
}