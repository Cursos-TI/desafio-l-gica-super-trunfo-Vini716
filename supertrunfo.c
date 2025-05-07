#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
int main() {
    //variaveis para o cadastro da carta 1 e 2
    char Estado1,Estado2;
    char Codigo1[20], Codigo2[20];
    char Cidade1[20], Cidade2[20];
    int Populacao1, Populacao2;
    float Area1, Area2;
    float Pib1, Pib2;
    int Pontos_Turisticos1,Pontos_Turisticos2;
    char tipoComparacao;
  //Cadastro da informação da 1º Carta  
  printf("Digite a letra do estado(A-H):\n");  
  scanf(" %c", &Estado1);

  printf("Digite o nome da cidade:\n");
  scanf(" %s", Cidade1);

  printf("Digite o codigo da cidade:\n");
  scanf(" %s", Codigo1);
  
  printf("Digite a População da cidade:\n");
  scanf("%d", &Populacao1);

  printf("Digite a Area da cidade:\n");
  scanf("%f", &Area1);
  
  printf("Digite o Pib da cidade:\n");
  scanf("%f", &Pib1);

  printf("Digite quantos Pontos Turisticos tem:\n");
  scanf("%d", &Pontos_Turisticos1);

  //Cadastro da informação da 2º Carta

 printf("Digite a letra do estado(A-H):\n");
 scanf(" %c",&Estado2);

 printf("Digite o nome da cidade:\n");
 scanf(" %s", Cidade2);

 printf("Digite o codigo da cidade:\n");
 scanf(" %s", Codigo2);
 
 printf("Digite a População da cidade:\n");
 scanf(" %d",&Populacao2);

 printf("Digite a Area da cidade:\n");
 scanf(" %f",&Area2);
 
 printf("Digite o Pib da cidade:\n");
 scanf(" %f",&Pib2);

 printf("Digite quantos Pontos Turisticos tem:\n");
 scanf(" %d",&Pontos_Turisticos2);
 printf("\n");
//Comparação do atributo de pontos turisticos
if (Pontos_Turisticos1 > Pontos_Turisticos2){
  printf("Carta 1- %d\n Carta 2- %d\n", Pontos_Turisticos1, Pontos_Turisticos2);
  printf("Carta 1 venceu!\n");
} else { 
  printf("Carta 1- %d\n Carta 2- %d\n", Pontos_Turisticos1, Pontos_Turisticos2);
  printf("Carta 2 venceu!\n");
}

}
