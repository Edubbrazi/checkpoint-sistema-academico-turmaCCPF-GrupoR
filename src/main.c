#include<stdio.h>

void menu(){
    printf("--- SISTEMA EQUIPE R ---\n");
    printf("1 - Inserir notas\n");
    printf("2 - Calcular media\n");
    printf("3 - Verificar situacao\n");
    printf("4 - Exibir resultado\n");
    printf("5 - Calcular derivada\n");
    printf("6 - Sair\n");
    printf("Escolha uma opcao");
}


int main() {

int opcao, a, b, c;
float nota_1, nota_2, media;
menu();
scanf("%d", &opcao);
    
switch(opcao){
     case 1: 
        printf("\n--- Insira as notas ---\n");
        printf("Digite sua primeira nota: ");
        scanf("%f", &nota_1);
        printf("Digite sua segunda nota: ");
        scanf("%f", &nota_2);
        break; 

    case 2:
            media = (nota_1 + nota_2)/2;
            printf("O aluno esta com a media [(%.2f + %.2f)/2] igual a %.2f.\n", nota_1, nota_2, media);
        break;
    
            printf("O valor de frequencia invalida!");
    
     case 3:
                printf("\n--- Verificador de situacao ---\n");
                if (media >= 6) {
                    printf("O aluno esta APROVADO.\n");
                } else {
                    printf("O aluno esta REPROVADO.\n");
                }
                break;
        
    case 4:
      printf("\n--- Exibcao de resultados ---\n");
      printf("A Media do aluno é %f\n", media);

    case 5:
        printf("\n--- Calcular derivada ---\n");
        printf("Digite o valor de A: ");
        scanf("%f", &a);
        printf("Digite o valor de B: ");
        scanf("%f", &b);
          printf("Digite o valor de C: ");
        scanf("%f", &c);

        
        break;

    return 0;

}
}