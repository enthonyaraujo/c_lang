# 02 - Estruturas de Dados em C

Este módulo é dedicado ao estudo e implementação de Estruturas de Dados clássicas em C, explorando o gerenciamento manual de memória e ponteiros.

---

## Trilha de Tópicos

- [ ] **1. Ponteiros e Alocação Dinâmica**
  - Ponteiros básicos (`&`, `*`) e aritmética de ponteiros
  - Gerenciamento de heap: `malloc`, `calloc`, `realloc`, `free`
  - Cuidados com *memory leaks* e *dangling pointers* (uso do Valgrind)

- [ ] **2. Registros (Structs) e Tipos Personalizados**
  - Definição de `struct` e `typedef`
  - Alinhamento de memória e *padding*
  - Ponteiros para structs (`->`)

- [ ] **3. Listas Lineares**
  - Vetores dinâmicos (estilo ArrayList/Vector)
  - Lista simplesmente encadeada (*Singly Linked List*)
  - Lista duplamente encadeada (*Doubly Linked List*)
  - Lista circular

- [ ] **4. Estruturas com Restrição de Acesso**
  - Pilhas (*Stacks* - LIFO)
  - Filas (*Queues* - FIFO)
  - Deques (*Double-ended queues*)

- [ ] **5. Estruturas Não Lineares e Árvores**
  - Árvores Binárias de Busca (BST)
  - Árvores balanceadas (AVL)
  - Tabelas Hash (Tabelas de dispersão e tratamento de colisões)

---

## Como Organizar as Implementações

Cada estrutura deve ser implementada no diretório [`src/`](src/) com separação entre interface (`.h`) e implementação (`.c`):

```text
src/
├── lista_encadeada/
│   ├── lista.h
│   ├── lista.c
│   └── main.c
```

