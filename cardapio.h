#ifndef CARDAPIO_H
#define CARDAPIO_H

#include "pedido.h"

void adicionar_item_cardapio(Item **cardapio, int *total_itens_cardapio, int *proximoCodigoItem);

void mostrar_cardapio(Item *cardapio, int total_itens_cardapio);

void remover_item_cardapio(Item **cardapio, int *total_itens_cardapio);

#endif