#include <stdio.h>

int main() {
    char nome[100];
    float imc, peso, altura;

    printf("Digite seu nome: ");
    scanf("%99[^\n]", nome);  // Lê a linha inteira, incluindo espaços
   
    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);
   
    printf("Digite o seu peso em quilogramas: ");
    scanf("%f", &peso);
   
    imc = peso / (altura * altura);
    
    if (imc < 18.5)
        printf("Olá, %s. Você está abaixo do peso.\n", nome);
    else if (imc >= 18.5 && imc < 25.0)  // Ajuste da comparação
        printf("Olá, %s. Você está no seu peso ideal.\n", nome);
    else if (imc >= 25.0 && imc < 30.0)  // Ajuste da comparação
        printf("Olá, %s. Você está acima do peso.\n", nome);
    else
        printf("Olá, %s. Você está obeso.\n", nome);

    return 0;
}
