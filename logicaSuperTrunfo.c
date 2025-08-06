#include <stdio.h>

int main() {
  // Variável para selecionar o atributo a ser comparado
  int escolha_atributo;

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

  // Cálculo da densidade das duas cartas
  densidade = (float)populacao / area;
  densidade2 = (float)populacao2 / area2;

  printf("\n");

  // Escolha do atributo a ser comparado
  printf("Escolha o atributo a ser comparado:\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Número de pontos turísticos\n");
  printf("5. Densidade demográfica\n");
  printf("Escolha: ");
  scanf("%i", &escolha_atributo);

  printf("\n");

  // Compara apenas o atributo selecionado
  // A comparação é feita diretamente dentro de cada caso do switch
  // Caso a seleção de atributo seja inválida, o programa encerra com um aviso
  switch(escolha_atributo) {
    case 1:
      printf("Cidade do jogador 1: %s - Cidade do jogador 2: %s.\n", cidade, cidade2);
      printf("Atributo a ser comparado: População.\n");
      printf("População da cidade 1: %i - População da cidade 2: %i.\n", populacao, populacao2);

      if(populacao == populacao2) {
        printf("### Empate! ###");
      } else if(populacao > populacao2) {
        printf("### Carta 1 venceu! ###");
      } else {
        printf("### Carta 2 venceu! ###");
      }

      break;
    case 2:
      printf("Cidade do jogador 1: %s - Cidade do jogador 2: %s.\n", cidade, cidade2);
      printf("Atributo a ser comparado: Área.\n");
      printf("Área da cidade 1: %.2f - Área da cidade 2: %.2f.\n", area, area2);

      if(area == area2) {
        printf("### Empate! ###");
      } else if(area > area2) {
        printf("### Carta 1 venceu! ###");
      } else {
        printf("### Carta 2 venceu! ###");
      }

      break;
    case 3:
      printf("Cidade do jogador 1: %s - Cidade do jogador 2: %s.\n", cidade, cidade2);
      printf("Atributo a ser comparado: PIB.\n");
      printf("PIB da cidade 1: %.2f - PIB da cidade 2: %.2f.\n", pib, pib2);

      if(pib == pib2) {
        printf("### Empate! ###");
      } else if(pib > pib2) {
        printf("### Carta 1 venceu! ###");
      } else {
        printf("### Carta 2 venceu! ###");
      }

      break;
    case 4:
      printf("Cidade do jogador 1: %s - Cidade do jogador 2: %s.\n", cidade, cidade2);
      printf("Atributo a ser comparado: Número de pontos turísticos.\n");
      printf("Número de pontos turísticos da cidade 1: %i - Número de pontos turísticos da cidade 2: %i.\n", pontos_turis, pontos_turis2);

      if(pontos_turis == pontos_turis2) {
        printf("### Empate! ###");
      } else if(pontos_turis > pontos_turis2) {
        printf("### Carta 1 venceu! ###");
      } else {
        printf("### Carta 2 venceu! ###");
      }

      break;
    case 5:
      printf("Cidade do jogador 1: %s - Cidade do jogador 2: %s.\n", cidade, cidade2);
      printf("Atributo a ser comparado: Densidade demográfica.\n");
      printf("Densidade demográfica da cidade 1: %.2f - Densidade demográfica da cidade 2: %.2f.\n", densidade, densidade2);

      if(densidade == densidade2) {
        printf("### Empate! ###");
      } else if(densidade < densidade2) {
        printf("### Carta 1 venceu! ###");
      } else {
        printf("### Carta 2 venceu! ###");
      }

      break;
    default:
      printf("Opção inválida.\n");
  }

  return 0;
}