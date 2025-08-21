#include <stdio.h>
#include <string.h> // Inclusão de biblioteca

int main() // Função main
{
    // Variáveis para armazenamento de dados da carta 1
    char estado1;
    char cidadeNome1[50], codigoCarta1[50];
    unsigned long int populacao1;
    int nPontosTuristicos1;
    float pib1, area1;
    float densidadePopulacional1, pibPerCapita1;
    float superPoder1;

    // Variáveis para armazenar o tipo de comparação, o resultado, soma e nome dos atributos
    char comparacao1, comparacao2;
    int resultado1, resultado2;
    float soma1, soma2;
    char nomeAtributo1[50], nomeAtributo2[50];

    // Variáveis para armazenamento de dados da carta 2
    char estado2;
    char cidadeNome2[50], codigoCarta2[50];
    unsigned long int populacao2;
    int nPontosTuristicos2;
    float pib2, area2;
    float densidadePopulacional2, pibPerCapita2;
    float superPoder2;

    // Registro dos dados da carta 1
    printf("Bem-vindo ao Super Trunfo!\n");

    printf("\nRegistro da Carta 1\n");

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade (sem espaços): ");
    scanf("%s", cidadeNome1);

    printf("Digite o estado (ex: A): ");
    scanf(" %c", &estado1);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &nPontosTuristicos1);

    printf("Registro da Carta 1 bem sucedido\n");

    // Registro dos dados da carta 2
    printf("\nRegistro da Carta 2\n");

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade (sem espaços): ");
    scanf("%s", cidadeNome2);

    printf("Digite o estado (ex: A): ");
    scanf(" %c", &estado2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &nPontosTuristicos2);

    // Cálculo de densidade populacional e PIB per capita
    // Carta 1
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (float)pib1 / populacao1;

    // Carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (float)pib2 / populacao2;

    // Cálculo do super poder
    // Carta 1
    superPoder1 = (float)populacao1 + area1 + pib1 + pibPerCapita1 + (1 / densidadePopulacional1) + nPontosTuristicos1;

    // Carta 2
    superPoder2 = (float)populacao2 + area2 + pib2 + pibPerCapita2 + (1 / densidadePopulacional2) + nPontosTuristicos2;

    // Exibição dos dados da carta 1
    printf("\nInformações da Carta 1:\n");
    printf("Codigo da carta: %s\n", codigoCarta1);
    printf("Nome da cidade: %s\n", cidadeNome1);
    printf("Estado: %c\n", estado1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", nPontosTuristicos1);
    printf("Densidade populacional: %f\n", densidadePopulacional1);
    printf("PIB per capita: %f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Exibição dos dados da carta 2
    printf("\nInformações da Carta 2:\n");
    printf("Codigo da carta: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", cidadeNome2);
    printf("Estado: %c\n", estado2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", nPontosTuristicos2);
    printf("Densidade populacional: %f\n", densidadePopulacional2);
    printf("PIB per capita: %f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação do primeiro atributo
    printf("\nComparação das cartas\n");
    printf("Escolha o primeiro atributo para comparação:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. PIB Per Capita\n");
    printf("5. Densidade Populacional\n");
    printf("6. Numero de Pontos Turisticos\n");
    printf("7. Super Poder\n");
    printf("Digite o número da opção: \n");
    scanf(" %c", &comparacao1);

    // Comparação com base no atributo escolhido
    switch (comparacao1)
    {
    // Comparação da população
    case '1':
        printf("Escolhido: Populacao\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        strcpy(nomeAtributo1, "Populacao"); // strcpy é usado para guardar o nome do atributo na variável, aqui usado para exibir nos resultados!
        break;
        // Comparação da área
    case '2':
        printf("Escolhido: Area\n");
        resultado1 = area1 > area2 ? 1 : 0;
        strcpy(nomeAtributo1, "Area");
        break;
    // Comparação do PIB
    case '3':
        printf("Escolhido: PIB\n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        strcpy(nomeAtributo1, "PIB");
        break;
    // Comparação do PIB per capita
    case '4':
        printf("Escolhido: PIB Per Capita\n");
        resultado1 = pibPerCapita1 > pibPerCapita2 ? 1 : 0;
        strcpy(nomeAtributo1, "PIB Per Capita");
        break;
    // Comparação da densidade populacional
    case '5':
        printf("Escolhido: Densidade Populacional\n");
        resultado1 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
        strcpy(nomeAtributo1, "Densidade Populacional");
        break;
    // Comparação do número de pontos turísticos
    case '6':
        printf("Escolhido: Numero de Pontos Turisticos\n");
        resultado1 = nPontosTuristicos1 > nPontosTuristicos2 ? 1 : 0;
        strcpy(nomeAtributo1, "Numero de Pontos Turisticos");
        break;
    // Comparação do super poder
    case '7':
        printf("Escolhido: Super Poder\n");
        resultado1 = superPoder1 > superPoder2 ? 1 : 0;
        strcpy(nomeAtributo1, "Super Poder");
        break;
    default:
        printf("Opção inválida. Por favor, escolha um número de 1 a 7.\n");
        break;
    }

    // Comparação do segundo atributo
    printf("Escolha o segundo atributo para comparação:\n");
    printf("Certifique-se de escolher um atributo diferente do primeiro!\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. PIB Per Capita\n");
    printf("5. Densidade Populacional\n");
    printf("6. Numero de Pontos Turisticos\n");
    printf("7. Super Poder\n");
    printf("Digite o número da opção: \n");
    scanf(" %c", &comparacao2);
    if (comparacao1 == comparacao2)
    {
        printf("Você escolheu o mesmo atributo");
        return 1;
    }
    switch (comparacao2)
    {
    // Comparação da população
    case '1':
        printf("Escolhido: Populacao\n");
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        strcpy(nomeAtributo2, "Populacao");
        break;
    // Comparação da área
    case '2':
        printf("Escolhido: Area\n");
        resultado2 = area1 > area2 ? 1 : 0;
        strcpy(nomeAtributo2, "Area");
        break;
    // Comparação do PIB
    case '3':
        printf("Escolhido: PIB\n");
        resultado2 = pib1 > pib2 ? 1 : 0;
        strcpy(nomeAtributo2, "PIB");
        break;
    // Comparação do PIB per capita
    case '4':
        printf("Escolhido: PIB Per Capita\n");
        resultado2 = pibPerCapita1 > pibPerCapita2 ? 1 : 0;
        strcpy(nomeAtributo2, "PIB Per Capita");
        break;
    // Comparação da densidade populacional
    case '5':
        printf("Escolhido: Densidade Populacional\n");
        resultado2 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
        strcpy(nomeAtributo2, "Densidade Populacional");
        break;
    // Comparação do número de pontos turísticos
    case '6':
        printf("Escolhido: Numero de Pontos Turisticos\n");
        resultado2 = nPontosTuristicos1 > nPontosTuristicos2 ? 1 : 0;
        strcpy(nomeAtributo2, "Numero de Pontos Turisticos");
        break;
    // Comparação do super poder
    case '7':
        printf("Escolhido: Super Poder\n");
        resultado2 = superPoder1 > superPoder2 ? 1 : 0;
        strcpy(nomeAtributo2, "Super Poder");
        break;
    default:
        printf("Opção inválida. Por favor, escolha um número de 1 a 7.\n");
        break;
    }

    // Resultados
    printf("\nResultado Final:\n");
    printf("Atributo 1: %s\n Atributo 2: %s\n", nomeAtributo1, nomeAtributo2);
    if (resultado1 + resultado2 == 2)
        printf("Carta 1 venceu!\n");
    else if (resultado1 + resultado2 == 0)
        printf("Carta 2 venceu!\n");
    else
        printf("Empate!\n");

    return 0;
}