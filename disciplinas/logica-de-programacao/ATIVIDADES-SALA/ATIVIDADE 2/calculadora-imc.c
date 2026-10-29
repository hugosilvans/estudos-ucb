#include <math.h>
#include <stdio.h>

typedef struct {
    int idade;
    float altura;
    float peso;
    char nome[20];
} dados;

double imc(dados peso, dados altura) {
    double imc = peso.peso / pow(altura.altura, 2);
    return imc;
}

int main() {
    dados d;

    printf("Digite seu nome: ");
    if (scanf("%19s", d.nome) != 1)
        return 1;
    printf("Digite seu peso: ");
    if (scanf("%f", &d.peso) != 1 || d.peso <= 0)
        return 1;
    printf("Digite seu altura: ");
    if (scanf("%f", &d.altura) != 1 || d.altura <= 0)
        return 1;
    printf("Digite seu idade: ");
    if (scanf("%d", &d.idade) != 1)
        return 1;

    // A função recebe os dados já lidos e a altura deve estar em metros.
    double im = imc(d, d);
    printf("\n------------------------------------\n\n");

    printf("Nome: %s\nIdade: %d\nPeso: %.2fkg\nAltura: %.2fm", d.nome, d.idade, d.peso, d.altura);
    printf("\n\nIMC: %.2f", im);
    printf("\n------------------------------------\n\n");
    return 0;
}
