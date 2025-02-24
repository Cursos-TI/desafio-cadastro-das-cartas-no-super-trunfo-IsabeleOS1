#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
   
    printf("Super Trunfo\n");

    char estado;
    char codigo [4];
    char cidade [50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    char estado2;
    char codigo2 [4];
    char cidade2 [50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite as informações da carta 1\n");
    printf("Estado (A-H): ");
    scanf("%s", &estado);  
    printf("Código de Carta (ex:A01): ");
    scanf("%s", &codigo);  
    printf("Nome da Cidade: ");
    scanf("%s", &cidade); 
    printf("População: ");
    scanf("%d", &populacao);
    printf("Área (km2): ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosturisticos);

    printf("Digite as informações da carta 2\n");
    printf("Estado (A-H): ");
    scanf("%s", &estado2);
    printf("Código de Carta (ex:A01): ");   
    scanf("%s", &codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", &cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km2): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Carta 1\n");
    printf("Estado: %c\n", estado);
    printf("Código de Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", pontosturisticos);

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código de Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    
    return 0;
}
