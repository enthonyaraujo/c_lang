# 🚀 Trilha de Estudos: Linguagem C (C17 / C23)

Repositório estruturado para o aprendizado prático e teórico da linguagem C moderna, projetado para funcionar perfeitamente tanto como **laboratório de código** (VS Code, GCC, Make) quanto como **base de conhecimento interligada no Obsidian**.

---

## 📂 Estrutura do Repositório

```text
c_lang/
├── .gitignore                      # Regras de exclusão para binários, VS Code e Obsidian
├── .vscode/                        # Configurações de automação e build no VS Code
│   └── tasks.json                  # Tarefa de compilação GCC (C23 com warnings rigorosos)
├── bin/                            # Destino de artefatos compilados (ignorado no Git)
├── README.md                       # Guia geral e índice da trilha
│
├── 01-logica-fundamentos/          # Módulo 1: Fundamentos da Linguagem
│   ├── README.md                   # Teoria completa: tipos, operadores, loops e funções
│   ├── desafios/                   # Enunciados de depuração e análise de bugs
│   │   ├── README.md               # Tabela com todos os desafios
│   │   ├── desafio-01-media-fantasma.md
│   │   ├── desafio-02-curto-circuito.md
│   │   ├── desafio-03-painel-motorista.md
│   │   └── desafio-04-desconto-invisivel.md
│   └── src/                        # Implementações e soluções em C
│       ├── d01_media_fantasma.c
│       ├── d02_curto_circuito.c
│       ├── d03_painel_motorista.c
│       └── d04_desconto_invisivel.c
│
└── 02-estruturas-de-dados/         # Módulo 2: Estruturas de Dados e Memória
    ├── README.md                   # Trilha de structs, ponteiros, heap e listas
    └── src/                        # Implementações práticas (.h e .c)
```

---

## 🗺️ Mapa de Aprendizado

| Módulo | Conteúdo Principal | Teoria | Prática / Códigos |
|---|---|---|---|
| **01. Fundamentos e Lógica** | Tipos primitivos, operadores, condicionais, loops, vetores, matrizes e funções (C23) | [Notas de Fundamentos](01-logica-fundamentos/README.md) | [Desafios de Depuração](01-logica-fundamentos/desafios/README.md) \| [Códigos](01-logica-fundamentos/src/) |
| **02. Estruturas de Dados** | Ponteiros, alocação dinâmica (`malloc`/`free`), `struct`, listas encadeadas, pilhas, filas e árvores | [Notas de Estruturas](02-estruturas-de-dados/README.md) | [Implementações](02-estruturas-de-dados/src/) |

---

## ⚙️ Compilação e Execução

### 1. Pelo Terminal (GCC)

Para compilar qualquer arquivo com os padrões modernos e flags de segurança recomendadas:

```bash
# Compilar um desafio específico gerando o binário na pasta bin/
gcc -Wall -Wextra -pedantic -std=c23 01-logica-fundamentos/src/d01_media_fantasma.c -o bin/d01

# Executar o programa
./bin/d01
```

#### Flags explicadas:
- `-Wall -Wextra`: Ativa todos os alertas essenciais do compilador sobre possíveis erros lógicos.
- `-pedantic`: Exige aderência estrita ao padrão da linguagem.
- `-std=c23`: Utiliza a versão mais recente do padrão C.
- `-g`: Inclui informações de depuração para uso com o GDB.

### 2. Pelo VS Code
- Abra qualquer arquivo `.c` no editor.
- Pressione **`Ctrl + Shift + B`** para acionar o build automático configurado em [`.vscode/tasks.json`](.vscode/tasks.json).
- O terminal integrado fará a compilação instantânea.

---

## 🧠 Integração com o Obsidian

Este repositório é configurado nativamente como um cofre (*vault*) do Obsidian:
- As notas utilizam **Wikilinks** (`[[...]]`) e **Markdown padrão** simultaneamente.
- O gráfico de conhecimento (*Graph View*) mapeia conexões entre conceitos teóricos e desafios práticos.
- Arquivos de estado volátil de tela (`workspace.json`) são ignorados pelo Git para manter commits limpos.

