#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1;
    char Codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
  // Área para entrada de dados
    printf("Digite os dados da carta 1\n");
  // Área para exibição dos dados da cidade
    printf("Estado (A-H): ");
    scanf("%s", &estado1);
    
    printf("Código (ex: A01): ");
    scanf("%s", &Codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", &nomeCidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

return 0;
} 
