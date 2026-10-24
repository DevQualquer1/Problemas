N = int(input())

dicionario = {}

for i in range(N):
    chave, traducao = input().split(" ")
    dicionario[chave] = traducao

for palavra in dicionario.values():
    print(palavra, end= " ")