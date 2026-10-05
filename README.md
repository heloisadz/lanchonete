# Gerenciamento de Pedidos - Lanchonete

Projeto desenvolvido em linguagem C para a disciplina de Estrutura de Dados.

O sistema simula o gerenciamento de pedidos de uma lanchonete utilizando duas estruturas de dados:

- **Fila:** armazena os pedidos que aguardam preparo, seguindo o princípio FIFO (First In, First Out).
- **Pilha:** armazena o histórico dos pedidos preparados, seguindo o princípio LIFO (Last In, First Out).

Cada pedido pode conter vários itens do cardápio.

## Funcionalidades

O sistema permite:

1. Adicionar pedido à fila
2. Consultar o próximo pedido
3. Preparar o próximo pedido
4. Consultar o último pedido preparado
5. Consultar um pedido do histórico por ID
6. Remover o último pedido do histórico
7. Mostrar a fila de espera
8. Mostrar o histórico de pedidos
0. Sair

## Estrutura do projeto

```text
lanchonete/
├── main.c
├── fila.c
├── fila.h
├── pilha.c
├── pilha.h
├── cardapio.c
├── cardapio.h
└── README.md
```

## Tecnologias

- Linguagem C
- GCC
- Estruturas encadeadas
- Ponteiros
- Alocação dinâmica de memória (`malloc`, `realloc` e `free`)

## Como executar

Compile os arquivos do projeto com:

```bash
gcc main.c fila.c pilha.c cardapio.c -o lanchonete
```

Depois, execute:

```bash
./lanchonete
```

Ou, diretamente:

```bash
gcc main.c fila.c pilha.c cardapio.c -o lanchonete
./lanchonete
```

## Objetivo

Aplicar os conceitos de filas e pilhas encadeadas em um sistema prático de gerenciamento de pedidos, trabalhando também com estruturas (`struct`), ponteiros e alocação dinâmica de memória.