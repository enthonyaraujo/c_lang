# Desafio 1 - O Cálculo de Média Fantasma

**Objetivo do código:** Calcular a média exata das notas de um estudante. A média esperada para as notas `8, 7, 9, 6` é exatamente **7.5**.

```c
#include <stdio.h>

int main(void) {
    int notas[4] = {8, 7, 9, 6};
    int soma; 
    
    for (int i = 0; i <= 4; i++) {
        soma += notas[i];
    }
    
    float media = soma / 4; 
    printf("Media final do aluno: %f\n", media);
    
    return 0;
}
```

- **Sintomas do Bug:** O programa exibe uma média completamente absurda (como `-107374182.0` ou `283492.0`) ou fecha abruptamente com erro de memória.
- **Sua missão:** Identificar os **três erros lógicos** presentes neste pequeno trecho.

---
🔗 **Solução implementada:** [`../src/d01_media_fantasma.c`](../src/d01_media_fantasma.c)

