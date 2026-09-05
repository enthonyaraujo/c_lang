# Desafio 4 - O Desconto Invisível (Funções e Escopo)

**Objetivo do código:** Atualizar o preço de um produto aplicando uma taxa de desconto através de uma função dedicada. O preço esperado para o produto após aplicar 10% de desconto sobre `100.0f` é exatamente **90.00**.

```c
#include <stdio.h>

// Funcao que deveria aplicar o desconto diretamente no preco original
void aplicar_desconto(float preco_produto, float taxa) {
    preco_produto = preco_produto * (1.0f - taxa);
}

int main(void) {
    float preco = 100.0f;

    aplicar_desconto(preco, 0.10f); // Tenta aplicar 10% de desconto

    printf("Preco final na loja: R$ %.2f\n", preco);
    return 0;
}
```

- **Sintomas do Bug:** O programa compila perfeitamente e executa sem erros, mas o painel da loja exibe:

```text
Preco final na loja: R$ 100.00
```

O desconto de 10% foi completamente ignorado pelo sistema.

- **Sua missão:**
    1. Explicar qual regra de **alocação de memória (quadros de pilha / stack frames)** foi violada aqui.
    2. Corrigir a assinatura e o corpo da função `aplicar_desconto`, além da sua chamada dentro da `main`, utilizando a técnica de **referência simulada com ponteiros** ou **retorno de valor**.

---
🔗 **Solução implementada:** [`../src/d04_desconto_invisivel.c`](../src/d04_desconto_invisivel.c)

