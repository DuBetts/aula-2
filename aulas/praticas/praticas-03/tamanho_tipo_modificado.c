#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
  printf("O tipo 'short int' ocupa %lu byte(s) na memória.\n", sizeof(short int));
  printf("O tipo 'long int' ocupa %lu byte(s) na memória.\n", sizeof(long int));
  printf("O tipo 'long double' ocupa %lu byte(s) na memória.\n", sizeof(long double));

  return 0;
}
