
    printf("Entre com a nota do motorista: ");
    int deu_certo = scanf("%i", &nota);

    // if (nota == 1) {
    //     printf("Ganhou 1 estrela!\n");
    // } else if (nota == 2) {
    //     printf("Ganhou 2 estrelas!\n");
    // } else if (nota == 3) {
    //     printf("Ganhou 3 estrelas!\n");
    // } else if (nota == 4) {
    //     printf("Ganhou 4 estrelas!\n");
    // } else if (nota == 5) {
    //     printf("Ganhou 5 estrelas!\n");
    // } else {
    //     printf("Nota invalida!\n");
    // }

    switch(nota) {
        case 1: printf("Ganhou 1 estrela!\n"); break;
        case 2: printf("Ganhou 2 estrelas!\n"); break;
        case 3: printf("Ganhou 3 estrelas!\n"); break;
        case 4: printf("Ganhou 4 estrelas!\n"); break;
        case 5: printf("Ganhou 5 estrelas!\n"); break;
        default: printf("Nota invalida!\n");

    }
  printf("menu principal\n");
  printf("--------------------\n");
  printf("1 - saldo\n");
  printf("2 - recarga saldo\n");
  printf("3 - ver recados\n");
  printf("4 - ultimas ligacoes\n");
  printf("5 - sair\n");
  printf("entre com a opcao =>\n");
  int opcao = 0;
  deu_certo = scanf("%i", &opcao);

  switch(opcao){
    case 1: printf("saldo de R$ 10.0 ta pobre ce loko\n"); break;
    case 2: printf("escolha de um valor\n"); break;
    case 3: printf("voce tem 4 recados\n"); break;
    case 4: printf("61 4002-8922\n 61 9999-9999\n"); break;
    case 5: printf("saindo...\n"); break;
    default: printf("opcao invalida\n");
  }
  return 0;
}