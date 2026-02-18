#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
//Definindo variáveis
// CARTA 01 //
  char cidade1 [50];
  char estado1 [3];
  char codigo1 [5];
  int populacao1;
  float area1;
  float pib1;
  int ponto1;

// CARTA 02 //
  char cidade2 [50];
  char estado2 [3];
  char codigo2 [5];
  int populacao2;
  float area2;
  float pib2;
  int ponto2;

// Área para entrada de dados
///// Dados CARTA 01 /////
  printf ("===Insira os dados da carta 01=== \n");
  
  printf ("UF do Estado ");
  scanf (" %2[^\n]" , estado1);

  printf ("Nome da Cidade ");
  scanf (" %49[^\n]" ,cidade1);
  
  printf ("Digite o código da carta: ");
  scanf  (" %4[^\n]" , codigo1);
  
  printf ("População: ");
  scanf  ("%i" , &populacao1);
  
  printf ("Área: ");
  scanf  ("%f" , &area1);
  
  printf ("PIB: ");
  scanf  ("%f" , &pib1);
  
  printf ("Pontos turísticos: ");
  scanf  ("%i" , &ponto1);

///// Dados CARTA 02 /////
  printf ("\n===Insira os dados da carta 02=== \n");

  printf ("UF do Estado ");
  scanf  (" %2[^\n]" , estado2);

  printf ("Nome da Cidade ");
  scanf  (" %49[^\n]" ,cidade2);
  
  printf ("Digite o código da carta: ");
  scanf  (" %4[^\n]" , codigo2);
  
  printf ("População: ");
  scanf  ("%i" , &populacao2);
  
  printf ("Área: ");
  scanf  ("%f" , &area2);
  
  printf ("PIB: ");
  scanf  ("%f" , &pib2);
  
  printf ("Pontos turisticos: ");
  scanf  ("%i" , &ponto2);

// Área para exibição dos dados da cidade
//CARTA 01
printf ("\n===DADOS DA CARTA 01===\n \n");
printf ("Estado: %s\n" , estado1);
printf ("Cidade: %s\n" , cidade1);
printf ("Código: %s\n" , codigo1);
printf ("População: %d\n" , populacao1);
printf ("Área: %f\n", area1);
printf ("Pib: %f\n" , pib1);
printf ("Pontos turísticos: %d\n", ponto1);

//Dados CARTA 02
printf ("\n===DADOS DA CARTA 02=== \n \n");
printf ("Estado: %s\n" , estado2);
printf ("Cidade: %s\n" , cidade2);
printf ("Código: %s\n" , codigo2);
printf ("População: %d\n" , populacao2);
printf ("Área: %f\n", area2);
printf ("Pib: %f\n" , pib2);
printf ("Pontos turísticos %d\n" , ponto2);

return 0;
} 
