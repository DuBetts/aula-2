#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
  char caractere = 255;
  int inteiro = caractere;
  float flutuante = inteiro;
  double duplo = flutuante;
  printf("caractere = %i\n", caractere);
  printf("inteiro = %i\n", inteiro);
  printf("flutuante = %.7f\n", flutuante);
  printf("duplo = %.7f\n", duplo);
  duplo = 256.1234567;
  flutuante = (float) duplo;
  inteiro = (int) flutuante;
  caractere = (char) inteiro;
  printf("caractere = %i\n", caractere);
  printf("inteiro = %i\n", inteiro);
  printf("flutuante = %.7f\n", flutuante);
  printf("duplo = %.7f\n", duplo);


  return 0;
}