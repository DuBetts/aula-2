#include <stdio.h>

int main() {
    char tecla = '\0'; // caractere nulo

    printf("Pressione uma tecla: ");
    int deu_certo = scanf("%c", &tecla);
    getchar();
   printf("Voce digitou: %c\n", tecla);

  printf("Pressione uma tecla: ");
  deu_certo = scanf("%c", &tecla);
  getchar(); // limpa o \n
  printf("Voce digitou: %c\n", tecla);

char nome[21];
   printf("entre com um nome: ");
  deu_certo = scanf("%[^\n]s", nome);
  printf("Voce digitou: %s\n", nome);
  return 0;
}
}
