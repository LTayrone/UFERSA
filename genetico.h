#ifndef GENETICO_H
#define GENETICO_H

#include <cstdint>

bool funcAvaliacao(uint16_t numero);
uint16_t cruzamentoPontoUnico(uint16_t num1, uint16_t num2);
uint16_t cruzamentoAritmetico(uint16_t num1, uint16_t num2);
uint16_t mutacaoSimples(uint16_t num);
uint16_t mutacaoDupla(uint16_t num);

#endif
#pragma once
