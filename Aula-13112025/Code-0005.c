#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**********************************************************
a) Gerar números aleatórios:
Usamos rand() % 100 para obter valores entre 0 e 99.
b) Laço for:
Percorre o vetor de 10 elementos.
c) Primeiro if:
Classifica os números em duas faixas — menores que 50 e maiores/iguais a 50.
d) If aninhado dentro do primeiro:
Dentro de cada faixa, há outro if que verifica a paridade (se é par ou ímpar).
e) Saída:
Para cada número, o programa imprime duas classificações:  a faixa e se é par ou ímpar.
**********************************************************/

int main() {
    srand(time(NULL));  // Inicializa o gerador de números aleatórios

    int numeros[10];

    // Gerar 10 números aleatórios entre 0 e 99
    printf("Números gerados:\n");
    for (int i = 0; i < 10; i++) {
        numeros[i] = rand() % 100;
        printf("%d ", numeros[i]);
    }

    printf("\n\nClassificação dos números:\n");

    // Percorrer o vetor e classificar os números
    for (int i = 0; i < 10; i++) {

        // Primeiro if: verifica a faixa de valor
        if (numeros[i] < 50) {
            printf("Número %2d é menor que 50 -> ", numeros[i]);

            // Segundo if (aninhado): verifica se é par ou ímpar
            if (numeros[i] % 2 == 0) {
                printf("par.\n");
            } else {
                printf("ímpar.\n");
            }

        } else {
            printf("Número %2d é maior ou igual a 50 -> ", numeros[i]);

            // Segundo if (aninhado dentro do else)
            if (numeros[i] % 2 == 0) {
                printf("par.\n");
            } else {
                printf("ímpar.\n");
            }
        }
    }

    return 0;
}
