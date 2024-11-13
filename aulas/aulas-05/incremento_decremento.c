#include <stdio.h>

int main() {
   //Entrada
    int numero;

    printf("Entre com um número inteiro: ");
    int deu_certo = scanf("%i", &numero);

    //Processamento
    //numero = numero + 1;
    int incremento = numero;
    int pos_incremento = numero;
    int pre_incremento = ++incremento;
    

    //numero = numero - 1;
    int decremento = numero;
    int pos_decremento = numero;
    int pre_decremento = --decremento;
    
    //Saida
    printf("O número incrementado é %i\n", incremento);
    printf("O número pre-incrementado é %i, e o pos-incremento é %i\n", pos_incremento, pre_incremento);
    printf("O número decrementado é %i\n", decremento);
    printf("O número pre-decrementado é %i, e o pos-decremento é %i\n", pre_decremento, pos_decremento);
    
    return 0;
}
