#include <stdio.h>
#include <stdlib.h>


void comprimento() {
    double metros, centimetros;
    printf("\nDigite o valor em metros: ");
    scanf("%lf", &metros);
    centimetros = metros * 100;
    printf("%.2f metros equivale a %.2f centimetros.\n", metros, centimetros);
}


void massa() {
    double quilogramas, gramas;
    printf("\nDigite o valor em quilogramas: ");
    scanf("%lf", &quilogramas);
    gramas = quilogramas * 1000;
    printf("%.2f quilogramas equivale a %.2f gramas.\n", quilogramas, gramas);
}


#include <stdio.h>

void converterVolume(float valor, int unidadeOrigem, int unidadeDestino) {
    float convertido;

    // Converte o valor para litros como base
    switch (unidadeOrigem) {
        case 1: // Litros
            convertido = valor;
            break;
        case 2: // Mililitros
            convertido = valor / 1000;
            break;
        case 3: // Metros cubicos
            convertido = valor * 1000;
            break;
        default:
            printf("Unidade de origem invalida!\n");
            return;
    }

    // Converte de litros para a unidade de destino
    switch (unidadeDestino) {
        case 1: // Litros
            printf("%.2f litros\n", convertido);
            break;
        case 2: // Mililitros
            printf("%.2f mililitros\n", convertido * 1000);
            break;
        case 3: // Metros cubicos
            printf("%.2f metros cubicos\n", convertido / 1000);
            break;
        default:
            printf("Unidade de destino invalida!\n");
            return;
    }
}

int main() {
    float valor;
    int unidadeOrigem, unidadeDestino;

    printf("Conversor de unidades de volume\n");
    printf("Escolha a unidade de origem:\n");
    printf("1. Litros\n2. Mililitros\n3. Metros cubicos\n");
    printf("Digite sua escolha: ");
    scanf("%d", &unidadeOrigem);

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    printf("Escolha a unidade de destino:\n");
    printf("1. Litros\n2. Mililitros\n3. Metros cubicos\n");
    printf("Digite sua escolha: ");
    scanf("%d", &unidadeDestino);

    printf("Resultado da conversao: ");
    converterVolume(valor, unidadeOrigem, unidadeDestino);

    return 0;
}
