#include <stdio.h>

int main() {
    // Variáveis para cidade 1
    char codigoA[10], nomeA[50];
    int populacaoA;
    float areaA, pibA;

    // Variáveis para cidade 2
    char codigoB[10], nomeB[50];
    int populacaoB;
    float areaB, pibB;

    // Pontuação das cidades
    int pontosA = 0, pontosB = 0;

    // Cadastro da primeira cidade
    printf("=== Cadastro da Cidade 1 ===\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigoA);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeA);
    printf("Digite a população: ");
    scanf("%d", &populacaoA);
    printf("Digite a área (em km²): ");
    scanf("%f", &areaA);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pibA);

    // Cadastro da segunda cidade
    printf("\n=== Cadastro da Cidade 2 ===\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigoB);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeB);
    printf("Digite a população: ");
    scanf("%d", &populacaoB);
    printf("Digite a área (em km²): ");
    scanf("%f", &areaB);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pibB);

    // Comparações e pontuação
    printf("\n=== Comparação das Cidades ===\n");

    // População
    if (populacaoA > populacaoB) {
        printf("Cidade com maior população: %s\n", nomeA);
        pontosA++;
    } else if (populacaoB > populacaoA) {
        printf("Cidade com maior população: %s\n", nomeB);
        pontosB++;
    } else {
        printf("As duas cidades têm a mesma população.\n");
    }

    // Área
    if (areaA > areaB) {
        printf("Cidade com maior área: %s\n", nomeA);
        pontosA++;
    } else if (areaB > areaA) {
        printf("Cidade com maior área: %s\n", nomeB);
        pontosB++;
    } else {
        printf("As duas cidades têm a mesma área.\n");
    }

    // PIB
    if (pibA > pibB) {
        printf("Cidade com maior PIB: %s\n", nomeA);
        pontosA++;
    } else if (pibB > pibA) {
        printf("Cidade com maior PIB: %s\n", nomeB);
        pontosB++;
    } else {
        printf("As duas cidades têm o mesmo PIB.\n");
    }

    // Resultado final
    printf("\n=== Resultado Final ===\n");
    printf("Pontos %s: %d\n", nomeA, pontosA);
    printf("Pontos %s: %d\n", nomeB, pontosB);

    if (pontosA > pontosB) {
        printf("A cidade vencedora é: %s\n", nomeA);
    } else if (pontosB > pontosA) {
        printf("A cidade vencedora é: %s\n", nomeB);
    } else {
        printf("Empate entre as cidades!\n");
    }

    return 0;
}
