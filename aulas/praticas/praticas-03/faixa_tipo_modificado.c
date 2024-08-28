#include <limits.h>
#include <float.h>

int main() {
  printf("O tipo 'unsigned char' aceita valores entre %i e %i\n.", 0, UCHAR_MAX);
  printf("O tipo 'short int' aceita valores entre %i e %i\n.", SHRT_MIN, SHRT_MAX);
  printf("O tipo 'unsigned short int' aceita valores entre %i e %lu.\n", 0, USHRT_MAX);
  printf("O tipo 'long int' aceita valores entre %li e %li\n.", LONG_MIN, LONG_MAX);
  printf("O tipo 'unsigned long int' aceita valores entre %i e %li\n.\n", 0, ULONG_MAX);
  printf("O tipo 'double' aceita valores entre %LE e %LE\n.", LDBL_MIN, LDBL_MAX);


  return 0;
}