#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
       // Definição das variáveis para armazenar as propriedades das cidades
       // Você pode utilizar o código do primeiro desafio

       // Cadastro das Cartas:
       // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
       // utilizando a função scanf para capturar as entradas.
       // utilize o código do primeiro desafio

       // Exemplo:
       // printf("Digite o código da cidade: ");
       // scanf("%s", codigo);
       //
       // (Repita para cada propriedade)

       // Comparação de Cartas:
       // Desenvolva a lógica de comparação entre duas cartas.
       // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

       // Exemplo:
       // if (populacaoA > populacaoB) {
       //     printf("Cidade 1 tem maior população.\n");
       // } else {
       //     printf("Cidade 2 tem maior população.\n");
       // }

       // Exibição dos Resultados:
       // Após realizar as comparações, exiba os resultados para o usuário.
       // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

       // Exemplo:
       // printf("A cidade vencedora é: %s\n", cidadeVencedora);
       char estado_carta1, estado_carta2;
       int cidade_carta1, pontos_turisticos_carta1, cidade_carta2, pontos_turisticos_carta2;
       unsigned long int populacao_carta1, populacao_carta2;
       float area_carta1, pib_carta1, densidade_pop_carta1, pib_per_capita_carta1, area_carta2, pib_carta2, densidade_pop_carta2, pib_per_capita_carta2, super_poder_carta1, super_poder_carta2;

       printf("---------------DESAFIO SUPER TRUNFO - NOVATO---------------\n");
       printf("---------------Inicializando o cadastro da carta 1---------------\n");

       printf("Qual o estado? (Escolha uma letra entre A e H)\n");
       scanf(" %c", &estado_carta1);

       printf("Qual é o número da cidade? (Escolha um número entre 01 e 04)\n");
       scanf("%d", &cidade_carta1);

       printf("Qual é a populacao?\n");
       scanf("%lu", &populacao_carta1);

       printf("Qual é a area em km²?\n");
       scanf("%f", &area_carta1);

       printf("Qual é o PIB em bilhoes de reais?\n");
       scanf("%f", &pib_carta1);

       printf("Qual a quantidade de pontos turisticos?\n");
       scanf("%d", &pontos_turisticos_carta1);

       printf("---------------Inicializando o cadastro da carta 2---------------\n");

       printf("Qual o estado? (Escolha uma letra entre A e H)\n");
       scanf(" %c", &estado_carta2);

       printf("Qual é o número da cidade? (Escolha um número entre 01 e 04)\n");
       scanf("%d", &cidade_carta2);

       printf("Qual é a populacao?\n");
       scanf("%lu", &populacao_carta2);

       printf("Qual é a area em km²?\n");
       scanf("%f", &area_carta2);

       printf("Qual é o PIB em bilhoes de reais?\n");
       scanf("%f", &pib_carta2);

       printf("Qual a quantidade de pontos turisticos?\n");
       scanf("%d", &pontos_turisticos_carta2);

       // Calculando propriedades compostas:
       pib_per_capita_carta1 = (pib_carta1 * 1000000000) / populacao_carta1; // Convertendo PIB para reais
       pib_per_capita_carta2 = (pib_carta2 * 1000000000) / populacao_carta2; // Convertendo PIB para reais
       densidade_pop_carta1 = populacao_carta1 / area_carta1;
       densidade_pop_carta2 = populacao_carta2 / area_carta2;

       // Calculando super-poder:
       super_poder_carta1 = (float)populacao_carta1 + area_carta1 + pib_carta1 + pontos_turisticos_carta1 + pib_per_capita_carta1 + (1.0 / densidade_pop_carta1);
       super_poder_carta2 = (float)populacao_carta2 + area_carta2 + pib_carta2 + pontos_turisticos_carta2 + pib_per_capita_carta2 + (1.0 / densidade_pop_carta2);

       printf("---------------Exibindo os valores das cartas---------------\n");

       printf("Carta 1:\nEstado: %c\nCODIGO: %c%d\nPOPULACAO: %lu\nAREA: %.2f km²\nPIB: %.2f bilhões de reais\nQTD DE PONTOS TURISTICOS: %d\nDENSIDADE POPULACIONAL: %.2f hab/km²\nPIB PER CAPITA: %.2f reais\nSUPER PODER: %.2f\n\n",
              estado_carta1, estado_carta1, cidade_carta1, populacao_carta1, area_carta1, pib_carta1, pontos_turisticos_carta1, densidade_pop_carta1, pib_per_capita_carta1, super_poder_carta1);

       printf("Carta 2:\nEstado: %c\nCODIGO: %c%d\nPOPULACAO: %lu\nAREA: %.2f km²\nPIB: %.2f bilhões de reais\nQTD DE PONTOS TURISTICOS: %d\nDENSIDADE POPULACIONAL: %.2f hab/km²\nPIB PER CAPITA: %.2f reais\nSUPER PODER: %.2f\n\n",
              estado_carta2, estado_carta2, cidade_carta2, populacao_carta2, area_carta2, pib_carta2, pontos_turisticos_carta2, densidade_pop_carta2, pib_per_capita_carta2, super_poder_carta2);

       // Comparando atributos:
       printf("---------------Comparando atributos---------------\n");
       printf("---------------POPULACAO---------------\n");
       if (populacao_carta1 > populacao_carta2)
       {
              printf("Carta 1:\nPopulacao: %lu\nCarta 1 venceu!\n", populacao_carta1);
       }
       else if (populacao_carta2 > populacao_carta1)
       {
              printf("Carta 2:\nPopulacao: %lu\nCarta 2 venceu!\n", populacao_carta2);
       }
       else
       {
              printf("Empate!\n");
       }
       printf("---------------AREA---------------\n");
       if (area_carta1 > area_carta2)
       {
              printf("Carta 1:\nArea: %.2f\nCarta 1 venceu!\n", area_carta1);
       }
       else if (area_carta2 > area_carta1)
       {
              printf("Carta 2:\nArea: %.2f\nCarta 2 venceu!\n", area_carta2);
       }
       else
       {
              printf("Empate!\n");
       }
       printf("---------------PIB---------------\n");
       if (pib_carta1 > pib_carta2)
       {
              printf("Carta 1:\nPIB: %.2f\nCarta 1 venceu!\n", pib_carta1);
       }
       else if (pib_carta2 > pib_carta1)
       {
              printf("Carta 2:\nPIB: %.2f\nCarta 2 venceu!\n", pib_carta2);
       }
       else
       {
              printf("Empate!\n");
       }
       printf("---------------PONTOS TURISTICOS---------------\n");
       if (pontos_turisticos_carta1 > pontos_turisticos_carta2)
       {
              printf("Carta 1:\nPontos Turisticos: %d\nCarta 1 venceu!\n", pontos_turisticos_carta1);
       }
       else if (pontos_turisticos_carta2 > pontos_turisticos_carta1)
       {
              printf("Carta 2:\nPontos Turisticos: %d\nCarta 2 venceu!\n", pontos_turisticos_carta2);
       }
       else
       {
              printf("Empate!\n");
       }
       printf("---------------DENSIDADE POPULACIONAL---------------\n");
       if (densidade_pop_carta1 < densidade_pop_carta2)
       {
              printf("Carta 1:\nDensidade Populacional: %.2f\nCarta 1 venceu!\n", densidade_pop_carta1); // Menor densidade vence
       }
       else if (densidade_pop_carta2 < densidade_pop_carta1)
       {
              printf("Carta 2:\nDensidade Populacional: %.2f\nCarta 2 venceu!\n", densidade_pop_carta2); // Menor densidade vence
       }
       else
       {
              printf("Empate!\n");
       }
       printf("---------------PIB PER CAPITA---------------\n");
       if (pib_per_capita_carta1 > pib_per_capita_carta2)
       {
              printf("Carta 1:\nPIB per capita: %.2f\nCarta 1 venceu!\n", pib_per_capita_carta1);
       }
       else if (pib_per_capita_carta2 > pib_per_capita_carta1)
       {
              printf("Carta 2:\nPIB per capita: %.2f\nCarta 2 venceu!\n", pib_per_capita_carta2);
       }
       else
       {
              printf("Empate!\n");
       }
       printf("---------------SUPER PODER---------------\n");
       printf("Super Poder: %d\n", super_poder_carta1 > super_poder_carta2);
       if (super_poder_carta1 > super_poder_carta2)
       {
              printf("Carta 1:\nSuper-Poder: %.2f\nCarta 1 venceu!\n", super_poder_carta1);
       }
       else if (super_poder_carta2 > super_poder_carta1)
       {
              printf("Carta 2:\nSuper-Poder: %.2f\nCarta 2 venceu!\n", super_poder_carta2);
       }
       else
       {
              printf("Empate!\n");
       }

       return 0;
}
