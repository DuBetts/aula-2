#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_JOGADORES 10
#define MAX_RESPOSTA 100

int main() {
    // Função para remover espaços em branco extras de uma string
    void trim(char *str) {
        char *end;
        // Trim leading space
        while (isspace((unsigned char)*str)) str++;
        if (*str == 0) // All spaces?
            return;
        // Trim trailing space
        end = str + strlen(str) - 1;
        while (end > str && isspace((unsigned char)*end)) end--;
        // Write new null terminator
        *(end + 1) = 0;
    }

    // Função para comparar strings de forma insensível a maiúsculas e minúsculas
    int compareIgnoreCase(char *str1, char *str2) {
        while (*str1 && *str2) {
            if (tolower((unsigned char)*str1) != tolower((unsigned char)*str2)) {
                return 0;
            }
            str1++;
            str2++;
        }
        return *str1 == *str2;
    }

    char resposta[MAX_RESPOSTA];
    char nomes[MAX_JOGADORES][50];
    int pontuacoes[MAX_JOGADORES];
    int opcao;

    // Inicializando o ranking
    for (int i = 0; i < MAX_JOGADORES; i++) {
        strcpy(nomes[i], "-");
        pontuacoes[i] = 0;
    }

    do {
        int clear_status = system("clear");
        if (clear_status == -1) {
            fprintf(stderr, "Erro ao limpar a tela.\n");
        }
        printf("\n-- Menu --\n");
        printf("1. Jogar Quiz\n");
        printf("2. Ver Ranking\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        int scanf_status = scanf("%d", &opcao);
        if (scanf_status == 0) {
            fprintf(stderr, "Erro ao ler a opção.\n");
        }
        while (getchar() != '\n'); // Limpar o buffer de entrada

        switch (opcao) {
            case 1: {
                printf("Bem-vindo ao quiz sobre Truco\n\n");

                // Perguntar o nome do jogador
                char nome_jogador[50];
                printf("Digite seu nome: ");
                if (fgets(nome_jogador, sizeof(nome_jogador), stdin) != NULL) {
                    nome_jogador[strcspn(nome_jogador, "\n")] = '\0'; // Remove o caractere de nova linha
                } else {
                    fprintf(stderr, "Erro ao ler o nome do jogador.\n");
                    break;
                }

                int pontuacao = 0;

                // Array de perguntas e respostas
                char *perguntas[10] = {
                     "1. Quais são as principais variações do truco jogadas no Brasil?",
                     "2. Qual é a hierarquia das cartas no truco mineiro? As 4 primeiras. ",
                     "3. O que significa pedir truco, seis, nove e doze?",
                     "4. Qual é a carta mais forte do truco mineiro?",
                     "5. Como funciona a “mão de onze”?",
                     "6. O que significa ser pé na rodada?",
                     "7. O que é mão de ferro?",
                     "8. Qual é a diferença entre o truco mineiro e o truco paulista?",
                     "9. A carta porco ou porcão é usado em tipo de truco?",
                     "10. Em que rodada vale a pena usar a carta mais forte?"
                 };

                 char *respostas[10] = {
                     "Truco mineiro, paulista e gaucho",
                     "Zap, Copas, Espadilha, Ouros ",
                     "Aumentar o valor dos pontos na rodada",
                     "Zap",
                     "A dupla q estiver na mao de onze pode olhas as cartas um do outro",
                     "Garatir a primeira rodada",
                     "rodada jogando com as cartas sem ver",
                     "Truco mineiro tem manilha fixa e paulista manilha rodada",
                     "Truco mineiro",
                     "Na primeira e na ultima rodada"
                  };

                // Loop para fazer as perguntas
                for (int i = 0; i < 10; i++) {
                    printf("%s ", perguntas[i]);
                    if (fgets(resposta, sizeof(resposta), stdin) != NULL) {
                        resposta[strcspn(resposta, "\n")] = '\0'; // Remove o caractere de nova linha
                        trim(resposta); // Remover espaços em branco extras
                        if (compareIgnoreCase(resposta, respostas[i])) {
                            printf("Correto!\n");
                            pontuacao++;
                        } else {
                            printf("Errado! A resposta correta é: %s\n", respostas[i]);
                        }
                    } else {
                        fprintf(stderr, "Erro ao ler a resposta.\n");
                    }
                }

                // Adicionar o jogador ao ranking
                int posicao = -1;
                for (int i = 0; i < MAX_JOGADORES; i++) {
                    if (strcmp(nomes[i], nome_jogador) == 0) {
                        posicao = i;
                        break;
                    }
                }

                if (posicao == -1) {
                    for (int i = 0; i < MAX_JOGADORES; i++) {
                        if (strcmp(nomes[i], "-") == 0) {
                            posicao = i;
                            break;
                        }
                    }
                }

                if (posicao != -1) {
                    strcpy(nomes[posicao], nome_jogador);
                    pontuacoes[posicao] += pontuacao;
                } else {
                    printf("Ranking cheio! Não é possível adicionar mais jogadores.\n");
                }
                printf("\nFim do quiz! Sua pontuação foi: %d\n", pontuacao);
                break;
            }
            case 2:
                printf("\n-- Ranking --\n");
                for (int i = 0; i < MAX_JOGADORES; i++) {
                    printf("%d. %s - %d\n", i + 1, nomes[i], pontuacoes[i]);
                }
                printf("precione entrer para continuar\n");
                getchar();
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
