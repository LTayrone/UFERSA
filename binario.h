#ifndef BINARIO_H
#define BINARIO_H

#include <cstdint>

// Função para ligar um bit específico
uint16_t ligarBit(uint16_t numero, int posicao);

// Função para desligar um bit específico
uint16_t desligarBit(uint16_t numero, int posicao);

// Função para testar se um bit está ligado
bool testarBit(uint16_t numero, int posicao);

// Operação AND bit a bit entre dois números
uint16_t andBinario(uint16_t numero_01, uint16_t numero_02);

// Operação OR bit a bit entre dois números
uint16_t orBinario(uint16_t numero_01, uint16_t numero_02);

// Retorna os 8 bits menos significativos de um número
uint16_t bitsBaixos(uint16_t numero);

// Retorna os 8 bits mais significativos de um número
uint16_t bitsAltos(uint16_t numero);

#endif // BINARIO_H