# Fundamentos e Lógica de Programação em C

Este módulo cobre os pilares essenciais da linguagem C, desde os tipos primitivos e representação em memória até controle de fluxo e funções.

---

## 1 Fundamentos

### 1.1 Tipos de dados

| Tipo     | Tamanho | Tamanho | Propósito Lógico                                                              | Intervalo Típico (C23 - Complemento de Dois)         |
| -------- | ------- | ------- | ----------------------------------------------------------------------------- | ---------------------------------------------------- |
| `char`   | 1 Byte  | 8 bits  | guarda um único caractere (como `'a'`).                                       | `-128` a `127`                                       |
| `short`  | 2 Bytes | 16 bits | armazena números inteiros em um espaço reduzido de memória.                   | `-32.768` a `32.767`                                 |
| `int`    | 4 Bytes | 32 bits | armazena números inteiros com capacidade padrão/maior.                        | `-2.147.483.648` a `2.147.483.647`                   |
| `float`  | 4 Bytes | 32 bits | guarda números com casas decimais (precisão simples).                         | `±1.4E-45` a `±3.4E38` (~7 dígitos significativos)   |
| `double` | 8 Bytes | 64 bits | guarda números com casas decimais com o dobro de precisão e alcance do float. | `4.9E-324` a `±1.8E308` (~15 dígitos significativos) |

#### Sintaxe de Declaração

```c
char caractere = 'A';      // Guarda o valor decimal 65 (ASCII de 'A')
int contador = 10;         // Reserva 4 bytes
float taxa = 5.75f;        // Sufixo 'f' evita a conversão automática para double
double precisao = 3.14159; // Aloca 8 bytes para precisão dupla
```

---

## 2 Tipos de Operadores

### 2.1 Aritmética e Incremento

| Tipo | **Operação** |
| ---- | ------------ |
| `+`  | Soma         |
| `-`  | Subtração    |
| `%`  | Módulo (Resto da Divisão inteira) |
| `++` | Incremento   |
| `--` | Decremento   |

### 2.2 Operadores Relacionais

| Tipo | Operação         | Exemplo (`x = 5`, `y = 10`) | Avaliação Inteira em C |
| ---- | ---------------- | --------------------------- | ---------------------- |
| `==` | Igual a          | `x == y`                    | `0` (Falso)            |
| `!=` | Diferente de     | `x != y`                    | `1` (Verdadeiro)       |
| `>`  | Maior que        | `x > y`                     | `0` (Falso)            |
| `<`  | Menor que        | `x < y`                     | `1` (Verdadeiro)       |
| `>=` | Maior ou igual a | `x >= 5`                    | `1` (Verdadeiro)       |
| `<=` | Menor ou igual a | `y <= 10`                   | `1` (Verdadeiro)       |

### 2.3 Operadores Lógicos

| Tipo | Operação         | Comportamento Lógico                                             |
| ---- | ---------------- | ---------------------------------------------------------------- |
| `&&` | AND (E lógico)   | É **true** quando todas as condições forem **true**.             |
| `\|\|` | OR (Ou lógico)   | É **true** se pelo menos uma das condições for **true**.         |
| `!`  | NOT (Não lógico) | Inverte a condição: se era **true** vira **false** e vice-versa. |

---

## 3 Estruturas Condicionais

### 3.1 If, If Else e Else
São estruturas de desvio para tomadas de decisão sequenciais e mutuamente exclusivas.

```c
if (condicao) {
    // se verdadeiro, faça isso
} else {
    // caso contrario, faça isso
}
```

### 3.2 Switch-Case
Escolha direta com base no valor exato de uma variável inteira constante. Exige o comando `break` para interromper o fluxo; caso contrário, a execução continuará nos blocos inferiores (*fall-through*).

```c
switch (variavel) {
    case valor1:
        // Código executado se variavel == valor1
        break;
    case valor2:
        // Código executado se variavel == valor2
        break;
    default:
        // Código executado se nenhum caso for verdadeiro
        break;
}
```

