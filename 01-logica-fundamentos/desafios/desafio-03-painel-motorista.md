# Desafio 3 - O Painel do Motorista Confuso

**Objetivo do código:** Exibir o estado atual do motor com base em uma variável de controle (`0` = Desligado, `1` = Aquecendo, `2` = Funcionando).

```c
#include <stdio.h>

int main(void) {
    int status_motor = 1; // O motor esta "Aquecendo"

    switch (status_motor) {
        case 0:
            printf("Motor Desligado.\n");
            break;
        case 1:
            printf("Motor Aquecendo...\n");
        case 2:
            printf("Motor em Funcionamento Pleno!\n");
            break;
        default:
            printf("Status de erro detectado.\n");
            break;
    }

    return 0;
}
```

- **Sintomas do Bug:** O motor está apenas aquecendo, mas o painel exibe:

```text
Motor Aquecendo...
Motor em Funcionamento Pleno!
```

- **Sua missão:** Encontrar a falha de fluxo que causou a dupla ativação de estados.

---
🔗 **Solução implementada:** [`../src/d03_painel_motorista.c`](../src/d03_painel_motorista.c)

