#include <stdio.h>

// Declarações das funções dos outros arquivos
void temperatura();
void comprimento();
void massa();
void volume();

int main() {
    int opcao;

    do {
        printf("\nConversor de Unidades\n");
        printf("1. Converter Temperatura (Celsius, Fahrenheit, Kelvin)\n");
        printf("2. Converter Comprimento (metros para centímetros)\n");
        printf("3. Converter Massa (quilogramas para gramas)\n");
        printf("4. Converter Volume (litros, mililitros, metros cúbicos)\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                temperatura();
                break;
            case 2:
                comprimento();
                break;
            case 3:
                massa();
                break;
            case 4:
                volume();
                break;
            case 5:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}
