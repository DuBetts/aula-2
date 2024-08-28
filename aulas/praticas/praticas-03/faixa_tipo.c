#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
  printf("O tipo 'char' aceita valores entre %i e %i\n.\n", CHAR_MIN, CHAR_MAX);
  printf("O tipo 'int' aceita valores entre %i e %i\n.\n", INT_MIN, INT_MAX);
  printf("O tipo 'float' aceita valores entre %E e %E\n.\n", FLT_MIN, FLT_MAX));
  printf("O tipo 'double' aceita valores entre %E e %E\n.\n", DBL_MIN, DBL_MAX));
  
  return 0;
}
