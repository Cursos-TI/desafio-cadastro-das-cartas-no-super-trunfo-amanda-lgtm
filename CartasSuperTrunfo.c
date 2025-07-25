#include <stdio.h>

typedef struct {
    char estado[30];
    char codigo[10];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} CartaCidade;

int main() {
    // Carta 1: São Paulo
    CartaCidade carta1 = {
        "A",            // Estado
        "A01",          // Código
        "São Paulo",    // Nome da Cidade
        12325000,       // População
        1521.11,        // Área em km²
        699.28,         // PIB em bilhões de reais
        50              // Número de Pontos Turísticos
    };

    // Mostrar os dados da carta
    printf("=== Carta 1 ===\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d habitantes\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: R$ %.2f bilhões\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    return 0;
}