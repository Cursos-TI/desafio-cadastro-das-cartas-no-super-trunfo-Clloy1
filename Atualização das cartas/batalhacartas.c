#include <stdio.h>

int main() {
    char carta1[50], carta2[50];
    int populacao1, populacao2, pontosturisticos1, pontosturisticos2;
    float area1, area2, pib1, pib2;

    printf("Digite dados da carta 1:\n");

    printf("Carta: ");
    scanf("%s", carta1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosturisticos1);

    printf("Digite dados da carta 2:\n");

    printf("Carta: ");
    scanf("%s", carta2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosturisticos2);

    float densidadepopulacional1 = (float)populacao1 / area1;
    float pibpercapita1 = pib1 / populacao1;
    float superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 - densidadepopulacional1;

    float densidadepopulacional2 = (float)populacao2 / area2;
    float pibpercapita2 = pib2 / populacao2;
    float superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 - densidadepopulacional2;

    printf("Comparacao:\n");

    printf("Populacao: carta %d venceu\n", populacao1 > populacao2 ? 1 : 2);
    printf("Area: carta %d venceu\n", area1 > area2 ? 1 : 2);
    printf("PIB: carta %d venceu\n", pib1 > pib2 ? 1 : 2);
    printf("Pontos Turisticos: carta %d venceu\n", pontosturisticos1 > pontosturisticos2 ? 1 : 2);
    printf("Densidade Populacional: carta %d venceu\n", densidadepopulacional1 < densidadepopulacional2 ? 1 : 2);
    printf("Super Poder: carta %d venceu\n", superpoder1 > superpoder2 ? 1 : 2);

    return 0;





   



}