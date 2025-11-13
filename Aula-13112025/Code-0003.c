#include <stdio.h>
// If aninhado com else
// O primeiro if verifica se o aluno passou.
// E dentro deste primeiro if que verifica se passou com distinção.

int main() {
    int nota = 85;

    if (nota >= 60) {
        if (nota >= 90) {
            printf("Aprovado com distinção!\n");
        } else {
            printf("Aprovado!\n");
        }
    } else {
        printf("Reprovado!\n");
    }

    return 0;
}
