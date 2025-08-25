#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída
#include <string.h> // Inclui a biblioteca para manipulação de strings

int main() {
    int idade;                      // Declaração da variável inteira para a idade
    float salario;                  // Declaração da variável de ponto flutuante para o salário
    char nome_completo[50];         // Declaração da string para o nome completo
    char cidade[50];                // Declaração da string para a cidade
    char estado[3];                 // Declaração da string para o estado (2 caracteres + '\0')

    // Entrada de dados
    printf("Digite seu nome completo: ");
    fgets(nome_completo, 50, stdin);  // Lê o nome completo com espaços
    nome_completo[strcspn(nome_completo, "\n")] = '\0'; // Remove a nova linha do final

    printf("Digite sua idade: ");
    scanf("%d", &idade); // Lê a idade

    printf("Digite seu salário: ");
    scanf("%f", &salario); // Lê o salário

    getchar(); // Consome o '\n' que ficou no buffer após o scanf anterior

    printf("Digite sua cidade: ");
    scanf(" %[^\n]", cidade); // Lê a cidade com espaços

    printf("Digite seu estado (sigla de 2 letras): ");
    scanf("%2s", estado); // Lê o estado (máximo de 2 caracteres)

    // Exibindo as informações
    printf("\n--- Informações Pessoais ---\n");
    printf("Nome completo: %s\n", nome_completo);
    printf("Idade: %d anos\n", idade);
    printf("Salário: R$%.2f\n", salario);
    printf("Cidade: %s\n", cidade);
    printf("Estado: %s\n", estado);

    return 0; // Indica que o programa terminou com sucesso
}
