#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
//Definindo variáveis
// CARTA 01 
  char  cidade1;
  char  estado1;
  char  codigo1;
  int   populacao1;
  float area1;
  float pib1;
  int   pontos1;

// CARTA 02
  char  cidade2;
  char  estado2;
  char  codigo2;
  int   populacao2;
  float area2;
  float pib2;
  int   ponto2;

// Área para entrada de dados
// Dados CARTA 01
  printf ("Insira os dados da carta 01 \n");
  printf ("Nome do Estado");
  scanf  ("%[ ^\n]" , estado1);
  printf ("Nome da Cidade");
  scanf  ("%[ ^\n]" ,cidade1);
  printf ("Digite o código da carta:");
  scanf  ("%[ ^\n]" , codigo1);
  printf ("População:");
  scanf  ("%f \n" , populacao1);
  printf ("Área:");
  scanf  ("%f \n" , area1);
  printf ("PIB:");
  scanf  ("%f \n" , pib1);
  printf ("Pontos turisticos:");
  scanf  ("%i \n" , pontos1);

// Dados CARTA 02
  printf ("Insira os dados da carta 02 \n");
  printf ("Nome do Estado");
  scanf  ("%[ ^\n]" , estado2);
  printf ("Nome da Cidade");
  scanf  ("%[ ^\n]" ,cidade2);
  printf ("Digite o código da carta:");
  scanf  ("%[ ^\n]" , codigo2);
  printf ("População:");
  scanf  ("%f \n" , populacao2);
  printf ("Área:");
  scanf  ("%f \n" , area2);
  printf ("PIB:");
  scanf  ("%f \n" , pib2);
  printf ("Pontos turisticos:");
  scanf  ("%i \n" , ponto2);

// Área para exibição dos dados da cidade

return 0;
} 
