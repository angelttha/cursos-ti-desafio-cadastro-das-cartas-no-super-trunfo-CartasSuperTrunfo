#include <stdio.h>

int main() {
  printf("SUPER TRUNFO\n");
  printf("PAÍSES\n");
  printf("______\n");

  //Primeira carta
   char pais [50] = "Brasil";
   char codigo_da_carta [50] = "A01";
   char nome_do_estado[50] = "São Paulo";
   int populacao = 114500000;
   float area_em_km = 1521;
   float pib  = 271975123100;
   int numero_de_pontos_turisticos = 60;
   float densidade_populacional = 752826;
   float pib_per_capita = 7270;

     int media;
       media = densidade_populacional / pib_per_capita;

   printf("País: %s\n", pais);
   printf("Código da Carta: %s\n", codigo_da_carta);
   printf("Nome do Estado: %s\n", nome_do_estado);
   printf("População: %d\n", populacao);
   printf("Área em Km2: %.2f\n",area_em_km);
   printf("PIB: %.2f\n", pib);
   printf("Números de Pontos Túristicos: %d\n", numero_de_pontos_turisticos);
     //Média
       printf("Densidade Populacional: %f\n", densidade_populacional);
       printf("PIB Per Capita: %f\n", pib_per_capita);
         printf("Densidade Populacional e PIB Per Capita: %d\n", media);

   printf("_______\n");   
   
     //Segunda carta
      char pais2 [50] = "Estados Unidos";
      char codigo_da_carta2 [50] = "B05";
      char nome_do_estado2[50] = "Nova York";
      int populacao2 = 825800000;
      float area_em_km2 = 7838;
      float pib2  = 20000000000000;
      int numero_de_pontos_turisticos2 = 75;
      float densidade_populacional2 = 752826;
      float pib_per_capita2 = 7270;
   
        int media2;
          media2 = densidade_populacional2 / pib_per_capita2;
   
      printf("País: %s\n", pais2);
      printf("Código da Carta: %s\n", codigo_da_carta2);
      printf("Nome do Estado: %s\n", nome_do_estado2);
      printf("População: %d\n", populacao2);
      printf("Área em Km2: %.2f\n",area_em_km2);
      printf("PIB: %.2f\n", pib2);
      printf("Números de Pontos Túristicos: %d\n", numero_de_pontos_turisticos2);
        //Média
          printf("Densidade Populacional: %f\n", densidade_populacional2);
          printf("PIB Per Capita: %f\n", pib_per_capita2);
            printf("Densidade Populacional e PIB Per Capita: %d\n", media2);
   
      printf("_______\n"); 
    

    return 0;
}
