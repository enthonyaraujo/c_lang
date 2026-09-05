# Desafio 2 - A Armadilha do Curto-Circuito

**Objetivo do código:** Evitar que o programa quebre em tempo de execução ao tentar dividir um número por zero, usando uma estrutura de decisão inteligente para validar o divisor.

```c
#include <stdio.h>

int main(void) {
    int divisor = 0;
    int dividendo = 10;

    // Proteção para evitar a divisão se o divisor for zero
    if ((dividendo / divisor) > 2 && divisor != 0) {
        printf("Resultado valido!\n");
    } else {
        printf("Erro: Divisao por zero evitada.\n");
    }

    return 0;
}
```

- **Sintomas do Bug:** O programa ignora o bloco do `else`, tenta executar a divisão e sofre um crash fatal (*Floating point exception / Core dumped*).
- **Sua missão:** Explicar por que a "guarda lógica" falhou miseravelmente em proteger a divisão.

---
🔗 **Solução implementada:** [`../src/d02_curto_circuito.c`](../src/d02_curto_circuito.c)