---

## 4 Loops e Repetição

### 4.1 For
Agrupa de forma organizada a inicialização, teste e o passo de atualização em seu cabeçalho.

_Diferença Pré (`++i`) vs. Pós (`i++`) Incremento:_
- `++i` (Pré): Altera o valor na memória imediatamente antes de a expressão ser computada.
- `i++` (Pós): Fornece o valor atual para a expressão e agenda o incremento para depois do ponto de sequência. *No cabeçalho do `for`, como o passo é uma instrução isolada, ambos os operadores geram exatamente o mesmo efeito prático.*

```c
for (int i = 0; i < 5; i++) { // Inicialização; Condição; Passo 
    printf("i = %d\n", i);
}
```

### 4.2 Loop While (Pré-Testado)
A condição de parada é testada **antes** de executar o bloco de código interno. Se for falsa no início, o corpo não executa nenhuma vez.

```c
int tentativas = 3; // Inicialização

while (tentativas > 0) { // Condição de parada 
    printf("Acesso autorizado.\n");
    tentativas--; // Passo de atualização 
}
```

### 4.3 Loop Do-While (Pós-Testado)
O bloco de instruções é executado **obrigatoriamente pelo menos uma vez**, e o teste condicional ocorre **ao final** da iteração.

```c
int valor = 0;

do {
    printf("Executa ao menos uma vez.\n");
    valor++;
} while (valor < 1); // Teste de permanência (exige ';' obrigatório ao final)
```

### 4.5 Controle de Fluxo Interno
- `break`: Interrompe e encerra de imediato a execução do loop.
- `continue`: Aborta o restante das instruções da iteração corrente e salta direto ao passo de incremento/teste.

```c
for (int i = 1; i <= 5; i++) {
    if (i == 2) continue; // Aborta a impressão de i=2, salta para o passo "i++"
    if (i == 4) break;    // Encerra definitivamente o loop inteiro
    printf("%d ", i);     // Imprime: 1 3
}
```

---

## 5 Vetores e Matrizes

### 5.1 Vetores Lineares (Arrays Unidimensionais)
Vetor contíguo e homogêneo armazenado na memória física. Os índices vão estritamente de `0` até `N-1`.

```c
int vetor[5] = {14, 28, 5, 90, 42};
int alvo = 90;
int indice_encontrado = -1; // -1 indica ausência por padrão 

// Busca Linear (Varredura Sequencial)
for (int i = 0; i < 5; i++) {
    if (vetor[i] == alvo) {
        indice_encontrado = i; // Grava o índice exato
        break;                 // Interrompe a busca de imediato (bom para otimização)
    }
}
```

### 5.2 Matrizes (Bidimensionais)
Dispostas de maneira linearizada na memória de acordo com o esquema de **linha principal (row-major order)**. Exige loops aninhados (laço externo fixa a linha corrente e o interno percorre as colunas).

```c
int matriz[2][3] = { // [linhas][colunas]
    {10, 20, 30}, // Linha 0 (colunas 0, 1, 2)
    {40, 50, 60}  // Linha 1 (colunas 0, 1, 2) 
};

for (int l = 0; l < 2; l++) {       // Fixa a linha
    for (int c = 0; c < 3; c++) {   // Varre cada coluna horizontalmente 
        printf("%d ", matriz[l][c]);
    }
    printf("\n"); // Salta uma linha física ao fim de cada linha da matriz 
}
```

---

## 6 - Modularização e Funções

### 6.1 Anatomia de uma Função (Como Implementar)
Funções são **subprogramas** isolados e independentes construídos sob o princípio de **Dividir para Conquistar**. Elas recebem argumentos do chamador, processam as operações internamente e devolvem um resultado final.

Para implementar e usar uma função de forma consistente e segura, deve-se seguir três etapas rígidas:

