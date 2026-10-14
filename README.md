# Linguagem C & Estruturas de Dados

Repositório de anotações conceituais, mapas de aprendizado e implementações práticas das disciplinas de **Algoritmos e Programação I** e **Estruturas de Dados (1 e 2)** do curso de Engenharia de Computação da **UFERSA (Universidade Federal Rural do Semi-Árido — Campus Pau dos Ferros)**.

Este repositório é estruturado como um cofre do **[Obsidian](https://obsidian.md)**, com suporte nativo a diagramas em Mermaid, fórmulas matemáticas em KaTeX ($...$) e referências cruzadas entre conceitos.

---

## 🗺️ Mapa de Aprendizado

| Módulo | Conteúdo Principal | Teoria | Prática / Códigos |
| :--- | :--- | :--- | :--- |
| **01. Fundamentos e Lógica** | Tipos primitivos, operadores, controle de fluxo, vetores, matrizes e funções (C23) | [01 - Fundamentos e Lógica](01-logica-fundamentos/01%20-%20Fundamentos%20e%20L%C3%B3gica.md) | [Desafios de Depuração](01-logica-fundamentos/desafios/Desafios%20de%20Depura%C3%A7%C3%A3o.md) \| [Códigos](01-logica-fundamentos/src/) |
| **02. Estruturas de Dados 1** | Ponteiros, alocação dinâmica (`malloc`/`free`), `struct`, listas encadeadas, pilhas e filas | [02 - Estruturas de Dados 1](02-estruturas-de-dados-1/02%20-%20Estruturas%20de%20Dados%201.md) | [Implementações](02-estruturas-de-dados-1/src/) |
| **03. Estruturas de Dados 2** | Árvores binárias, percursos, árvores binárias de busca (BST), tabelas de dispersão e grafos | [03 - Estruturas de Dados 2](03-estruturas-de-dados-2/03%20-%20Estruturas%20de%20Dados%202.md) | [Implementações](03-estruturas-de-dados-2/src/) |

---

## 📂 Organização do Repositório

```text
c_lang/
├── 01-logica-fundamentos/         # Sintaxe, operadores, escopo e desafios de lógica
│   ├── 01 - Fundamentos e Lógica.md
│   ├── desafios/                  # Desafios de depuração de bugs sutis
│   └── src/                       # Códigos-fonte e soluções dos desafios
├── 02-estruturas-de-dados-1/       # Memória física, ponteiros e estruturas lineares
│   ├── 02 - Estruturas de Dados 1.md
│   ├── assets/                    # Diagramas e imagens conceituais
│   └── src/                       # Implementações em C (listas, pilhas, filas)
├── 03-estruturas-de-dados-2/       # Estruturas hierárquicas e avançadas
│   ├── 03 - Estruturas de Dados 2.md
│   └── src/                       # Implementações em C (árvores binárias e BST)
└── .obsidian/                     # Preferências do cofre Obsidian
```

---

## 🛠️ Compilação e Execução

Para compilar os programas em C utilizando o compilador GCC:

```bash
# Compilação com avisos rigorosos e padrão moderno
gcc -Wall -Wextra -std=c23 caminho/do/arquivo.c -o programa

# Execução do binário
./programa
```
