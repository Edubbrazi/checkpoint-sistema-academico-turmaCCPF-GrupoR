#include <stdio.h> // foi substituidas as aspas pelo <>

int main() {
    float nota1, nota2, media; //adicionada ; no final da linha 4

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1); // adicionado & para a variavel ser guardada na existente ao inves de criar outra

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);//

    media = nota1 + nota2 / 2;

    if (media = 6) { 
        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    }

    return 0;
}