#Optei também por fazer em python por ser mais fácil a importação do que em C.

import json

# Função para transformar os dados em uma matriz
def matriz_faturamento(data):
    dias = []
    valores = []

    for item in data:
        dias.append(item['dia'])
        valores.append(item['valor'])

    return [dias, valores]

# Função para calcular o menor valor de faturamento
def menor_valor_faturamento(valores):
    return min(valores)

# Função para calcular o maior valor de faturamento
def maior_valor_faturamento(valores):
    return max(valores)

# Função para calcular a média de faturamento excluindo dias sem faturamento
def media_faturamento(valores):
    valores_sem_zero = [valor for valor in valores if valor > 0]
    return sum(valores_sem_zero) / len(valores_sem_zero)

# Função para calcular o número de dias em que o valor de faturamento foi superior à média mensal
def dias_acima_da_media(valores, media):
    return sum(1 for valor in valores if valor > media)

# Lendo o arquivo JSON
with open("dados.json", encoding="utf8") as arquivo:
    dados = json.load(arquivo)

#transformando os dados em uma matriz
matriz = matriz_faturamento(dados)

# Extraindo os valores de faturamento
valores = matriz[1]

# Calculando métricas
menor_valor = menor_valor_faturamento(valores)
maior_valor = maior_valor_faturamento(valores)
media = media_faturamento(valores)
dias_acima_media = dias_acima_da_media(valores, media)

# Exibindo os resultados
print("Menor valor de faturamento:", menor_valor)
print("Maior valor de faturamento:", maior_valor)
print("Número de dias com faturamento acima da média:", dias_acima_media)