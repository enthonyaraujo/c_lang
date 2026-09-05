#include <stdio.h>

int main(void) {
    int divisor = 0;
    int dividendo = 10;

    // Proteção para evitar a divisão se o divisor for zero
    if (divisor != 0) {
        printf("Resultado valido!\n");
    } else {
        printf("Erro: Divisao por zero evitada.\n");
    }

    return 0;
}