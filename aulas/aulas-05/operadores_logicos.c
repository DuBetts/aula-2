#include <stdio.h>

int main() {
    int p = 0;
    int q = 0;

    //E logico
    int e_logico = p && q;
    printf("%i E %i = %i\n", e_logico);
    q = 1;
    e_logico2 = p && q;
    printf("%i E %i = %i\n", e_logico);
    p = 1;
    q = 0;
    e_logico3 = p && q;
    printf("%i E %i = %i\n", e_logico);
    q = 1;
    e_logico4 = p && q;
    printf("%i E %i = %i\n", e_logico);
    q = 1;
    printf("%i E %i = %i\n", e_logico);
    
    //Ou logico
    int ou_logico = p || q;
    p = 0;
    q = 0;
    int ou_logico2 = p || q;
    print("%i OU %i = %i\n", ou_logico);
    q = 1;
    ou_logico3 = p || q;
    priintf("%i OU %i = %i\n", ou_logico);
    //NAO logico
    int nao_logico = !p;
    return 0;
}
