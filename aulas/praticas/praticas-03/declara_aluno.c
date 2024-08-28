#include <stdio.h>

int main() {
    char matricula[9] = "22221400"; 
    int idade = 20;
    float altura = 1.84;
    float peso = 80.0;
    char sexo = 'M';

    printf("Matricula: %s\n", matricula);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f m\n", altura);
    printf("Peso: %.1f kg\n", peso);
    printf("Sexo: %c\n", sexo);

    return 0;
}