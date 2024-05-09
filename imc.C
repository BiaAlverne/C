#include <stdio.h>

int main() {
    char nome[100];
    float imc, peso, altura;

    printf("Digite seu nome: ");
    scanf("%s", nome);
   
    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);
   
    printf("Digite o seu peso em quilogramas: ");
    scanf("%f", &peso);
   
    imc = peso / (altura * altura);
    
    if (imc < 18.5)
        printf("Olá, %s. Você está abaixo do peso.\n", nome);
    
    else if (imc >= 18.5 && imc <= 24.9)
        printf("Olá, %s. Você está no seu peso ideal.\n", nome);
    
    else if (imc >= 25 && imc < 29.9)
        printf("Olá, %s. Você está acima do peso.\n", nome);
    
    else
        printf("Olá, %s. Você está obeso.\n", nome);

    return 0;
}
