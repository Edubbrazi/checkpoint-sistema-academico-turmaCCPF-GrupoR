#include <stdio.h>

void menu() {
    printf("==============================\n");
    printf(" SISTEMA EQUIPE R\n");
    printf("==============================\n");
    printf("1 - Inserir notas\n");
    printf("2 - Calcular media\n");
    printf("3 - Verificar situacao\n");
    printf("4 - Exibir resultado\n");
    printf("5 - Calcular derivada\n");
    printf("6 - Sair\n");
    printf("Escolha uma opcao: ");
}

int main() {
    int opcao;
    float nota_1 = 0, nota_2 = 0, media = 0;
    float a, b, c;

    do {
        menu();
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("\n--- Insira as notas ---\n");
                printf("Digite sua primeira nota: ");
                scanf("%f", &nota_1);
                printf("Digite sua segunda nota: ");
                scanf("%f", &nota_2);
                break;

            case 2:
                media = (nota_1 + nota_2) / 2;
                printf("Media calculada: %.2f\n", media);
                break;

            case 3:
                printf("\n--- Verificador de situacao ---\n");
                if (media >= 6) {
                    printf("O aluno esta APROVADO.\n");
                } else {
                    printf("O aluno esta REPROVADO.\n");
                }
                break;

            case 4:
                printf("\n--- Exibicao de resultados ---\n");
                printf("Nota 1: %.2f\n", nota_1);
                printf("Nota 2: %.2f\n", nota_2);
                printf("Media: %.2f\n", media);
                break;

            case 5:
                printf("\n--- Calculo da derivada ---\n");
                printf("Funcao: f(x) = ax^2 + bx + c\n");
                printf("Digite o valor de a: ");
                scanf("%f", &a);
                printf("Digite o valor de b: ");
                scanf("%f", &b);
                printf("Digite o valor de c (nao afeta a derivada): ");
                scanf("%f", &c);

                printf("f'(x) = %.2fx + %.2f\n", 2*a, b);
                break;

            case 6:
                printf("Saindo do sistema...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }
        printf("\n");
    } while (opcao != 6);

    return 0;
}