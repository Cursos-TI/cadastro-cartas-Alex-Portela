#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// Organização da cartas.
// Eu criei manualmente cada carta no bloco de notas e depois lancei aqui para facilitar meus estudos.
/*
Organização das Cartas referentes ao Brasil
ESTADO A — SÃO PAULO
A01 - São Paulo
A02 - Campinas
A03 - Santos
A04 - Ribeirão Preto

ESTADO B — RIO DE JANEIRO
B01 - Rio de Janeiro
B02 - Niterói
B03 - Petrópolis
B04 - Angra dos Reis

ESTADO C — MINAS GERAIS
C01 - Belo Horizonte
C02 - Uberlândia
C03 - Ouro Preto
C04 - Juiz de Fora

ESTADO D — BAHIA
D01 - Salvador
D02 - Feira de Santana
D03 - Porto Seguro
D04 - Vitória da Conquista

ESTADO E — PARANÁ
E01 - Curitiba
E02 - Londrina
E03 - Foz do Iguaçu
E04 - Maringá

ESTADO F — PERNAMBUCO
F01 - Recife
F02 - Olinda
F03 - Caruaru
F04 - Petrolina

ESTADO G — CEARÁ
G01 - Fortaleza
G02 - Juazeiro do Norte
G03 - Sobral
G04 - Caucaia

ESTADO H — RIO GRANDE DO SUL
H01 - Porto Alegre
H02 - Caxias do Sul
H03 - Gramado
H04 - Pelotas
*/

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades

char estado1;     // Nome de cada estado selecionado
char codigo1[4];  // Código de cada cidade
char cidade1[50]; // Nome de cada cidade
int populacao1;   // População de cada cidade (segundo IBGE)
float area1;      // Área total de cada cidade (segundo IBGE)
float pib1;       // PIB de cada cidade (segundo IBGE)
int pontosTuristicos1;  // Quantidade de pontos turísticos (média)

  // Área para entrada de dados

    printf("... CADASTRO DA CARTA 1 ...\n\n");

    printf("Digite o código do estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta de cada cidade: \n");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %49[^\n]", cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em  em quilômetros quadrados (km2): \n");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhões de reais: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

  // Área para exibição dos dados da cidade
printf("\n=== CARTA 1 ===\n");

printf("Estado: %c\n", estado1);
printf("Código da Cidade: %s\n", codigo1);
printf("Nome da Cidade: %s\n", cidade1);
printf("Populacao: %d habitantes\n", populacao1);
printf("Área: %.2f km2\n", area1);
printf("PIB: %.2f bilhoes de reais\n", pib1);
printf("Quantidade Aproximada de Pontos Turísticos: %d\n", pontosTuristicos1);


return 0;
} 
