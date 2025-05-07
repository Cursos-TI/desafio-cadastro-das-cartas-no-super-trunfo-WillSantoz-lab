#include <stdio.h> // Início com código base.


int main(){
    char estado[10]; //aqui defini a variáveis da primeira carta
   char codigo[10];
   char cidade[50];
   float populacao ;
   int pontos_turisticos;
   float area;
   float PIB;
   float densidade_populacional = populacao / area; // aqui defini a variável "densidade_populacional da carta 1, sendo ela a divisão de população por área."
   float PIB_percapita = PIB / populacao; // aqui defini a variável PIB_percapita da carta 1, sendo ela a divisão de PIB por população.

   char estado2[10]; // aqui defini as variáveis da segunda carta
   char codigo2[10];
   char cidade2[50];
   float populacao2;
   int pontos_turisticos2;
   float area2;
   float PIB2;
   float densidade_populacional2 = populacao2 / area2;// defini as mesmas variáveis de operadores matemáticos da carta 1 para a carta 2.
   float PIB_percapita2 = PIB2 / populacao2;


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

   // Cálculos da carta 1
   densidade_populacional = populacao / area; // Adicionei operadores matemáticos calculando os dados da carta 1 após a leitura da entrada dos dados de: "populacao e area".
   PIB_percapita = PIB / populacao;



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

   // Cálculos da carta 1
   densidade_populacional2 = populacao2 / area2; // 
   PIB_percapita2 = PIB2 / populacao2;


   //impressão das cartas: 
   printf("\nCarta 1!\n");
   printf("O estado é: %s \n", estado);
   printf("Código da carta: %s%s \n", estado, codigo); // utilizei duas vriáveis juntas de string para gerar o código da carta ex: A01, B02.
   printf("Cidade: %s\n", cidade);
   printf("Habitantes: %0.f\n", populacao);
   printf("Pontos Turísticos: %d\n", pontos_turisticos);
   printf("Área: %.2f\n", area);
   printf("PIB: %.2f\n", PIB);
   printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
   printf("PIB Percapita: %.2f\n", PIB_percapita);

   // Impressão de dados da segunda carta
   printf("\nCarta 2!\n");
   printf("O estado é: %s \n", estado2);
   printf("Código da carta: %s%s \n", estado2, codigo2);
   printf("Cidade: %s\n", cidade2);
   printf("Habitantes: %0.f\n", populacao2);
   printf("Pontos Turísticos: %d\n", pontos_turisticos2);
   printf("Área: %.2f\n", area2);
   printf("PIB: %.2f\n", PIB2);
   printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
   printf("PIB Percapita: %.2f\n", PIB_percapita2);




    return 0;
}