1. **Protótipo (Declaração):** Informa ao compilador a assinatura da função (tipo de retorno, nome e parâmetros) antes que ela seja chamada. Geralmente colocado antes da função `main`.
2. **Chamada (Invocação):** Executa a função passando os valores necessários (argumentos reais).
3. **Definição:** O corpo físico do subprograma onde o código da tarefa está implementado.

```c
#include <stdio.h>

// 1. PROTÓTIPO (Garante que o compilador valide os tipos de dados)
int calcular_dobro(int numero); 

int main(void) {
    int valor = 7;
    
    // 2. CHAMADA (Passa o argumento real 'valor' e armazena o retorno)
    int resultado = calcular_dobro(valor); 
    
    printf("Dobro de %d = %d\n", valor, resultado);
    return 0;
}

// 3. DEFINIÇÃO (A implementação lógica com o parâmetro formal 'numero')
int calcular_dobro(int numero) { 
    return numero * 2; // Retorna o valor calculado e devolve o controle ao chamador
}
```

_Nota de Atualização (Padrão C23):_ Até o padrão C11, declarar uma função vazia como `void f()` indicava que os parâmetros eram omitidos ou indeterminados (estilo K&R), permitindo enviar múltiplos argumentos inválidos sem erro de compilação. **No C23, `void f()` equivale estritamente a `void f(void)`**, proibindo o envio de qualquer argumento e gerando erro imediato de compilação caso violado.

---

### 6.2 Tipos de Funções 
Podemos categorizar qualquer função com base no envio de dados de entrada (**parâmetros**) e na devolução de dados de saída (**retorno**):

| Tipo de Função | Recebe Parâmetro? | Retorna Valor? | Aplicação Lógica Comum |
| --- | --- | --- | --- |
| **Sem Parâmetro e Sem Retorno** | Não | Não | Executar rotinas fixas na tela (como carregar um menu ou cabeçalho). |
| **Com Parâmetro e Sem Retorno** | Sim | Não | Imprimir dados formatados na tela ou preencher dados de uma coleção. |
| **Sem Parâmetro e Com Retorno** | Não | Sim | Leitura protegida de dados do teclado ou geradores de ID. |
| **Com Parâmetro e Com Retorno** | Sim | Sim | Operações matemáticas, validações de negócio e filtros. |

#### Sintaxe e Implementação dos 4 Tipos:

**1. Sem Parâmetro e Sem Retorno (`void` / `void`)**
```c
void exibir_cabecalho(void) {
    printf("=================================\n");
    printf("   SISTEMA DE GESTAO DE NOTAS    \n");
    printf("=================================\n");
}
```

**2. Com Parâmetro e Sem Retorno (`void` / com dados)**
```c
void imprimir_relatorio(int aprovados, int total) {
    printf("Taxa de aprovacao: %.1f%%\n", ((float)aprovados / total) * 100);
}
```

**3. Sem Parâmetro e Com Retorno (tipo / `void`)**
```c
// static garante persistência de estado e retenção na memória entre chamadas
int obter_sequencial_id(void) {
    static int proximo_id = 1000; // Inicializada apenas uma vez
    proximo_id++;
    return proximo_id;
}
```

**4. Com Parâmetro e Com Retorno (tipo / com dados)**
```c
// bool, true e false são palavras-chave nativas a partir do C23 
bool verificar_aprovacao(float media) {
    return (media >= 7.0f); // Retorna true se maior/igual a 7.0, ou false 
}
```

---

## Desafios Práticos

Pratique a depuração de erros sutis de lógica e escopo:
- [Acessar Desafios de Lógica de Programação](desafios/README.md)
- Códigos-fonte e soluções disponíveis em [`src/`](src/)

<div class="chapter-nav">
  <div class="chapter-nav-prev">[[README|← Início]]</div>
  <a href="#" class="chapter-nav-top">↑ De volta ao topo</a>
  <div class="chapter-nav-next">[[02-estruturas-de-dados-1/README|02. Estruturas de dados 1 →]]</div>
</div>


