#include <stdio.h>
#define ERRO -1

/* Pré-condição: vetor ordenado em ordem crescente. */
int pb(const int *vetor, int tamanho, int chave) {
    int esquerda = 0, direita = tamanho - 1;
    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        if (vetor[meio] == chave)
            return meio;
        if (vetor[meio] < chave)
            esquerda = meio + 1;
        else
            direita = meio - 1;
    }
    return ERRO;
}
int main(void) {
    int numeros[] = {1, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 21};
    int posicao = pb(numeros, sizeof numeros / sizeof numeros[0], 12);
    if (posicao != ERRO)
        printf("A posição é %d\n", posicao);
    else
        printf("Elemento não está no vetor.\n");
    return 0;
}
