#include <stdio.h>

int main() {
    int a = 10, b = 5;

    if (a > 0) {              // Primeiro teste
        if (b > 0) {          // Segundo teste, dentro do primeiro
            printf("Ambos os números são positivos.\n");
        }
    }

    return 0;
}
