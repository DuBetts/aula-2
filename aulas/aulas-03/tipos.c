#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
  printf("tamanho da memoria = %lu byte(s)\n", sizeof(char));
  printf("tamanho do int na memoria = %lu byte(s)\n", sizeof(int));
  printf("tamanho do float na memoria = %lu byte(s)\n", sizeof(float));
  printf("tamanho do double na memoria = %lu byte(s)\n", sizeof(double));
  printf("tamanho do void na memoria = %lu byte(s)\n", sizeof(void));
  printf("\n");
  printf("a faixa de valores do char: de %i a %i\n", CHAR_MIN, CHAR_MAX);
  printf("a faixa de valores do int: de %lu a %i\n", INT_MIN, INT_MAX );
  printf("a faixa de valores do float: de %E a %E\n", FLT_MIN, FLT_MAX );
  printf("a faixa de valores do double: de %E a %E\n", DBL_MIN, DBL_MAX );
  printf("\n");
  char tecla = 'A';
  printf ( "valor da tecla = %c\n", tecla );
  int idade = 25;
  printf ( "valor da idade = %i\n", idade );
  float nota = 8.6f;
  printf ("valor da nota = %f\n", nota );
  double pi = 3.141592653589793; // 12 casa decimais
  printf ("valor de pi = %f\n", pi );
  idade = 50;
  printf ( "valor da idade = %i\n", idade );
  const float PI = 3.14f;
  printf ( "valor da constante pi = %f\n", PI );
 // PI = 3.14156f;  // Deu ruim
  printf("\n");
  printf("tamanho do short int na memoria = %lu byte(s)\n", sizeof(short int));
  printf("tamanho do long int na memoria = %lu byte(s)\n", sizeof(long int));
  printf("tamanho do long double na memoria = %lu byte(s)\n", sizeof(long double));
  printf("\n");
  printf("a faixa de valores do short int: de %i a %i\n", SHRT_MIN, SHRT_MAX );
  printf("a faixa de valores do long int: de %lu a %i\n", LONG_MIN, LONG_MAX );
  printf("a faixa de valores do long double: de %E a %E\n", LDBL_MIN, LDBL_MAX );
    return 0;
}
