#include <stdio.h>

int main() {
    int a, b;

    // Solicita os números ao usuário
    printf("Digite o primeiro número (a): ");
    scanf("%d", &a);

    printf("Digite o segundo número (b): ");
    scanf("%d", &b);

    // Estrutura de if aninhados
    if (a > 0) {              // Primeiro teste
        if (b > 0) {          // Segundo teste, dentro do primeiro
            printf("Ambos os números são positivos.\n");
        } else {
            printf("O primeiro número é positivo, mas o segundo não é.\n");
        }
    } else {
        if (b > 0) {
            printf("O primeiro número não é positivo, mas o segundo é.\n");
        } else {
            printf("Nenhum dos números é positivo.\n");
        }
    }

    return 0;
}
