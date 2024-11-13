#include <stdio.h>

int main() {
    int numero;
    printf("entre com um numero: ");
    int deu_certo = scanf("%i",&numero); 

    int eh_divisivel_por_2 = numero % 2==0; 

    //comando if completo 
    if (eh_divisivel_por_2) {
        printf("o numero %i eh par!\n", numero);
    } else {
        printf("o numero %i eh impar\n", numero);
    }

    int idade=0;
    printf("entre com a sua idade");
    deu_certo = scanf("%i", &idade);

    //comando if aninhado 
    if (idade < 16) {
        printf("voce não pode votar!\n");
    } else {
        if (idade >= 18 && idade <=70) {
            printf("Voce é obrigado a votar!\n");
        } else {
            printf("Voce não é obrigado a votar!\n");
        }
    }
     float media = 0.0f;
    printf("Entre com a sua media final: ");
    deu_certo = scanf("%f", &media);

    // if encadeado
    if (media >= 9.0f && media <= 10.0f) {
        printf("Sua mencao eh SS\n");
    } else if (media >= 7.0f && media <= 8.9f) {
        printf("Sua mencao eh MS\n");
    } else if (media >= 5.0f && media <= 6.9f) {
        printf("Sua mencao eh MM\n");
    } else if (media >= 3.0f && media <= 4.9f) {
        printf("Sua mencao eh MI\n");
    } else if (media >= 0.1f && media <= 2.9f) {
        printf("Sua mencao eh II\n");
    } else {
        printf("Sua mencao eh SR\n");
    }

    return 0;
    }