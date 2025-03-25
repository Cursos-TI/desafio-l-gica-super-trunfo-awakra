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
       int escolha_menu, cidade_carta1, pontos_turisticos_carta1, cidade_carta2, pontos_turisticos_carta2;
       unsigned long int populacao_carta1, populacao_carta2;
       float area_carta1, pib_carta1, densidade_pop_carta1, pib_per_capita_carta1, area_carta2, pib_carta2, densidade_pop_carta2, pib_per_capita_carta2, super_poder_carta1, super_poder_carta2;

       printf("---------------DESAFIO SUPER TRUNFO - AVENTUREIRO---------------\n");
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
       printf("Qual atributo deseja comparar:\n");
       printf("1. Populacao\n");
       printf("2. Area\n");
       printf("3. PIB\n");
       printf("4. Pontos turisticos\n");
       printf("5. Densidade populacional\n");
       printf("6. PIB per capita\n");
       printf("7. Super-poder\n");
       scanf("%d", &escolha_menu);
       switch (escolha_menu)
       {
       case 1:
              printf("---------------POPULACAO---------------\n");
              if (populacao_carta1 > populacao_carta2)
              {
                     printf("Carta %c%d\nPopulacao: %lu\nCarta %c%d\nPopulacao: %lu\nCarta 1 venceu!\n", estado_carta1, cidade_carta1, populacao_carta1, estado_carta2, cidade_carta2, populacao_carta2);
              }
              else if (populacao_carta2 > populacao_carta1)
              {
                     printf("Carta %c%d\nPopulacao: %lu\nCarta %c%d\nPopulacao: %lu\nCarta 2 venceu!\n", estado_carta1, cidade_carta1, populacao_carta1, estado_carta2, cidade_carta2, populacao_carta2);
              }
              else
              {
                     printf("Empate!\n");
              }
              break;
       case 2:
              printf("---------------AREA---------------\n");
              if (area_carta1 > area_carta2)
              {
                     printf("Carta %c%d\nArea: %.2f\nCarta %c%d\nArea: %.2f\nCarta 1 venceu!\n", estado_carta1, cidade_carta1, area_carta1, estado_carta2, cidade_carta2, area_carta2);
              }
              else if (area_carta2 > area_carta1)
              {
                     printf("Carta %c%d\nArea: %.2f\nCarta %c%d\nArea: %.2f\nCarta 2 venceu!\n", estado_carta1, cidade_carta1, area_carta1, estado_carta2, cidade_carta2, area_carta2);
              }
              else
              {
                     printf("Empate!\n");
              }
              break;
       case 3:
              printf("---------------PIB---------------\n");
              if (pib_carta1 > pib_carta2)
              {
                     printf("Carta %c%d\nPIB: %.2f\nCarta %c%d\nPIB: %.2f\nCarta 1 venceu!\n", estado_carta1, cidade_carta1, pib_carta1, estado_carta2, cidade_carta2, pib_carta2);
              }
              else if (pib_carta2 > pib_carta1)
              {
                     printf("Carta %c%d\nPIB: %.2f\nCarta %c%d\nPIB: %.2f\nCarta 2 venceu!\n", estado_carta1, cidade_carta1, pib_carta1, estado_carta2, cidade_carta2, pib_carta2);
              }
              else
              {
                     printf("Empate!\n");
              }
              break;
       case 4:
              printf("---------------PONTOS TURISTICOS---------------\n");
              if (pontos_turisticos_carta1 > pontos_turisticos_carta2)
              {
                     printf("Carta %c%d\nPontos Turisticos: %d\nCarta %c%d\nPontos Turisticos: %d\nCarta 1 venceu!\n", estado_carta1, cidade_carta1, pontos_turisticos_carta1, estado_carta2, cidade_carta2, pontos_turisticos_carta2);
              }
              else if (pontos_turisticos_carta2 > pontos_turisticos_carta1)
              {
                     printf("Carta %c%d\nPontos Turisticos: %d\nCarta %c%d\nPontos Turisticos: %d\nCarta 2 venceu!\n", estado_carta1, cidade_carta1, pontos_turisticos_carta1, estado_carta2, cidade_carta2, pontos_turisticos_carta2);
              }
              else
              {
                     printf("Empate!\n");
              }
              break;
       case 5:
              printf("---------------DENSIDADE POPULACIONAL---------------\n");
              if (densidade_pop_carta1 < densidade_pop_carta2)
              {
                     printf("Carta %c%d\nDensidade Populacional: %.2f\nCarta %c%d\nDensidade Populacional: %.2f\nCarta 1 venceu!\n", estado_carta1, cidade_carta1, densidade_pop_carta1, estado_carta2, cidade_carta2, densidade_pop_carta2); // Menor densidade vence
              }
              else if (densidade_pop_carta2 < densidade_pop_carta1)
              {
                     printf("Carta %c%d\nDensidade Populacional: %.2f\nCarta %c%d\nDensidade Populacional: %.2f\nCarta 2 venceu!\n", estado_carta1, cidade_carta1, densidade_pop_carta1, estado_carta2, cidade_carta2, densidade_pop_carta2); // Menor densidade vence
              }
              else
              {
                     printf("Empate!\n");
              }
              break;
       case 6:
              printf("---------------PIB PER CAPITA---------------\n");
              if (pib_per_capita_carta1 > pib_per_capita_carta2)
              {
                     printf("Carta %c%d\nPIB per capita: %.2f\nCarta %c%d\nPIB per capita: %.2f\nCarta 1 venceu!\n", estado_carta1, cidade_carta1, pib_per_capita_carta1, estado_carta2, cidade_carta2, pib_per_capita_carta2);
              }
              else if (pib_per_capita_carta2 > pib_per_capita_carta1)
              {
                     printf("Carta %c%d\nPIB per capita: %.2f\nCarta %c%d\nPIB per capita: %.2f\nCarta 2 venceu!\n", estado_carta1, cidade_carta1, pib_per_capita_carta1, estado_carta2, cidade_carta2, pib_per_capita_carta2);
              }
              else
              {
                     printf("Empate!\n");
              }
              break;
       case 7:
              printf("---------------SUPER PODER---------------\n");
              if (super_poder_carta1 > super_poder_carta2)
              {
                     printf("Carta %c%d\nSuper-Poder: %.2f\nCarta %c%d\nSuper-Poder: %.2f\nCarta 1 venceu!\n", estado_carta1, cidade_carta1, super_poder_carta1, estado_carta2, cidade_carta2, super_poder_carta2);
              }
              else if (super_poder_carta2 > super_poder_carta1)
              {
                     printf("Carta %c%d\nSuper-Poder: %.2f\nCarta %c%d\nSuper-Poder: %.2f\nCarta 2 venceu!\n", estado_carta1, cidade_carta1, super_poder_carta1, estado_carta2, cidade_carta2, super_poder_carta2);
              }
              else
              {
                     printf("Empate!\n");
              }
              break;
       default:
              printf("Opcao invalida!\n");
              break;
       }
       return 0;
}