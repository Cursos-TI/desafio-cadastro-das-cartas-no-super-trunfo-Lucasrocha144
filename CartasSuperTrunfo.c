#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

    printf("Desafio Super Trunfo: Cadastrar duas cartas\n");
    printf("Cadastro da carta 1/2: \n");

    char estado[50];
    char codigo[5];
    char nome[20];
    int população;
    float área;
    float pib;
    float numero;

    printf("Digite a inicial do nome do estado:\n");
    scanf("%s", &Estado);

    printf("Digite o código da cidade:\n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &Nome);

    printf("Populacao:\n");
    scanf("&f", &população);

    printf("Àrea:\n");
    scanf("%f", &Àrea);

    printf("PIB:\n");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos:\n");
    scanf("%i", &numero);

    printf("Carta 1/2:\n o nome do Estado é :%s - o código da cidade é:%s - O nome da cidade é:%s - Total da população é:%i - O tamanho da área é:%f - O PIB é:%f - Total de pontos turistico :%i \n\n",  Estado, Codigo, Nome, Populaçao, Area, PIB, Numero);

    printf("Cadastro da carta 2/2\n");

    char estado[50];
    char codigo[5];
    char cidade[50];
    int populaçao;
    float area;
    float pib;
    float numero;

    printf("Digite a inicial do nome do estado:\n");
    scanf("%s", &estado);

    printf("Digite o código da cidade:\n");
    scanf("%s", &código);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade);

    printf("População:\n");
    scanf("%f", &população);

    printf("Àrea:\n");
    scanf("%f", &area);

        printf("Digite o PIB:\n");
        scanf("%f", &pib);

        printf("Número de pontos turistico:\n");
        scanf("%i", &numero);

        printf("O nome do estado é:%s - O código da cidade é:%s - Digite o nome da cidade:%s - Total da população:%f - O tamanho da área é:%f - O PIB é:%f - Total de pontos turisticos é:%i \n\n", estado, código, cidade, populaçao, área, pib, numero);
        return 0;



}