int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%i", &numero);

    int numero_eh_divisivel_por_2 = numero % 2 == 0;
    if (numero_eh_divisivel_por_2) {
        printf("O numero %i eh par!\n", numero);
    } else {
        printf("O numero %i eh impar!\n", numero);
    }

    int idade;
    printf("Digite sua idade: ");
    scanf("%i", &idade);
    if (idade < 16) {
        printf("Voce nao pode votar mlk!\n");
    } else {
        if (idade < 18 || idade > 70) {
            printf("Voce pode votar parabens por ser velho!\n");
        } else {
            printf("Voce deve votar!\n");
        }
    }

    float media;
    printf("Digite sua media final: ");
    scanf("%f", &media);

    if (media == 0.0f) {
        printf("Sua mencao eh 'SR'.\n");
    } else if (media < 5.0f) {
        printf("Sua mencao eh 'MI'.\n");
    } else if (media < 7.0f) {
        printf("Sua mencao eh 'MM'.\n");
    } else if (media < 9.0f) {
        printf("Sua mencao eh 'MS'.\n");
    } else {
        printf("Sua mencao eh 'SS'.\n");
    }

    return 0;
}