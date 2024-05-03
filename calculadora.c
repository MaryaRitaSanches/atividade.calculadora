#include <stdio.h>
#include <stdlib.h>

int main() {
    char operacao;
    int n1, n2, resultado;
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {
        printf("Digite a operacao desejada (+, -, *, /): ");
        scanf(" %c", &operacao);
        
        printf("Digite o primeiro valor:");
        if (scanf("%d", &n1) != 1) {
            printf("Entrada inválida. Por favor, insira um número válido.\n");
            continue;
        }
        
        printf("Digite outro valor:");
        if (scanf("%d", &n2) != 1) {
            printf("Entrada inválida. Por favor, insira um número válido.\n");
            continue;
        }
        
        if (operacao == '+') {
            resultado = n1 + n2;
            printf("Resultado: %d\n", resultado);
        } else if (operacao == '-') {
            resultado = n1 - n2;
            printf("Resultado: %d\n", resultado);
        } else if (operacao == '*') {
            resultado = n1 * n2;
            printf("Resultado: %d\n", resultado);
        } else if (operacao == '/') {
            if (n2 != 0) {
                resultado = n1 / n2;
                printf("Resultado: %d\n", resultado);
            } else {
                printf("Erro: divisão inválida.\n");
            }
        } else {
            printf("Operação inválida.\n");
        }
        
        printf("Deseja continuar (sim/nao)? ");
        scanf(" %c", &continuar);
    }
    
    return 0;
}
