#include <stdio.h>

int main(){

    /*Variaveis carta A01*/

    char estado 01 [20], codigo_carta01[5], nome_cidade01[20];
    int populacao01, pontos_turistico01;
    float area01, pib01;

    printf(" ** Bem vindo ao jogo super trunfo! **\n");

    /*CARTA A01*/

    printf("selecione o estado: ");
      scanf("%s", estado01);
    printf("Selecione o codigo da carta: ");
      scanf("%s", codigo_carta01);
    printf("Selecione o nome da cidade: ");
      scanf("%s", nome_cidade01);
    
      printf("por favor coloque a população: ");
        scanf("%d", &populacao01);
      printf("os pontos turisticos: ");
        scanf("%d", &pontos_turistico01);
      printf("a área: ");
        scanf("%f", &area01);
      printf("o PIB: ");
        scanf("%f", &pib01);
        
        
    /*informação para o usuario de troca de carta*/

    printf("==== Parabéns você terminou uma carta !==== \n Agora vamos para a segunda carta\n");

    /*CARTA B02*/

    printf("Selecione o estado: ");
      scanf("%s", estado02);
    printf("Selecione o codigo da carta: ");
      scanf("%s", codigo_carta02);
    printf("Selecione o nome da cidade: ");
      scanf("%s", nome_cidade02);
      
    printf("por favor coloque a populacao: ");
      scanf("%d", &populacao02);
    printf("os pontos turisticos: ");
      scanf("%d", &pontos_turisticos02);
    printf("a área: ");
      scanf("%f", &area02);
    printf("o PIB: ");
      scanf("%f", &pib02);

    /*PARA O TERMINAL*/

    printf(" *SUPER TRUNFO PAISES*\n");

    /*CARTA A01*/

    printf("Estado: %s\n", estado01);
    printf("Código da carta: %s\n", codigo_carta01);
    printf("Nome da cidade: %s\n", nome_cidade01);
    printf("População: %dmil\n", populacao01);
    printf("Àrea: %.2fkm²\n", area01);
    printf("PIB: R$%.2f\n", pib01);
    printf("Número de pontos turisticos: %d\n", pontos_turistico01);

    /*CARTA B02*/

    printf("Estado: %s\n", estado02);
    printf("Código da carta: %s\n", codigo_carta02);
    printf("Nome da cidade: %s\n", nome_cidade01);
    printf("População: %dmil\n", populacao02);
    printf("Àrea: %.2fkm²\n", area02);
    printf("PIB: R$%.2f\n", pib02);
    printf("Número de pontos tursiticos: %d\n", pontos_turistico02);

    return 0;
    
    
}