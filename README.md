# DuplaFenda

# Projeto: Simulação de Dupla Fenda em C

#Objetivo

##Simular o padrão de interferência de uma experiência de dupla fenda usando programação em C, focando na função de onda de partículas e na probabilidade de detecção em cada posição da tela.

# Conceitos Físicos

## Função de onda (ψ): Representa o estado quântico de cada partícula.

## Superposição: Partículas podem passar por duas fendas simultaneamente, criando interferência.

## Interferência: Probabilidade final de detectar a partícula é dada pela soma das amplitudes complexas dos dois caminhos e o quadrado do módulo:

𝑃(𝑥)=∣𝜓1+𝜓2∣^2

## Amplitude (𝐴): Representa a intensidade do caminho; neste projeto foi fixada como 1.

## Fase (𝜙): Calculada como:
𝜙𝑖 = 𝑘𝐿𝑖

Sendo:
𝐿𝑖 o comprimento do caminho para a fenda i e k o número de onda da partícula.


# Estrutura do Código
1. Função numero_complexo

Responsável por calcular a probabilidade de detectar a partícula em uma determinada posição:

## Recebe como entrada:

a, b: valores iniciais de vetor complexo (somente para armazenar parte real e imaginária se necessário futuramente)

complexo[2]: vetor representando o número complexo

k: número de onda da partícula

L1, L2: distâncias da posição do ponto da tela até cada fenda

# Fluxo interno:

## Calcula os ângulos de fase:

𝜙1=𝑘𝐿1 , 𝜙2=𝑘𝐿2
	​
## Calcula as partes real e imaginária das funções de onda:

soma_real = cos(𝜙1)+cos(𝜙2)
soma_complexa = sin(𝜙1)+sin(𝜙2)

## Calcula a probabilidade como quadrado do módulo:

𝑃(𝑥) = (soma_real)^2 + (soma_complexa)^2

## Retorna probabilidade_particula.

# 2. Função main

## Define parâmetros da simulação:

largura = 80 → número de colunas da tela (resolução horizontal)

separacao_fendas → distância entre as fendas

Cria vetor complexo[2] e probabilidades[largura] para armazenar resultados.

Itera sobre cada coluna da tela, calcula:

coluna → posição x da coluna

L1, L2 → distância de cada fenda até a coluna

probabilidades[i] → resultado da função numero_complexo

Imprime os valores de probabilidade para cada posição.

# Observações Técnicas

Probabilidades estão normalizadas apenas pela soma das amplitudes, sem fator de normalização global.

Tela ainda não implementada graficamente; apenas cálculo das probabilidades.

Vetores complexos são representados como arrays de tamanho 2 [real, imaginário].

## Futuras melhorias:

Mapear probabilidades[i] para altura de caracteres na tela para visualização do padrão de interferência.

Implementar escala de pico e normalização para melhor representação visual.

Possível introdução de biblioteca gráfica simples para visualização.
