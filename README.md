#include <stdio.h>

int main() {
    int n1, n2;
    float soma, subtracao, divisao, multiplicacao;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    soma = n1 + n2;
    subtracao = n1 - n2;
    multiplicacao = n1 * n2;
    
    if (n2 != 0)
        divisao = (float)n1 / n2;
    else {
        printf("Erro: Divisão por zero!\n");
        return 1; 
    }

    printf("\nOperações Matemáticas:\n");
    printf("Soma: %.2f\n", soma);
    printf("Subtração: %.2f\n", subtracao);
    printf("Multiplicação: %.2f\n", multiplicacao);
    printf("Divisão: %.2f\n", divisao);

    return 0;
}
