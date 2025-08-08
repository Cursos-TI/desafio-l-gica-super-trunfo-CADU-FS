#include <stdio.h>

int main() {
  // Declaração das variáveis da primeira carta.
  char estado;
  char codigo[4];
  char cidade[20];
  int pontos_turis, populacao;
  float area, pib, densidade;

  // Declaração das variáveis da segunda carta
  char estado2;
  char codigo2[4];
  char cidade2[20];
  int pontos_turis2, populacao2;
  float area2, pib2, densidade2;

  // Variáveis para selecionar os atributos a serem comparados
  int escolha_atributo, escolha_atributo2;

  // Variável que armazenará a soma de dois atributos.
  double soma_atributo = 0, soma_atributo2 = 0;

  // Coleta e armazenamento dos dados da primeira carta do usuário.
  printf("Digite uma letra (entre 'A' e 'H') que represente um Estado: ");
  scanf("%c", &estado);
  printf("Digite um número para o código do Estado: ");
  scanf("%s", codigo);
  printf("Digite o nome de uma cidade: ");
  scanf("%s", cidade);
  printf("Digite a população dessa cidade: ");
  scanf("%i", &populacao);
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
  scanf("%i", &populacao2);
  printf("Digite a área (em Km²) dessa cidade: ");
  scanf("%f", &area2);
  printf("Digite o PIB dessa cidade: ");
  scanf("%f", &pib2);
  printf("Digite quantos pontos turísticos essa cidade possui: ");
  scanf("%i", &pontos_turis2);

  // Cálculo da densidade populacional das duas cartas
  densidade = (float)populacao / area;
  densidade2 = (float)populacao2 / area2;

  printf("\n");

  // Escolha do primeiro atributo a ser comparado
  printf("Escolha o primeiro atributo a ser comparado:\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Número de pontos turísticos\n");
  printf("5. Densidade demográfica\n");
  printf("Escolha: ");
  scanf("%i", &escolha_atributo);

  // Verificação de opção errada do primeiro atributo escolhida pelo usuário
  if(!(escolha_atributo >= 1 && escolha_atributo <= 5)) {
    printf("Opção inválida!");
    return 1;
  }

  printf("\n");

  // Escolha do segundo atributo a ser comparado
  // O switch recebe a escolha do primeiro atributo como entrada para que o atributo já escolhido não apareça como opção novamente
  // Alguns cálculos são feitos para que o segundo atributo siga a mesma lógica do primeiro atributo, e, dessa forma, minimize e facilite a comparação posteriormente
  printf("Escolha o segundo atributo a ser comparado:\n");
  switch(escolha_atributo) {
    case 1:
      printf("1. Área\n");
      printf("2. PIB\n");
      printf("3. Número de pontos turísticos\n");
      printf("4. Densidade demográfica\n");
      printf("Escolha: ");
      scanf("%i", &escolha_atributo2);

      escolha_atributo2 += 1;

      break;
    case 2:
      printf("1. População\n");
      printf("2. PIB\n");
      printf("3. Número de pontos turísticos\n");
      printf("4. Densidade demográfica\n");
      printf("Escolha: ");
      scanf("%i", &escolha_atributo2);

      escolha_atributo2 = escolha_atributo2 > 1 ? (escolha_atributo2 + 1) : escolha_atributo2;

      break;
    case 3:
      printf("1. População\n");
      printf("2. Área\n");
      printf("3. Número de pontos turísticos\n");
      printf("4. Densidade demográfica\n");
      printf("Escolha: ");
      scanf("%i", &escolha_atributo2);

      escolha_atributo2 = escolha_atributo2 > 2 ? (escolha_atributo2 + 1) : escolha_atributo2;

      break;
    case 4:
      printf("1. População\n");
      printf("2. Área\n");
      printf("3. PIB\n");
      printf("4. Densidade demográfica\n");
      printf("Escolha: ");
      scanf("%i", &escolha_atributo2);

      escolha_atributo2 = escolha_atributo2 > 3 ? (escolha_atributo2 + 1) : escolha_atributo2;

      break;
    case 5:
      printf("1. População\n");
      printf("2. Área\n");
      printf("3. PIB\n");
      printf("4. Número de pontos turísticos\n");
      printf("Escolha: ");
      scanf("%i", &escolha_atributo2);

      break;
  }

  // Tratamento de erros da seleção do segundo atributo que burlam a lógica do jogo
  if((escolha_atributo == escolha_atributo2) || !(escolha_atributo2 >= 1 && escolha_atributo2 <= 5)) {
    printf("Opção inválida.\n");
      return 1;
  }

  printf("\n");

  // Compara apenas o atributo selecionado (a PRIMEIRA opção de atributo a ser comparado)
  // A comparação é feita diretamente dentro de cada caso do switch
  printf("Cidade do jogador 1: %s - Cidade do jogador 2: %s.\n", cidade, cidade2);
  printf("*** Rodada 1! ***\n");

  switch(escolha_atributo) {
    case 1:
      printf("Atributo a ser comparado: População.\n");
      printf("População da cidade 1: %i - População da cidade 2: %i.\n", populacao, populacao2);
      soma_atributo += (float)populacao;
      soma_atributo2 += (float)populacao2;

      if(populacao == populacao2) {
        printf("### Empate! ###");
      } else if(populacao > populacao2) {
        printf("### Carta 1 venceu! ###");
      } else {
        printf("### Carta 2 venceu! ###");
      }

      break;
    case 2:
      printf("Atributo a ser comparado: Área.\n");
      printf("Área da cidade 1: %.2f - Área da cidade 2: %.2f.\n", area, area2);
      soma_atributo += area;
      soma_atributo2 += area2;

      if(area == area2) {
        printf("### Empate! ###");
      } else if(area > area2) {
        printf("### Carta 1 venceu! ###");
      } else {
        printf("### Carta 2 venceu! ###");
      }

      break;
    case 3:
      printf("Atributo a ser comparado: PIB.\n");
      printf("PIB da cidade 1: %.2f - PIB da cidade 2: %.2f.\n", pib, pib2);
      soma_atributo += pib;
      soma_atributo2 += pib2;

      if(pib == pib2) {
        printf("### Empate! ###");
      } else if(pib > pib2) {
        printf("### Carta 1 venceu! ###");
      } else {
        printf("### Carta 2 venceu! ###");
      }

      break;
    case 4:
      printf("Atributo a ser comparado: Número de pontos turísticos.\n");
      printf("Número de pontos turísticos da cidade 1: %i - Número de pontos turísticos da cidade 2: %i.\n", pontos_turis, pontos_turis2);
      soma_atributo += (float)pontos_turis;
      soma_atributo2 += (float)pontos_turis2;

      if(pontos_turis == pontos_turis2) {
        printf("### Empate! ###");
      } else if(pontos_turis > pontos_turis2) {
        printf("### Carta 1 venceu! ###");
      } else {
        printf("### Carta 2 venceu! ###");
      }

      break;
    case 5:
      printf("Atributo a ser comparado: Densidade demográfica.\n");
      printf("Densidade demográfica da cidade 1: %.2f - Densidade demográfica da cidade 2: %.2f.\n", densidade, densidade2);
      soma_atributo += densidade;
      soma_atributo2 += densidade2;

      if(densidade == densidade2) {
        printf("### Empate! ###");
      } else if(densidade < densidade2) {
        printf("### Carta 1 venceu! ###");
      } else {
        printf("### Carta 2 venceu! ###");
      }

      break;
  }

  printf("\n\n");

  // Compara apenas o atributo selecionado (a SEGUNDA opção de atributo a ser comparado)
  // A comparação é feita diretamente dentro de cada caso do switch
  printf("*** Rodada 2! ***\n");
  switch(escolha_atributo2) {
    case 1:
      printf("Atributo a ser comparado: População.\n");
      printf("População da cidade 1: %i - População da cidade 2: %i.\n", populacao, populacao2);
      soma_atributo += (float)populacao;
      soma_atributo2 += (float)populacao2;

      if(populacao == populacao2) {
        printf("### Empate! ###");
      } else if(populacao > populacao2) {
        printf("### Carta 1 venceu! ###");
      } else {
        printf("### Carta 2 venceu! ###");
      }

      break;
    case 2:
      printf("Atributo a ser comparado: Área.\n");
      printf("Área da cidade 1: %.2f - Área da cidade 2: %.2f.\n", area, area2);
      soma_atributo += area;
      soma_atributo2 += area2;

      if(area == area2) {
        printf("### Empate! ###");
      } else if(area > area2) {
        printf("### Carta 1 venceu! ###");
      } else {
        printf("### Carta 2 venceu! ###");
      }

      break;
    case 3:
      printf("Atributo a ser comparado: PIB.\n");
      printf("PIB da cidade 1: %.2f - PIB da cidade 2: %.2f.\n", pib, pib2);
      soma_atributo += pib;
      soma_atributo2 += pib2;

      if(pib == pib2) {
        printf("### Empate! ###");
      } else if(pib > pib2) {
        printf("### Carta 1 venceu! ###");
      } else {
        printf("### Carta 2 venceu! ###");
      }

      break;
    case 4:
      printf("Atributo a ser comparado: Número de pontos turísticos.\n");
      printf("Número de pontos turísticos da cidade 1: %i - Número de pontos turísticos da cidade 2: %i.\n", pontos_turis, pontos_turis2);
      soma_atributo += (float)pontos_turis;
      soma_atributo2 += (float)pontos_turis2;

      if(pontos_turis == pontos_turis2) {
        printf("### Empate! ###");
      } else if(pontos_turis > pontos_turis2) {
        printf("### Carta 1 venceu! ###");
      } else {
        printf("### Carta 2 venceu! ###");
      }

      break;
    case 5:
      printf("Atributo a ser comparado: Densidade demográfica.\n");
      printf("Densidade demográfica da cidade 1: %.2f - Densidade demográfica da cidade 2: %.2f.\n", densidade, densidade2);
      soma_atributo += densidade;
      soma_atributo2 += densidade2;

      if(densidade == densidade2) {
        printf("### Empate! ###");
      } else if(densidade < densidade2) {
        printf("### Carta 1 venceu! ###");
      } else {
        printf("### Carta 2 venceu! ###");
      }

      break;
  }

  printf("\n\n");

  // Compara apenas a soma dos atributos já selecionados para a TERCEIRA rodada
  printf("*** Rodada 3! ***\n");
  printf("Atributo a ser comparado: Soma de atributos.\n");
  printf("Soma dos atributos do jogador 1: %.2f - Soma dos atributos do jogador 2: %.2f\n", soma_atributo, soma_atributo2);

  if(soma_atributo == soma_atributo2) {
        printf("### Empate! ###");
      } else if(soma_atributo > soma_atributo2) {
        printf("### Carta 1 venceu! ###");
      } else {
        printf("### Carta 2 venceu! ###");
      }

  return 0;
}