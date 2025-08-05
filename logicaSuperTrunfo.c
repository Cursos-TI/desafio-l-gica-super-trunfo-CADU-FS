#include <stdio.h>
#include <string.h>

int main() {
  // Declaração das variáveis da primeira carta.
  char estado;
  char codigo[4];
  char cidade[20];
  int pontos_turis;
  float area, pib, densidade, pib_per_capita, poder;
  unsigned long int populacao;

  // Declaração das variáveis da segunda carta
  char estado2;
  char codigo2[4];
  char cidade2[20];
  int pontos_turis2;
  float area2, pib2, densidade2, pib_per_capita2, poder2;
  unsigned long int populacao2;

  // Coleta e armazenamento dos dados da primeira carta do usuário.
  printf("Digite uma letra (entre 'A' e 'H') que represente um Estado: ");
  scanf("%c", &estado);
  printf("Digite um número para o código do Estado: ");
  scanf("%s", codigo);
  printf("Digite o nome de uma cidade: ");
  scanf("%s", cidade);
  printf("Digite a população dessa cidade: ");
  scanf("%lu", &populacao);
  printf("Digite a área (em Km²) dessa cidade: ");
  scanf("%f", &area);
  printf("Digite o PIB dessa cidade: ");
  scanf("%f", &pib);
  printf("Digite quantos pontos turísticos essa cidade possui: ");
  scanf("%i", &pontos_turis);

  printf("\n");
  
  // Coleta e armazenamento dos dados da segunda carta do usuário.
  printf("Agora adicione os dados da segunda carta.\n");
  scanf("%*c");
  printf("Digite uma letra (entre 'A' e 'H') que represente um Estado: ");
  scanf("%c", &estado2);
  printf("Digite um número para o código do Estado: ");
  scanf("%s", codigo2);
  printf("Digite o nome de uma cidade: ");
  scanf("%s", cidade2);
  printf("Digite a população dessa cidade: ");
  scanf("%lu", &populacao2);
  printf("Digite a área (em Km²) dessa cidade: ");
  scanf("%f", &area2);
  printf("Digite o PIB dessa cidade: ");
  scanf("%f", &pib2);
  printf("Digite quantos pontos turísticos essa cidade possui: ");
  scanf("%i", &pontos_turis2);

  // Cálculo da densidade das duas cartas
  densidade = (float)populacao / area;
  densidade2 = (float)populacao2 / area2;

  // Cálculo do PIB per capita das duas cidades
  pib_per_capita = pib / (float)populacao;
  pib_per_capita2 = pib2 / (float)populacao2;

  // Cálculo do super poder das duas cartas
  poder = (float)pontos_turis + area + pib + pib_per_capita + (float)populacao + (1 / densidade);
  poder2 = (float)pontos_turis2 + area2 + pib2 + pib_per_capita2 + (float)populacao2 + (1 / densidade2);

  printf("\n");

  // Impressão dos dados da primeira carta do usuário.
  printf("Carta: 1\n");
  printf("Estado: %c\n", estado);
  printf("Código: %c%s\n", estado, codigo);
  printf("Nome da Cidade: %s\n", cidade);
  printf("População: %lu\n", populacao);
  printf("Área: %.2f Km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Número de ponto turísticos: %i\n", pontos_turis);
  printf("Densidade populacional: %.2f hab/km²\n", densidade);
  printf("PIB per capita: %.2f reais\n", pib_per_capita);

  printf("\n");

  // Impressão dos dados da segunda carta do usuário.
  printf("Carta: 2\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %c%s\n", estado2, codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f Km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de ponto turísticos: %i\n", pontos_turis2);
  printf("Densidade populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per capita: %.2f reais\n", pib_per_capita2);

  printf("\n");

  // Verificação e impressão da carta vencedora
  printf("Atributo para comparação: População.\n");
  if(populacao > populacao2) {
    printf("Carta 1 venceu! a população %lu é maior que %lu.\n", populacao, populacao2);
  } else {
    if(populacao < populacao2) {
      printf("Carta 2 venceu! a população %lu é maior que %lu.\n", populacao2, populacao);
    } else {
      printf("Empate! As populações são iguais: %lu.\n", populacao);
    }
  }

  return 0;
}