#include <stdio.h>
#include <stdlib.h>
#include "cardapio.h"

void adicionar_item_cardapio(Item **cardapio, int *total_itens_cardapio,
                             int *proximoCodigoItem) {

    Item *novo;

    novo = realloc(*cardapio,
                   (*total_itens_cardapio + 1) * sizeof(Item));

    if (novo == NULL) {
        printf("Erro: nao foi possivel alocar memoria.\n");
        return;
    }

    *cardapio = novo;

    (*cardapio)[*total_itens_cardapio].codigo = *proximoCodigoItem;

    printf("\n=== ADICIONAR ITEM AO CARDAPIO ===\n");

    printf("Nome do item: ");
    scanf(" %49[^\n]", (*cardapio)[*total_itens_cardapio].nome);

    printf("Preco: R$ ");
    scanf("%f", &(*cardapio)[*total_itens_cardapio].preco);

    printf("Item cadastrado com codigo %d!\n",
           (*cardapio)[*total_itens_cardapio].codigo);

    (*total_itens_cardapio)++;
    (*proximoCodigoItem)++;
}
void mostrar_cardapio(Item *cardapio, int total_itens_cardapio) {

    if (total_itens_cardapio == 0) {
        printf("\nO cardapio esta vazio.\n");
        return;
    }

    printf("\n========== CARDAPIO ==========\n");

    for (int i = 0; i < total_itens_cardapio; i++) {
        printf("Codigo: %d\n", cardapio[i].codigo);
        printf("Nome: %s\n", cardapio[i].nome);
        printf("Preco: R$ %.2f\n", cardapio[i].preco);
        printf("------------------------------\n");
    }
}
void remover_item_cardapio(Item **cardapio, int *total_itens_cardapio) {

    if (*total_itens_cardapio == 0) {
        printf("\nO cardapio esta vazio.\n");
        return;
    }

    int codigo;
    int posicao = -1;

    mostrar_cardapio(*cardapio, *total_itens_cardapio);

    printf("\nDigite o codigo do item que deseja remover: ");
    scanf("%d", &codigo);

    for (int i = 0; i < *total_itens_cardapio; i++) {
        if ((*cardapio)[i].codigo == codigo) {
            posicao = i;
            break;
        }
    }

    if (posicao == -1) {
        printf("Item nao encontrado.\n");
        return;
    }

    for (int i = posicao; i < *total_itens_cardapio - 1; i++) {
        (*cardapio)[i] = (*cardapio)[i + 1];
    }

    (*total_itens_cardapio)--;

    printf("Item removido do cardapio!\n");
}