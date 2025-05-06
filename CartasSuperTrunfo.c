#include <stdio.h> // Início com código base.


int main(){
    char estado[10]; //aqui defini a variáveis da primeira carta
   char codigo[10];
   char cidade[50];
   float populacao ;
   int pontos_turisticos;
   float area;
   float PIB;

   char estado2[10]; // aqui defini as variáveis da segunda carta
   char codigo2[10];
   char cidade2[50];
   float populacao2;
   int pontos_turisticos2;
   float area2;
   float PIB2;


   // cadastro da carta 1
   printf("Digite seu Estado: \n"); // aqui utilizei printf para solicitar ao usuário que insira os dados de cada carta
   scanf("%s", estado); // utilizei scanf para ler os dados que o usuário inseriu

   printf("Código da carta: \n");
   scanf("%s", codigo);

   printf("Nome da cidade: \n");
   scanf("%s", cidade);

   printf("Total de habitantes: \n");
   scanf("%f", &populacao);

   printf("Pontos turísticos: \n");
   scanf("%d", &pontos_turisticos); 
   
   printf("Área (km²): \n");
   scanf("%f", &area);

   printf("PIB: \n");
   scanf("%f", &PIB);


   // Cadastro da carta 2
   printf("Digite seu Estado: \n");
   scanf("%s", estado2);

   printf("Código da carta: \n");
   scanf("%s", codigo2);

   printf("Nome da cidade: \n");
   scanf("%s", cidade2);

   printf("Total de habitantes: \n");
   scanf("%f", &populacao2);

   printf("Pontos turísticos: \n");
   scanf("%d", &pontos_turisticos2);

   printf("Área (km²): \n");
   scanf("%f", &area2);

   printf("PIB: \n");
   scanf("%f", &PIB2);


   //impressão das cartas: 
   printf("\nCarta 1!\n");
   printf("O estado é: %s \n", estado);
   printf("Código da carta: %s%s \n", estado, codigo); // utilizei duas vriáveis juntas de string para gerar o código da carta ex: A01, B02.
   printf("Cidade: %s\n", cidade);
   printf("Habitantes: %0.f\n", populacao);
   printf("Pontos Turísticos: %d\n", pontos_turisticos);
   printf("Área: %.2f\n", area);
   printf("PIB: %.2f\n", PIB);

   // Impressão de dados da segunda carta
   printf("\nCarta 2!\n");
   printf("O estado é: %s \n", estado2);
   printf("Código da carta: %s%s \n", estado2, codigo2);
   printf("Cidade: %s\n", cidade2);
   printf("Habitantes: %0.f\n", populacao2);
   printf("Pontos Turísticos: %d\n", pontos_turisticos2);
   printf("Área: %.2f\n", area2);
   printf("PIB: %.2f\n", PIB2);



    return 0;
}