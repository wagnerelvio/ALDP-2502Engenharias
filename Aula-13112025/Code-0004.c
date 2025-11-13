#include <stdio.h>
// If aninhado com múltiplas condições
// Combina duas variáveis e vários ramos de decisão dentro de um mesmo bloco aninhado.

int main() {
    int idade = 25;
    char genero = 'F';

    if (idade >= 18) {
        if (genero == 'M') {
            printf("Homem adulto.\n");
        } else if (genero == 'F') {
            printf("Mulher adulta.\n");
        } else {
            printf("Gênero não especificado.\n");
        }
    } else {
        printf("Menor de idade.\n");
    }

    return 0;
}
