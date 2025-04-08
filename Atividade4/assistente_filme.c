#include <stdio.h>

int main() {
   //variáveis declaradas
   int tipoFilme;
   int escolhaLeve;
   int escolhaIntenso;
   int escolhaTerror;
   int escolhaAcao;

   //Escolha entre leve ou intenso
   printf("Escolher tipo de filme:\n");
   printf("1 - leve\n");
   printf("2 - intenso\n");
   scanf("%d", &tipoFilme);

   if (tipoFilme == 1) {
      printf("Escolha entre comedia ou animacao:\n");
      printf("1 - comedia\n");
      printf("2 - animacao\n");
      scanf("%d", &escolhaLeve);

      if (escolhaLeve == 1) {
            printf("Assistir ao filme Gente Grande\n");
      } else if (escolhaLeve == 2) {
            printf("Assistir ao filme Minecraft\n");
      } else {
            printf("Opcao invalida para filme leve.\n");
      }

   } else if (tipoFilme == 2) {
      printf("Escolha entre terror ou acao:\n");
      printf("1 - terror\n");
      printf("2 - acao\n");
      scanf("%d", &escolhaIntenso);

      if (escolhaIntenso == 1) {
            printf("Escolher entre terror psicologico ou terror sobrenatural:\n");
            printf("1 - terror psicologico\n");
            printf("2 - terror sobrenatural\n");
            scanf("%d", &escolhaTerror);

            if (escolhaTerror == 1) {
               printf("Assistir ao filme Corra.\n");
            } else if (escolhaTerror == 2) {
               printf("Assistir ao filme Annabelle.\n");
            } else {
               printf("Opcao invalida para terror.\n");
            }

      } else if (escolhaIntenso == 2) {
            printf("Escolher entre super-herois e aventura realista:\n");
            printf("1 - Super-Herois\n");
            printf("2 - Aventura Realista\n");
            scanf("%d", &escolhaAcao);

            if (escolhaAcao == 1) {
               printf("Assistir ao filme Vingadores: Ultimato.\n");
            } else if (escolhaAcao == 2) {
               printf("Assistir ao filme Mad Max: Estrada da Fúria.\n");
            } else {
               printf("Opcao invalida para acao.\n");
            }

      } else {
            printf("Opcao invalida para tipo intenso.\n");
      }

   } else {
      printf("Tipo de filme invalido.\n");
   }

   return 0;
}
